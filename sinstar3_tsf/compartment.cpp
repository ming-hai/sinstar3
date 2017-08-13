#include "stdafx.h"
#include "sinstar3_tsf.h"
#include <InitGuid.h>

//{B7A578D2-9332-438A-A403-4057D05C3958}
DEFINE_GUID(GUID_COMPARTMENT_MSCANDIDATEUI_WINDOW, 
			0xb7a578d2, 0x9332, 0x438a, 0xa4, 0x03, 0x40, 0x57, 0xd0, 0x5c, 0x39, 0x58);


//+---------------------------------------------------------------------------
//
// _IsKeyboardDisabled
//
// GUID_COMPARTMENT_KEYBOARD_DISABLED is the compartment in the context
// object.
//
//----------------------------------------------------------------------------

BOOL CSinstar3Tsf::_IsKeyboardDisabled()
{
    ITfCompartmentMgr *pCompMgr = NULL;
    ITfDocumentMgr *pDocMgrFocus = NULL;
    ITfContext *pContext = NULL;
    BOOL fDisabled = FALSE;

    if ((_pThreadMgr->GetFocus(&pDocMgrFocus) != S_OK) ||
        (pDocMgrFocus == NULL))
    {
        // if there is no focus document manager object, the keyboard 
        // is disabled.
        fDisabled = TRUE;
        goto Exit;
    }

    if ((pDocMgrFocus->GetTop(&pContext) != S_OK) ||
        (pContext == NULL))
    {
        // if there is no context object, the keyboard is disabled.
        fDisabled = TRUE;
        goto Exit;
    }

    if (pContext->QueryInterface(IID_ITfCompartmentMgr, (void **)&pCompMgr) == S_OK)
    {
        ITfCompartment *pCompartmentDisabled;
        ITfCompartment *pCompartmentEmptyContext;

        // Check GUID_COMPARTMENT_KEYBOARD_DISABLED.
        if (pCompMgr->GetCompartment(GUID_COMPARTMENT_KEYBOARD_DISABLED, &pCompartmentDisabled) == S_OK)
        {
            VARIANT var;
            if (S_OK == pCompartmentDisabled->GetValue(&var))
            {
                if (var.vt == VT_I4) // Even VT_EMPTY, GetValue() can succeed
                {
                    fDisabled = (BOOL)var.lVal;
                }
            }
            pCompartmentDisabled->Release();
        }

        // Check GUID_COMPARTMENT_EMPTYCONTEXT.
        if (pCompMgr->GetCompartment(GUID_COMPARTMENT_EMPTYCONTEXT, &pCompartmentEmptyContext) == S_OK)
        {
            VARIANT var;
            if (S_OK == pCompartmentEmptyContext->GetValue(&var))
            {
                if (var.vt == VT_I4) // Even VT_EMPTY, GetValue() can succeed
                {
                    fDisabled = (BOOL)var.lVal;
                }
            }
            pCompartmentEmptyContext->Release();
        }

        pCompMgr->Release();
    }

Exit:
    if (pContext)
        pContext->Release();

    if (pDocMgrFocus)
        pDocMgrFocus->Release();

    return fDisabled;
}

//+---------------------------------------------------------------------------
//
// _IsKeyboardOpen
//
// GUID_COMPARTMENT_KEYBOARD_OPENCLOSE is the compartment in the thread manager
// object.
//
//----------------------------------------------------------------------------

BOOL CSinstar3Tsf::_IsKeyboardOpen()
{
    ITfCompartmentMgr *pCompMgr = NULL;
    BOOL fOpen = FALSE;

    if (_pThreadMgr->QueryInterface(IID_ITfCompartmentMgr, (void **)&pCompMgr) == S_OK)
    {
        ITfCompartment *pCompartment;
        if (pCompMgr->GetCompartment(GUID_COMPARTMENT_KEYBOARD_OPENCLOSE, &pCompartment) == S_OK)
        {
            VARIANT var;
            if (S_OK == pCompartment->GetValue(&var))
            {
                if (var.vt == VT_I4) // Even VT_EMPTY, GetValue() can succeed
                {
                    fOpen = (BOOL)var.lVal;
                }
            }
        }
        pCompMgr->Release();
    }

    return fOpen;
}

//+---------------------------------------------------------------------------
//
// _SetKeyboardOpen
//
// GUID_COMPARTMENT_KEYBOARD_OPENCLOSE is the compartment in the thread manager
// object.
//
//----------------------------------------------------------------------------

HRESULT CSinstar3Tsf::_SetKeyboardOpen(BOOL fOpen)
{
    HRESULT hr = E_FAIL;
    ITfCompartmentMgr *pCompMgr = NULL;

    if (_pThreadMgr->QueryInterface(IID_ITfCompartmentMgr, (void **)&pCompMgr) == S_OK)
    {
        ITfCompartment *pCompartment;
        if (pCompMgr->GetCompartment(GUID_COMPARTMENT_KEYBOARD_OPENCLOSE, &pCompartment) == S_OK)
        {
            VARIANT var;
            var.vt = VT_I4;
            var.lVal = fOpen;
            hr = pCompartment->SetValue(_tfClientId, &var);
        }
        pCompMgr->Release();
    }

    return hr;
}


EInputMethod CSinstar3Tsf::GetConversionMode()
{
	assert( _pThreadMgr != NULL);

	HRESULT hr = S_OK;
	EInputMethod eInputMode =m_pBaiduJP3?m_pBaiduJP3->GetDefInputMode():Hiragana;
	ITfCompartmentMgr *pCompMgr = NULL;
	

	hr = _pThreadMgr->QueryInterface(IID_ITfCompartmentMgr, (void **)&pCompMgr);
	if ( SUCCEEDED(hr) && pCompMgr != NULL)
	{
		ITfCompartment *pCompartmentInputMode = NULL;
		hr = pCompMgr->GetCompartment( GUID_COMPARTMENT_KEYBOARD_INPUTMODE_CONVERSION, &pCompartmentInputMode);
		if ( SUCCEEDED(hr) && pCompartmentInputMode != NULL)
		{
			VARIANT var;
			HRESULT hr = pCompartmentInputMode->GetValue(&var);
			if( SUCCEEDED(hr) && var.vt == VT_I4)
			{
				switch( var.lVal)
				{
				case TF_CONVERSIONMODE_ROMAN | TF_CONVERSIONMODE_FULLSHAPE | TF_CONVERSIONMODE_NATIVE:						// 0x19
					eInputMode = Hiragana;
					break;

				case TF_CONVERSIONMODE_ROMAN | TF_CONVERSIONMODE_FULLSHAPE | TF_CONVERSIONMODE_KATAKANA | IME_CMODE_NATIVE:	// 0x1b
					eInputMode = FullKatakana;
					break;

				case TF_CONVERSIONMODE_ROMAN | TF_CONVERSIONMODE_FULLSHAPE:													// 0x18
					eInputMode = FullAlphanumeric;
					break;
				
				case TF_CONVERSIONMODE_ROMAN | TF_CONVERSIONMODE_KATAKANA | TF_CONVERSIONMODE_NATIVE:						// 0x13
					eInputMode = HalfKatakana;
					break;

				case TF_CONVERSIONMODE_ROMAN:																				// 0x10
					eInputMode = HalfAlphanumeric;
					break;
				}
			}

			pCompartmentInputMode->Release();
		}

		pCompMgr->Release();
	}

	return eInputMode;
}

void CSinstar3Tsf::SetConversionMode( EInputMethod eInputMode)
{
	assert( _pThreadMgr != NULL);

	HRESULT hr = S_OK;
	ITfCompartmentMgr *pCompMgr = NULL; 

	hr = _pThreadMgr->QueryInterface(IID_ITfCompartmentMgr, (void **)&pCompMgr);
	if ( SUCCEEDED(hr) && pCompMgr != NULL)
	{
		ITfCompartment *pCompartmentInputMode = NULL;
		hr = pCompMgr->GetCompartment( GUID_COMPARTMENT_KEYBOARD_INPUTMODE_CONVERSION, &pCompartmentInputMode);
		if ( SUCCEEDED(hr) && pCompartmentInputMode != NULL)
		{
			VARIANT var;
			var.vt = VT_I4;

			switch( eInputMode)
			{
			case Hiragana:
			case HalfAlphanumeric:
				var.lVal = TF_CONVERSIONMODE_ROMAN | TF_CONVERSIONMODE_FULLSHAPE | TF_CONVERSIONMODE_NATIVE;						// 0x19
				break;

			case FullKatakana:
				var.lVal = TF_CONVERSIONMODE_ROMAN | TF_CONVERSIONMODE_FULLSHAPE | TF_CONVERSIONMODE_KATAKANA | IME_CMODE_NATIVE;	// 0x1b
				break;

			case FullAlphanumeric:
				var.lVal = TF_CONVERSIONMODE_ROMAN | TF_CONVERSIONMODE_FULLSHAPE;													// 0x18
				break;

			case HalfKatakana:
				var.lVal = TF_CONVERSIONMODE_ROMAN | TF_CONVERSIONMODE_KATAKANA | TF_CONVERSIONMODE_NATIVE;							// 0x13
				break;

			}
			//���ȱ�֤����״̬ͬ��
			if(eInputMode != HalfAlphanumeric)
			{
				if(!_IsKeyboardOpen()) _SetKeyboardOpen(TRUE);
				hr = pCompartmentInputMode->SetValue( _tfClientId, &var);
			}else
			{
				if(_IsKeyboardOpen()) _SetKeyboardOpen(FALSE);
			}

			pCompartmentInputMode->Release();
		}

		pCompMgr->Release();
	}
}

BOOL CSinstar3Tsf::_InitThreadCompartment()
{
    ITfCompartmentMgr *pCompartmentMgr;
    ITfCompartment *pCompartment;
    BOOL fRet = FALSE;    

	if ( _pThreadMgr->QueryInterface( IID_ITfCompartmentMgr, (void **)&pCompartmentMgr) == S_OK)
	{
		if ( pCompartmentMgr->GetCompartment( GUID_COMPARTMENT_KEYBOARD_INPUTMODE_CONVERSION, &pCompartment) == S_OK)
		{
			fRet = AdviseSink( pCompartment, (ITfCompartmentEventSink *)this,
				IID_ITfCompartmentEventSink, &_dwThreadInputModeSinkCookie);			

			pCompartment->Release();

			if ( !fRet)
			{
				_dwThreadInputModeSinkCookie = TF_INVALID_COOKIE;
			}
		}
		if ( pCompartmentMgr->GetCompartment( GUID_COMPARTMENT_KEYBOARD_OPENCLOSE, &pCompartment) == S_OK)
		{
			fRet = AdviseSink( pCompartment, (ITfCompartmentEventSink *)this,
				IID_ITfCompartmentEventSink, &_dwThreadKeyboardSinkCookie);

			pCompartment->Release();

			if ( !fRet)
			{
				_dwThreadKeyboardSinkCookie = TF_INVALID_COOKIE;
			}
		}

		pCompartmentMgr->Release();
	}   
    
    return fRet;
}

void CSinstar3Tsf::_UninitThreadCompartment()
{
    ITfCompartmentMgr *pCompartmentMgr;
    ITfCompartment *pCompartment;

	if ( _pThreadMgr->QueryInterface( IID_ITfCompartmentMgr, (void **)&pCompartmentMgr) == S_OK)
	{
		if ( pCompartmentMgr->GetCompartment( GUID_COMPARTMENT_KEYBOARD_INPUTMODE_CONVERSION, &pCompartment) == S_OK)
		{
			UnadviseSink( pCompartment, &_dwThreadInputModeSinkCookie);

			pCompartment->Release();
		}
		if ( pCompartmentMgr->GetCompartment( GUID_COMPARTMENT_KEYBOARD_OPENCLOSE, &pCompartment) == S_OK)
		{
			UnadviseSink( pCompartment, &_dwThreadKeyboardSinkCookie);

			pCompartment->Release();
		}
		pCompartmentMgr->Release();
	} 
}

//+---------------------------------------------------------------------------
//
// ITfCompartmentEventSink::OnChange
//
// TSF calls this method anytime where related compartment is modified,
//
//----------------------------------------------------------------------------

STDAPI CSinstar3Tsf::OnChange(REFGUID rguidCompartment)
{	
	if(!_pThreadMgr) return S_OK;
	//��Ӧ���̿���״̬�仯
	if (IsEqualGUID(rguidCompartment,GUID_COMPARTMENT_KEYBOARD_OPENCLOSE))
	{//update input mode flags
		BOOL bOpen=_IsKeyboardOpen();
		if(m_pBaiduJP3)
		{
			m_pBaiduJP3->OnOpenStatusChanged(bOpen);
		}
	}
	//��Ӧ����ģʽ�仯
	if ( IsEqualGUID( rguidCompartment, GUID_COMPARTMENT_KEYBOARD_INPUTMODE_CONVERSION))
	{
		EInputMethod mode=GetConversionMode();
		if(!_IsKeyboardOpen()) mode=HalfAlphanumeric;
		if(m_pBaiduJP3) m_pBaiduJP3->OnConversionModeChanged(mode);
	}

    return S_OK;
}

void CSinstar3Tsf::ShowCandidateWindow()
{
	assert( _pThreadMgr != NULL);

	HRESULT hr = S_OK;
	ITfCompartmentMgr *pCompMgr = NULL; 

	ITfContext *pContext = (ITfContext *)GetImeContext();
	if ( pContext != NULL)
	{
		//hr = _pThreadMgr->QueryInterface(IID_ITfCompartmentMgr, (void **)&pCompMgr);
		hr = pContext->QueryInterface(IID_ITfCompartmentMgr, (void **)&pCompMgr);
		if ( SUCCEEDED(hr) && pCompMgr != NULL)
		{
			ITfCompartment *pCompartment = NULL;
			hr = pCompMgr->GetCompartment( GUID_COMPARTMENT_MSCANDIDATEUI_WINDOW, &pCompartment);
			if ( SUCCEEDED(hr) && pCompartment != NULL)
			{
				VARIANT var;
				var.vt = VT_I4;
				var.lVal = 1;

				hr = pCompartment->SetValue( _tfClientId, &var);

				pCompartment->Release();
			}

			pCompMgr->Release();
		}

		ReleaseImeContext( pContext);
	}
}