//stamp:17c71170fcebb70c
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				XML_INIT = _T("UIDEF:XML_INIT");
			}
			const TCHAR * XML_INIT;
		}UIDEF;
		class _LAYOUT{
			public:
			_LAYOUT(){
				dlg_about = _T("LAYOUT:dlg_about");
				dlg_keymap = _T("LAYOUT:dlg_keymap");
				wnd_build_index_prog = _T("LAYOUT:wnd_build_index_prog");
				dlg_update_info = _T("LAYOUT:dlg_update_info");
				wnd_composition = _T("LAYOUT:wnd_composition");
				wnd_status_bar = _T("LAYOUT:wnd_status_bar");
				wnd_tip = _T("LAYOUT:wnd_tip");
				wnd_spchar = _T("LAYOUT:wnd_spchar");
			}
			const TCHAR * dlg_about;
			const TCHAR * dlg_keymap;
			const TCHAR * wnd_build_index_prog;
			const TCHAR * dlg_update_info;
			const TCHAR * wnd_composition;
			const TCHAR * wnd_status_bar;
			const TCHAR * wnd_tip;
			const TCHAR * wnd_spchar;
		}LAYOUT;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
				dim = _T("values:dim");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
			const TCHAR * dim;
		}values;
		class _IMG{
			public:
			_IMG(){
				logo_32 = _T("IMG:logo_32");
				png_charmode = _T("IMG:png_charmode");
				png_charmode_full = _T("IMG:png_charmode_full");
				png_charmode_half = _T("IMG:png_charmode_half");
				png_status_open = _T("IMG:png_status_open");
				png_status_close = _T("IMG:png_status_close");
				png_composition = _T("IMG:png_composition");
				btn_extend = _T("IMG:btn_extend");
				btn_shrink = _T("IMG:btn_shrink");
				btn_makeword = _T("IMG:btn_makeword");
				btn_prevpage = _T("IMG:btn_prevpage");
				btn_nextpage = _T("IMG:btn_nextpage");
				btn_query = _T("IMG:btn_query");
				btn_record_enable = _T("IMG:btn_record_enable");
				btn_record_disable = _T("IMG:btn_record_disable");
				btn_sound_enable = _T("IMG:btn_sound_enable");
				btn_sound_disable = _T("IMG:btn_sound_disable");
				png_lines = _T("IMG:png_lines");
				btn_english_enable = _T("IMG:btn_english_enable");
				btn_english_disable = _T("IMG:btn_english_disable");
			}
			const TCHAR * logo_32;
			const TCHAR * png_charmode;
			const TCHAR * png_charmode_full;
			const TCHAR * png_charmode_half;
			const TCHAR * png_status_open;
			const TCHAR * png_status_close;
			const TCHAR * png_composition;
			const TCHAR * btn_extend;
			const TCHAR * btn_shrink;
			const TCHAR * btn_makeword;
			const TCHAR * btn_prevpage;
			const TCHAR * btn_nextpage;
			const TCHAR * btn_query;
			const TCHAR * btn_record_enable;
			const TCHAR * btn_record_disable;
			const TCHAR * btn_sound_enable;
			const TCHAR * btn_sound_disable;
			const TCHAR * png_lines;
			const TCHAR * btn_english_enable;
			const TCHAR * btn_english_disable;
		}IMG;
		class _ICON{
			public:
			_ICON(){
				ICON_SINSTAR3 = _T("ICON:ICON_SINSTAR3");
				ICON_LOGO = _T("ICON:ICON_LOGO");
				ICON_LOGO1 = _T("ICON:ICON_LOGO1");
				ICON_LOGO2 = _T("ICON:ICON_LOGO2");
				ICON_LOGO3 = _T("ICON:ICON_LOGO3");
				ICON_LOGO4 = _T("ICON:ICON_LOGO4");
			}
			const TCHAR * ICON_SINSTAR3;
			const TCHAR * ICON_LOGO;
			const TCHAR * ICON_LOGO1;
			const TCHAR * ICON_LOGO2;
			const TCHAR * ICON_LOGO3;
			const TCHAR * ICON_LOGO4;
		}ICON;
		class _smenu{
			public:
			_smenu(){
				context_tray = _T("smenu:context_tray");
				context_status = _T("smenu:context_status");
			}
			const TCHAR * context_tray;
			const TCHAR * context_status;
		}smenu;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"_name_start",65535},
		{L"btn_charmode",65580},
		{L"btn_close",2},
		{L"btn_english",65584},
		{L"btn_filter_gbk",65585},
		{L"btn_help",65588},
		{L"btn_make_phrase",65581},
		{L"btn_menu",65587},
		{L"btn_nextpage",65567},
		{L"btn_prevpage",65565},
		{L"btn_query",65586},
		{L"btn_record",65582},
		{L"btn_sound",65583},
		{L"btn_status_extend",65576},
		{L"btn_status_shrink",65579},
		{L"btn_update_now",65540},
		{L"cand_container",65566},
		{L"cand_english",65568},
		{L"cand_english_input",65571},
		{L"cand_normal",65564},
		{L"cand_phrase",65570},
		{L"cand_tip",65572},
		{L"cbx_update_interval",65539},
		{L"cell_00",100},
		{L"cell_01",101},
		{L"cell_02",102},
		{L"cell_03",103},
		{L"cell_04",104},
		{L"cell_05",105},
		{L"cell_06",106},
		{L"cell_07",107},
		{L"cell_08",108},
		{L"cell_09",109},
		{L"cell_10",110},
		{L"cell_11",111},
		{L"cell_12",112},
		{L"cell_13",113},
		{L"cell_14",114},
		{L"cell_15",115},
		{L"cell_16",116},
		{L"cell_17",117},
		{L"cell_18",118},
		{L"cell_19",119},
		{L"cell_20",120},
		{L"cell_21",121},
		{L"cell_22",122},
		{L"cell_23",123},
		{L"cell_24",124},
		{L"cell_25",125},
		{L"cell_26",126},
		{L"cell_27",127},
		{L"cell_28",128},
		{L"cell_29",129},
		{L"cell_30",130},
		{L"cell_31",131},
		{L"cell_32",132},
		{L"cell_33",133},
		{L"cell_34",134},
		{L"cell_35",135},
		{L"cell_36",136},
		{L"cell_37",137},
		{L"cell_38",138},
		{L"cell_39",139},
		{L"cell_40",140},
		{L"cell_41",141},
		{L"cell_42",142},
		{L"cell_43",143},
		{L"cell_44",144},
		{L"cell_45",145},
		{L"cell_46",146},
		{L"cell_47",147},
		{L"cell_48",148},
		{L"cell_49",149},
		{L"cell_parent",65594},
		{L"chk_auto_update",65538},
		{L"comp_english",65561},
		{L"comp_install",400},
		{L"comp_lineime",65560},
		{L"comp_normal",65553},
		{L"comp_sent",65562},
		{L"comp_spell",65556},
		{L"comp_umode",65558},
		{L"config",100},
		{L"edit_info",65552},
		{L"follow_caret",102},
		{L"help",112},
		{L"hide_statusbar",101},
		{L"img_keymap",65543},
		{L"img_logo",65574},
		{L"input_big5",103},
		{L"key_map",110},
		{L"key_speed",111},
		{L"link_comp_website",65542},
		{L"link_more",65551},
		{L"lst_catalog",65593},
		{L"memu_edit_symbol",603},
		{L"memu_edit_usercmd",604},
		{L"memu_edit_userdef",602},
		{L"memu_edit_userjm",605},
		{L"menu_about",100},
		{L"menu_auto",101},
		{L"menu_blend",65596},
		{L"menu_comp",65595},
		{L"menu_data_mgr",65597},
		{L"menu_exit",102},
		{L"menu_skin",200},
		{L"menu_tool_base",701},
		{L"open_spchar",104},
		{L"prog_build_index",65546},
		{L"skin_cloud",202},
		{L"skin_def",220},
		{L"skin_mgr",201},
		{L"spell_all",504},
		{L"spell_one",501},
		{L"spell_three",503},
		{L"spell_two",502},
		{L"status_base",65578},
		{L"status_extend",65577},
		{L"status_shrink",65573},
		{L"stv_sent",65563},
		{L"svr_showicon",601},
		{L"tab_stage",65544},
		{L"txt_auto_complete",65559},
		{L"txt_client_ver_cur",65549},
		{L"txt_client_ver_new",65550},
		{L"txt_comp",65575},
		{L"txt_comp_name",65541},
		{L"txt_comps",65554},
		{L"txt_en_header",65569},
		{L"txt_name",65536},
		{L"txt_prog_title",65545},
		{L"txt_svr_ver_cur",65547},
		{L"txt_svr_ver_new",65548},
		{L"txt_temp_spell_flag",65557},
		{L"txt_tip",65555},
		{L"txt_tip_content",65590},
		{L"txt_tip_title",65589},
		{L"txt_title",65592},
		{L"txt_ver",65537},
		{L"txt_zoomin",65591},
		{L"userdef",505}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			_name_start = namedXmlID[0].strName;
			btn_charmode = namedXmlID[1].strName;
			btn_close = namedXmlID[2].strName;
			btn_english = namedXmlID[3].strName;
			btn_filter_gbk = namedXmlID[4].strName;
			btn_help = namedXmlID[5].strName;
			btn_make_phrase = namedXmlID[6].strName;
			btn_menu = namedXmlID[7].strName;
			btn_nextpage = namedXmlID[8].strName;
			btn_prevpage = namedXmlID[9].strName;
			btn_query = namedXmlID[10].strName;
			btn_record = namedXmlID[11].strName;
			btn_sound = namedXmlID[12].strName;
			btn_status_extend = namedXmlID[13].strName;
			btn_status_shrink = namedXmlID[14].strName;
			btn_update_now = namedXmlID[15].strName;
			cand_container = namedXmlID[16].strName;
			cand_english = namedXmlID[17].strName;
			cand_english_input = namedXmlID[18].strName;
			cand_normal = namedXmlID[19].strName;
			cand_phrase = namedXmlID[20].strName;
			cand_tip = namedXmlID[21].strName;
			cbx_update_interval = namedXmlID[22].strName;
			cell_00 = namedXmlID[23].strName;
			cell_01 = namedXmlID[24].strName;
			cell_02 = namedXmlID[25].strName;
			cell_03 = namedXmlID[26].strName;
			cell_04 = namedXmlID[27].strName;
			cell_05 = namedXmlID[28].strName;
			cell_06 = namedXmlID[29].strName;
			cell_07 = namedXmlID[30].strName;
			cell_08 = namedXmlID[31].strName;
			cell_09 = namedXmlID[32].strName;
			cell_10 = namedXmlID[33].strName;
			cell_11 = namedXmlID[34].strName;
			cell_12 = namedXmlID[35].strName;
			cell_13 = namedXmlID[36].strName;
			cell_14 = namedXmlID[37].strName;
			cell_15 = namedXmlID[38].strName;
			cell_16 = namedXmlID[39].strName;
			cell_17 = namedXmlID[40].strName;
			cell_18 = namedXmlID[41].strName;
			cell_19 = namedXmlID[42].strName;
			cell_20 = namedXmlID[43].strName;
			cell_21 = namedXmlID[44].strName;
			cell_22 = namedXmlID[45].strName;
			cell_23 = namedXmlID[46].strName;
			cell_24 = namedXmlID[47].strName;
			cell_25 = namedXmlID[48].strName;
			cell_26 = namedXmlID[49].strName;
			cell_27 = namedXmlID[50].strName;
			cell_28 = namedXmlID[51].strName;
			cell_29 = namedXmlID[52].strName;
			cell_30 = namedXmlID[53].strName;
			cell_31 = namedXmlID[54].strName;
			cell_32 = namedXmlID[55].strName;
			cell_33 = namedXmlID[56].strName;
			cell_34 = namedXmlID[57].strName;
			cell_35 = namedXmlID[58].strName;
			cell_36 = namedXmlID[59].strName;
			cell_37 = namedXmlID[60].strName;
			cell_38 = namedXmlID[61].strName;
			cell_39 = namedXmlID[62].strName;
			cell_40 = namedXmlID[63].strName;
			cell_41 = namedXmlID[64].strName;
			cell_42 = namedXmlID[65].strName;
			cell_43 = namedXmlID[66].strName;
			cell_44 = namedXmlID[67].strName;
			cell_45 = namedXmlID[68].strName;
			cell_46 = namedXmlID[69].strName;
			cell_47 = namedXmlID[70].strName;
			cell_48 = namedXmlID[71].strName;
			cell_49 = namedXmlID[72].strName;
			cell_parent = namedXmlID[73].strName;
			chk_auto_update = namedXmlID[74].strName;
			comp_english = namedXmlID[75].strName;
			comp_install = namedXmlID[76].strName;
			comp_lineime = namedXmlID[77].strName;
			comp_normal = namedXmlID[78].strName;
			comp_sent = namedXmlID[79].strName;
			comp_spell = namedXmlID[80].strName;
			comp_umode = namedXmlID[81].strName;
			config = namedXmlID[82].strName;
			edit_info = namedXmlID[83].strName;
			follow_caret = namedXmlID[84].strName;
			help = namedXmlID[85].strName;
			hide_statusbar = namedXmlID[86].strName;
			img_keymap = namedXmlID[87].strName;
			img_logo = namedXmlID[88].strName;
			input_big5 = namedXmlID[89].strName;
			key_map = namedXmlID[90].strName;
			key_speed = namedXmlID[91].strName;
			link_comp_website = namedXmlID[92].strName;
			link_more = namedXmlID[93].strName;
			lst_catalog = namedXmlID[94].strName;
			memu_edit_symbol = namedXmlID[95].strName;
			memu_edit_usercmd = namedXmlID[96].strName;
			memu_edit_userdef = namedXmlID[97].strName;
			memu_edit_userjm = namedXmlID[98].strName;
			menu_about = namedXmlID[99].strName;
			menu_auto = namedXmlID[100].strName;
			menu_blend = namedXmlID[101].strName;
			menu_comp = namedXmlID[102].strName;
			menu_data_mgr = namedXmlID[103].strName;
			menu_exit = namedXmlID[104].strName;
			menu_skin = namedXmlID[105].strName;
			menu_tool_base = namedXmlID[106].strName;
			open_spchar = namedXmlID[107].strName;
			prog_build_index = namedXmlID[108].strName;
			skin_cloud = namedXmlID[109].strName;
			skin_def = namedXmlID[110].strName;
			skin_mgr = namedXmlID[111].strName;
			spell_all = namedXmlID[112].strName;
			spell_one = namedXmlID[113].strName;
			spell_three = namedXmlID[114].strName;
			spell_two = namedXmlID[115].strName;
			status_base = namedXmlID[116].strName;
			status_extend = namedXmlID[117].strName;
			status_shrink = namedXmlID[118].strName;
			stv_sent = namedXmlID[119].strName;
			svr_showicon = namedXmlID[120].strName;
			tab_stage = namedXmlID[121].strName;
			txt_auto_complete = namedXmlID[122].strName;
			txt_client_ver_cur = namedXmlID[123].strName;
			txt_client_ver_new = namedXmlID[124].strName;
			txt_comp = namedXmlID[125].strName;
			txt_comp_name = namedXmlID[126].strName;
			txt_comps = namedXmlID[127].strName;
			txt_en_header = namedXmlID[128].strName;
			txt_name = namedXmlID[129].strName;
			txt_prog_title = namedXmlID[130].strName;
			txt_svr_ver_cur = namedXmlID[131].strName;
			txt_svr_ver_new = namedXmlID[132].strName;
			txt_temp_spell_flag = namedXmlID[133].strName;
			txt_tip = namedXmlID[134].strName;
			txt_tip_content = namedXmlID[135].strName;
			txt_tip_title = namedXmlID[136].strName;
			txt_title = namedXmlID[137].strName;
			txt_ver = namedXmlID[138].strName;
			txt_zoomin = namedXmlID[139].strName;
			userdef = namedXmlID[140].strName;
		}
		 const wchar_t * _name_start;
		 const wchar_t * btn_charmode;
		 const wchar_t * btn_close;
		 const wchar_t * btn_english;
		 const wchar_t * btn_filter_gbk;
		 const wchar_t * btn_help;
		 const wchar_t * btn_make_phrase;
		 const wchar_t * btn_menu;
		 const wchar_t * btn_nextpage;
		 const wchar_t * btn_prevpage;
		 const wchar_t * btn_query;
		 const wchar_t * btn_record;
		 const wchar_t * btn_sound;
		 const wchar_t * btn_status_extend;
		 const wchar_t * btn_status_shrink;
		 const wchar_t * btn_update_now;
		 const wchar_t * cand_container;
		 const wchar_t * cand_english;
		 const wchar_t * cand_english_input;
		 const wchar_t * cand_normal;
		 const wchar_t * cand_phrase;
		 const wchar_t * cand_tip;
		 const wchar_t * cbx_update_interval;
		 const wchar_t * cell_00;
		 const wchar_t * cell_01;
		 const wchar_t * cell_02;
		 const wchar_t * cell_03;
		 const wchar_t * cell_04;
		 const wchar_t * cell_05;
		 const wchar_t * cell_06;
		 const wchar_t * cell_07;
		 const wchar_t * cell_08;
		 const wchar_t * cell_09;
		 const wchar_t * cell_10;
		 const wchar_t * cell_11;
		 const wchar_t * cell_12;
		 const wchar_t * cell_13;
		 const wchar_t * cell_14;
		 const wchar_t * cell_15;
		 const wchar_t * cell_16;
		 const wchar_t * cell_17;
		 const wchar_t * cell_18;
		 const wchar_t * cell_19;
		 const wchar_t * cell_20;
		 const wchar_t * cell_21;
		 const wchar_t * cell_22;
		 const wchar_t * cell_23;
		 const wchar_t * cell_24;
		 const wchar_t * cell_25;
		 const wchar_t * cell_26;
		 const wchar_t * cell_27;
		 const wchar_t * cell_28;
		 const wchar_t * cell_29;
		 const wchar_t * cell_30;
		 const wchar_t * cell_31;
		 const wchar_t * cell_32;
		 const wchar_t * cell_33;
		 const wchar_t * cell_34;
		 const wchar_t * cell_35;
		 const wchar_t * cell_36;
		 const wchar_t * cell_37;
		 const wchar_t * cell_38;
		 const wchar_t * cell_39;
		 const wchar_t * cell_40;
		 const wchar_t * cell_41;
		 const wchar_t * cell_42;
		 const wchar_t * cell_43;
		 const wchar_t * cell_44;
		 const wchar_t * cell_45;
		 const wchar_t * cell_46;
		 const wchar_t * cell_47;
		 const wchar_t * cell_48;
		 const wchar_t * cell_49;
		 const wchar_t * cell_parent;
		 const wchar_t * chk_auto_update;
		 const wchar_t * comp_english;
		 const wchar_t * comp_install;
		 const wchar_t * comp_lineime;
		 const wchar_t * comp_normal;
		 const wchar_t * comp_sent;
		 const wchar_t * comp_spell;
		 const wchar_t * comp_umode;
		 const wchar_t * config;
		 const wchar_t * edit_info;
		 const wchar_t * follow_caret;
		 const wchar_t * help;
		 const wchar_t * hide_statusbar;
		 const wchar_t * img_keymap;
		 const wchar_t * img_logo;
		 const wchar_t * input_big5;
		 const wchar_t * key_map;
		 const wchar_t * key_speed;
		 const wchar_t * link_comp_website;
		 const wchar_t * link_more;
		 const wchar_t * lst_catalog;
		 const wchar_t * memu_edit_symbol;
		 const wchar_t * memu_edit_usercmd;
		 const wchar_t * memu_edit_userdef;
		 const wchar_t * memu_edit_userjm;
		 const wchar_t * menu_about;
		 const wchar_t * menu_auto;
		 const wchar_t * menu_blend;
		 const wchar_t * menu_comp;
		 const wchar_t * menu_data_mgr;
		 const wchar_t * menu_exit;
		 const wchar_t * menu_skin;
		 const wchar_t * menu_tool_base;
		 const wchar_t * open_spchar;
		 const wchar_t * prog_build_index;
		 const wchar_t * skin_cloud;
		 const wchar_t * skin_def;
		 const wchar_t * skin_mgr;
		 const wchar_t * spell_all;
		 const wchar_t * spell_one;
		 const wchar_t * spell_three;
		 const wchar_t * spell_two;
		 const wchar_t * status_base;
		 const wchar_t * status_extend;
		 const wchar_t * status_shrink;
		 const wchar_t * stv_sent;
		 const wchar_t * svr_showicon;
		 const wchar_t * tab_stage;
		 const wchar_t * txt_auto_complete;
		 const wchar_t * txt_client_ver_cur;
		 const wchar_t * txt_client_ver_new;
		 const wchar_t * txt_comp;
		 const wchar_t * txt_comp_name;
		 const wchar_t * txt_comps;
		 const wchar_t * txt_en_header;
		 const wchar_t * txt_name;
		 const wchar_t * txt_prog_title;
		 const wchar_t * txt_svr_ver_cur;
		 const wchar_t * txt_svr_ver_new;
		 const wchar_t * txt_temp_spell_flag;
		 const wchar_t * txt_tip;
		 const wchar_t * txt_tip_content;
		 const wchar_t * txt_tip_title;
		 const wchar_t * txt_title;
		 const wchar_t * txt_ver;
		 const wchar_t * txt_zoomin;
		 const wchar_t * userdef;
		}name;

		class _id{
		public:
		const static int _name_start	=	65535;
		const static int btn_charmode	=	65580;
		const static int btn_close	=	2;
		const static int btn_english	=	65584;
		const static int btn_filter_gbk	=	65585;
		const static int btn_help	=	65588;
		const static int btn_make_phrase	=	65581;
		const static int btn_menu	=	65587;
		const static int btn_nextpage	=	65567;
		const static int btn_prevpage	=	65565;
		const static int btn_query	=	65586;
		const static int btn_record	=	65582;
		const static int btn_sound	=	65583;
		const static int btn_status_extend	=	65576;
		const static int btn_status_shrink	=	65579;
		const static int btn_update_now	=	65540;
		const static int cand_container	=	65566;
		const static int cand_english	=	65568;
		const static int cand_english_input	=	65571;
		const static int cand_normal	=	65564;
		const static int cand_phrase	=	65570;
		const static int cand_tip	=	65572;
		const static int cbx_update_interval	=	65539;
		const static int cell_00	=	100;
		const static int cell_01	=	101;
		const static int cell_02	=	102;
		const static int cell_03	=	103;
		const static int cell_04	=	104;
		const static int cell_05	=	105;
		const static int cell_06	=	106;
		const static int cell_07	=	107;
		const static int cell_08	=	108;
		const static int cell_09	=	109;
		const static int cell_10	=	110;
		const static int cell_11	=	111;
		const static int cell_12	=	112;
		const static int cell_13	=	113;
		const static int cell_14	=	114;
		const static int cell_15	=	115;
		const static int cell_16	=	116;
		const static int cell_17	=	117;
		const static int cell_18	=	118;
		const static int cell_19	=	119;
		const static int cell_20	=	120;
		const static int cell_21	=	121;
		const static int cell_22	=	122;
		const static int cell_23	=	123;
		const static int cell_24	=	124;
		const static int cell_25	=	125;
		const static int cell_26	=	126;
		const static int cell_27	=	127;
		const static int cell_28	=	128;
		const static int cell_29	=	129;
		const static int cell_30	=	130;
		const static int cell_31	=	131;
		const static int cell_32	=	132;
		const static int cell_33	=	133;
		const static int cell_34	=	134;
		const static int cell_35	=	135;
		const static int cell_36	=	136;
		const static int cell_37	=	137;
		const static int cell_38	=	138;
		const static int cell_39	=	139;
		const static int cell_40	=	140;
		const static int cell_41	=	141;
		const static int cell_42	=	142;
		const static int cell_43	=	143;
		const static int cell_44	=	144;
		const static int cell_45	=	145;
		const static int cell_46	=	146;
		const static int cell_47	=	147;
		const static int cell_48	=	148;
		const static int cell_49	=	149;
		const static int cell_parent	=	65594;
		const static int chk_auto_update	=	65538;
		const static int comp_english	=	65561;
		const static int comp_install	=	400;
		const static int comp_lineime	=	65560;
		const static int comp_normal	=	65553;
		const static int comp_sent	=	65562;
		const static int comp_spell	=	65556;
		const static int comp_umode	=	65558;
		const static int config	=	100;
		const static int edit_info	=	65552;
		const static int follow_caret	=	102;
		const static int help	=	112;
		const static int hide_statusbar	=	101;
		const static int img_keymap	=	65543;
		const static int img_logo	=	65574;
		const static int input_big5	=	103;
		const static int key_map	=	110;
		const static int key_speed	=	111;
		const static int link_comp_website	=	65542;
		const static int link_more	=	65551;
		const static int lst_catalog	=	65593;
		const static int memu_edit_symbol	=	603;
		const static int memu_edit_usercmd	=	604;
		const static int memu_edit_userdef	=	602;
		const static int memu_edit_userjm	=	605;
		const static int menu_about	=	100;
		const static int menu_auto	=	101;
		const static int menu_blend	=	65596;
		const static int menu_comp	=	65595;
		const static int menu_data_mgr	=	65597;
		const static int menu_exit	=	102;
		const static int menu_skin	=	200;
		const static int menu_tool_base	=	701;
		const static int open_spchar	=	104;
		const static int prog_build_index	=	65546;
		const static int skin_cloud	=	202;
		const static int skin_def	=	220;
		const static int skin_mgr	=	201;
		const static int spell_all	=	504;
		const static int spell_one	=	501;
		const static int spell_three	=	503;
		const static int spell_two	=	502;
		const static int status_base	=	65578;
		const static int status_extend	=	65577;
		const static int status_shrink	=	65573;
		const static int stv_sent	=	65563;
		const static int svr_showicon	=	601;
		const static int tab_stage	=	65544;
		const static int txt_auto_complete	=	65559;
		const static int txt_client_ver_cur	=	65549;
		const static int txt_client_ver_new	=	65550;
		const static int txt_comp	=	65575;
		const static int txt_comp_name	=	65541;
		const static int txt_comps	=	65554;
		const static int txt_en_header	=	65569;
		const static int txt_name	=	65536;
		const static int txt_prog_title	=	65545;
		const static int txt_svr_ver_cur	=	65547;
		const static int txt_svr_ver_new	=	65548;
		const static int txt_temp_spell_flag	=	65557;
		const static int txt_tip	=	65555;
		const static int txt_tip_content	=	65590;
		const static int txt_tip_title	=	65589;
		const static int txt_title	=	65592;
		const static int txt_ver	=	65537;
		const static int txt_zoomin	=	65591;
		const static int userdef	=	505;
		}id;

		class _string{
		public:
		const static int btn_close	=	0;
		}string;

		class _color{
		public:
		const static int associate_english_prefix	=	0;
		const static int blue	=	1;
		const static int cand_comp	=	2;
		const static int cand_first	=	3;
		const static int cand_index	=	4;
		const static int cand_phonetic	=	5;
		const static int cand_text	=	6;
		const static int cand_wild	=	7;
		const static int comp_auto_complete	=	8;
		const static int comp_umode_prefix	=	9;
		const static int gray	=	10;
		const static int green	=	11;
		const static int red	=	12;
		const static int sent_input	=	13;
		const static int sent_left	=	14;
		const static int sent_right	=	15;
		const static int temp_spell_flag	=	16;
		const static int tip_cand	=	17;
		const static int tip_comp	=	18;
		const static int white	=	19;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
