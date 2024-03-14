#include <Windows.h>
#include <string>

// UNOFFICIAL JACK SDK v100 first update


#define JACK_API __fastcall


struct vec3
{
	float x, y, z;
};


#pragma pack(push, 8)

// vTable is SDK function list. First offset is vtable size in bytes

// some function from vTable [ordered]
struct JackAPI {
	__int64 size;
	void (JACK_API* printLog)(const char* Format, ...);
	void (JACK_API* printLog2)(const char* Format, ...);
	void (JACK_API* printWarning)(const char* Format, ...);
	void (JACK_API* printError)(const char* Format, ...);
	void (JACK_API* free_mem_block)(void* Block);
	void* (JACK_API* alloc_mem_block)(size_t Size);
	void* (JACK_API* alloc_mem_in_tempbuf)(unsigned int bufid/*0-4*/, size_t Size);
	char* (JACK_API* alloc_char_mem_block)(const char* str);
	float (JACK_API* get_elapsed_sec)();
	void (JACK_API* set_option_val)(unsigned int option/*0-5*/, unsigned int val);
	__int64 (JACK_API* get_option_val)(unsigned int option/*0-5*/);
	__int64 (JACK_API* unknown_steamapi)(unsigned int arg1, __int64 arg2, __int64 arg3, __int64 arg4);
	char* (JACK_API* get_last_fgd_key_type)();
	__int64 (JACK_API* get_last_fgd_key_line)();
	bool (JACK_API* load_fgd_file)(char* path, unsigned int flags);
	char (JACK_API* unknown_fill_memorybuffer)(__int64 a1, int a2, int a3);
	__int64 (JACK_API* is_fgd_parse_error)();
	void (JACK_API* print_fgd_parse_error)(char* Format, ...);
	void (JACK_API* clear_fgd_parse_error)();
	bool (JACK_API* unknown_parse_membuf_errors)(bool some);
	bool (JACK_API* unknown_parse_membuf)(bool some);
	bool (JACK_API* check_for_errors)();
	void (JACK_API* unknown_set_byte)();
	void (JACK_API* check_latest_fgd_token)(const char* tok);
	bool (JACK_API* check_bad_token)(const char* tok, bool load_type);
	void (JACK_API* check_float_values_array_array)(unsigned int  values_num, unsigned int value_size, int a2, float** values);
	void (JACK_API* check_float_values_array)(unsigned int values_num, int a2, float** values);
	void (JACK_API* check_float_values)(int values_num, float* values);
	bool (JACK_API* check_for_errors2)();
	void (JACK_API* unknown_unload_fgd)();
	__int64 (JACK_API* unknown_get_fgd_count_val)(int val);
	__int64 (JACK_API* unknown_set_fgd_count_val)(int val);
	bool  (JACK_API* unknown_check_valid_str)(const char* a1);
	char* (JACK_API* unknown_get_fgd_string)();
	void (JACK_API* unknown_clear_fgd_something)();
	short (JACK_API* unknown_get_fgd_code)();
	__int64 (JACK_API* unknown_get_fgd_count)();
	void (JACK_API* unknown_gl_setstate3)(__int64 a1, __int64 a2);
	void (JACK_API* unknown_gl_setstate2)(__int64 a1, __int64 a2);
	void (JACK_API* gl_line_width)(__int64 id, __int64 id2, float linesize);
	void (JACK_API* gl_point_width)(__int64 id, __int64 id2, float pointsize);
	__int64 (JACK_API* gl_set_option)(int a1);
	__int64(JACK_API* gl_update_color_part)(char r, char g, char b, char a);
	void (JACK_API* gl_update_color_full)(unsigned int /*COLOR4*/* rgba);
	void (JACK_API* set_int_pos)(__int64 pos[2]);
	void (JACK_API* set_float_pos)(float x, float y);
	void (JACK_API* set_float_x)(float x);
	void  (JACK_API* unknown_add_something)(unsigned long* a1);
	void (JACK_API* gl_update)(__int64 a1, __int64 a2);
	__int64  (JACK_API* get_gl_state)();
	void (JACK_API* unknown_gl_setstate)(__int64 a1, __int64 a2);
	void (JACK_API* unknown_fill_something)(unsigned long* val);
	float (JACK_API* unknown_product_from_vec)(vec3 a1);
	float (JACK_API* unknown_get_float_value)();
	bool (JACK_API* unknown_str_get1)(char* Destination, rsize_t SizeInBytes);
	bool (JACK_API* unknown_str_get2)(char* Destination, rsize_t SizeInBytes);
	__int64 (JACK_API* unknown_read_file)(char* FileName, char* Destination, rsize_t SizeInBytes);
	__int64 (JACK_API* unknown_same_value)(__int64 val);
	bool (JACK_API* is_file_exists)(char* FileName);
	unsigned char* (JACK_API* read_file)(char* FileName, size_t* size);
	bool (JACK_API* create_dir)(char* Path);
	void (JACK_API* zero_is_small_float_array)(int size, float* v);
	void (JACK_API* zero_is_small_vec)(vec3* v);
	void (JACK_API* clamp_to_map)(vec3* v);
	void (JACK_API* snap_to_grid)(vec3* v);
	char* (JACK_API* get_jack_version)();
	float (JACK_API* get_grid_size)();
	bool(JACK_API* unknown_qt_func1())(void* qobj1, void* q_unused, void* qobj2, void* qevnt);
	__int64 (JACK_API* unknown_do_something)(void* some_struct, char** outstr, char fill_char, int need_fill_or_not);
	__int64 (JACK_API* unknown_list_create_some_object)(void* some_struct, const char* name, int* iarray, int flags);
	__int64 (JACK_API* unknown_list_do_something)(__int64 arg1, __int16 flags, double arg3, double arg4);
	__int64 (JACK_API* unknown_list_swap_something2)(__int64 arg1, unsigned char* arg_array);
	__int64 (JACK_API* unknown_list_swap_something)(__int64 arg1, unsigned long* arg_array);
	void (JACK_API* unknown_list_add_something)(__int64 arg1, __int64 arg2, unsigned int arg3);
	void (JACK_API* unknown_list_add_something2)(__int64 arg1, __int64 arg2, unsigned int arg3);
	__int64 (JACK_API* unknown_list_get_at)(void* arg1, __int64 offset);
	__int64 (JACK_API* unknown_list_get_size)(void* arg1);
	__int64 (JACK_API* unknown_list_get_by_name)(void* arg1, const char* name, __int64 offset);
	__int64 (JACK_API* unknown_list_get_somehing)(void* arg1, __int64 offset);
	__int64 (JACK_API* unknown_list_get_somehing2)(void* arg1, __int64 offset);
	__int64 (JACK_API* unknown_list_add_object)(__int64 arg1, __int64 arg2);
	__int64 (JACK_API* unknown_list_do_something2)(__int64 arg1, __int64 arg2);
	void (JACK_API* unknown_get_color_or_something)(__int64 a1, unsigned char* a2);
	void (JACK_API* unknown_something_color)(__int64 a1, unsigned long* a2);
	void (JACK_API* unknown_list_add_something3)(__int64 arg1, __int64 arg2, unsigned int arg3);
	void (JACK_API* unknown_list_add_something4)(__int64 arg1, __int64 arg2, unsigned int arg3);
	__int64 (JACK_API* unknown_list_get_at2)(void* arg1, __int64 offset);
	__int64 (JACK_API* unknown_list_get_size2)(void* arg1);
	__int64 (JACK_API* unknown_list_do_something3)(__int64 a1, __int64 a2, __int64 a3, int a4);
	__int64(JACK_API* unknown_list_do_something4)(__int64 a1, __int64 a2);
	__int64 (JACK_API* unknown_list_do_something_uppercase)(__int64 a1, __int64 a2, int a3, int a4);
	__int64 (JACK_API* unknown_call_something)(__int64 a1);
	__int64 (JACK_API* unknown_list_do_something_angles)(__int64 a1);
	__int64 (JACK_API* unknown_list_do_something_float)(__int64 a1, float* a2);
	__int64 (JACK_API* unknown_list_do_something_angles2)(__int64 a1, float a2, __int64 a3);
	void (JACK_API* unknown_list_do_something_center)(__int64 a1);
	__int64(JACK_API* unknown_list_add_something5)(__int64 a1, __int64 a2);
	__int64 (JACK_API* unknown_call_something2)(__int64 a1);
	__int64 (JACK_API* unknown_list_add_something6)(__int64 a1);
	__int64 (JACK_API* unknown_call_something3)(__int64 a1);
	__int64(JACK_API* unknown_list_add_something8)(__int64 a1, __int64 a2);
	__int64(JACK_API* unknown_list_add_something7)(__int64 a1, __int64 a2);
	__int64 (JACK_API* unknown_list_find_something)(__int64 a1);
	__int64 (JACK_API* unknown_list_add_group)(__int64 a1);
	__int64 (JACK_API* unknown_call_something_group)(__int64 a1, __int64 a2);
	__int64 (JACK_API* unknown_cmp_groups)(__int64 a1, __int64 a2);
	__int64 (JACK_API* unknown_merge_groups)(__int64 a1, __int64 a2);
	__int64 (JACK_API* unknown_do_something_groups)(__int64 a1, __int64 a2);
	void (JACK_API* unknown_get_color_or_something1)(__int64 a1, unsigned char* a2);
	__int64 (JACK_API* unknown_do_something_groups2)(__int64 a1, __int64 a2);
	__int64 (JACK_API* unknown_call_something_color)(__int64 a1);
	__int64 (JACK_API* unknown_call_something_color2)(__int64 a1);
	void (JACK_API* unknown_get_color_or_something2)(__int64 a1, unsigned char* a2);
	__int64 (JACK_API* unknown_call_something_color3)(__int64 a1, unsigned long* a2);
	void (JACK_API* unknown_do_something_float)(__int64 a1, unsigned int* a2, unsigned int* a3);
	void* (JACK_API* unknown_do_something_hashtable)(const char* a1, const char* a2, int a3);
	void* (JACK_API* unknown_find_hastable)(const char* a1);
	void (JACK_API* unknown_mark_something_hashable)(__int64 a1);
	void (JACK_API* unknown_alloc_something)(__int64 a1, void* a2);
	void (JACK_API* unknown_free_something)(void* Block);
	__int64 (JACK_API* unknown_do_something_qt_witdget1)(__int64 a1, __int64 a2);
	__int64 (JACK_API* unknown_do_something_hashtable2)(__int64 a1, const char* a2);
	__int64 (JACK_API* alloc_current_widget_1)();
	__int64 (JACK_API* unknown_do_something_qt_witdget2)(__int64 a1, __int64 a2);
	__int64 (JACK_API* alloc_current_widget_2)();
	unsigned long* (JACK_API* qapp_process_event)(__int64 a1, const char* a2, int a3, int a4, int a5, int a6, int a7, char a8, void* a9);
	void  (JACK_API* widget_clear_textures)(__int64 a1, void* a2);
	__int64  (JACK_API* unknown_do_something_title)(__int64 a1, char* a2);
	void (JACK_API* unknown_free_something2)(__int64 a1, unsigned int a2);
	void (JACK_API* unknown_recreate_something)(__int64 a1, unsigned int a2, char* a3, unsigned int a4, int* a5);
	__int64 (JACK_API* unknown_get_something)(__int64 a1);
	__int64 (JACK_API* unknown_create_something)(__int64 a1, int a2);
	__int64 (JACK_API* unknown_create_something2)(__int64 a1, int a2, char* a3, int a4, unsigned long* a5, unsigned long* a6, unsigned char* a7);
	void  (JACK_API* unknown_free_something3)(__int64 a1);
	void (JACK_API* unknown_set_undo_levels)(__int64 a1, __int64 a2);
	void  (JACK_API* unknown_fill_something2)(__int64 a1);
	void  (JACK_API* unknown_fill_something1)(__int64 a1);
	void  (JACK_API* unknown_fill_something3)(__int64 a1);
	void  (JACK_API* unknown_fill_something4)(__int64 a1);
	void  (JACK_API* unknown_show_something)(__int64 a1, __int64 a2, BOOL a3, BOOL a4);
	void  (JACK_API* unknown_fill_something7)(__int64 a1);
	void  (JACK_API* unknown_fill_something6)(__int64 a1);
	void  (JACK_API* unknown_fill_something8)(__int64 a1);
	void  (JACK_API* unknown_fill_something9)(__int64 a1);
	void  (JACK_API* unknown_fill_something5)(__int64 a1);
	void (JACK_API* unknown_show_something2)(__int64 a1, int a2);
	void  (JACK_API* unknown_fill_something11)(__int64 a1);
	void  (JACK_API* unknown_fill_something12)(__int64 a1);
	void  (JACK_API* unknown_fill_something13)(__int64 a1);
	void  (JACK_API* unknown_fill_something10)(__int64 a1);
	void  (JACK_API* unknown_fill_something15)(__int64 a1);
	void  (JACK_API* unknown_fill_something14)(__int64 a1);
	void  (JACK_API* unknown_fill_something16)(__int64 a1);
	void  (JACK_API* unknown_fill_something18)(__int64 a1);
	void  (JACK_API* unknown_fill_something17)(__int64 a1);
	void  (JACK_API* unknown_fill_something20)(__int64 a1);
	void  (JACK_API* unknown_fill_something19)(__int64 a1);
	void (JACK_API* unknown_show_something3)(__int64 a1, int a2);
	void  (JACK_API* unknown_fill_something22)(__int64 a1);
	void  (JACK_API* unknown_fill_something21)(__int64 a1);
	__int64 (JACK_API* show_dialog_with_options)(const char* title, const char* message, const char* options, int flags);
	bool (JACK_API* show_dialog)(const char* title, const char* message, unsigned char flags);
	void  (JACK_API* set_dialog_add_title)(const char* title);
	void  (JACK_API* set_dialog_add_button)(const char* name, __int64 add);
	void  (JACK_API* set_dialog_add_button_2)(const char* name, __int64 add);
	void (JACK_API* set_progress_bar)(int val, int max);
	void  (JACK_API* add_dialog_editable_text)(__int64 a1, const char* row, const char* direct_text, int flags);
	void (JACK_API* add_dialog_radiobox_text)(__int64 a1, const char* tile, bool checked, int flags);
	void  (JACK_API* add_dialog_checkbox_text)(__int64 a1, const char* tile, bool checked, int flags);
	void (JACK_API* add_dialog_spinbox_text_int)(__int64 a1, const char* text, int value, int min, int max, int step, int flags);
	void (JACK_API* add_dialog_spinbox_text_float)(__int64 a1, const char* text, float value, float min, float max, float step, int flags);
	void (JACK_API* add_dialog_fileedit_text)(__int64 a1, const char* a2, const char* a3, const char* a4, int a5);
	void (JACK_API* add_dialog_filelist_text)(__int64 a1, const char* a2, const char* a3, const char* a4, int a5);
	void (JACK_API* add_dialog_combobox_text)(__int64 a1, const char* a2, int a3, const char* a4, int a5);
	void (JACK_API* add_dialog_directory_text)(__int64 a1, const char* a2, const char* a3, int a4);
	void (JACK_API* add_dialog_query_arg_str)(const char* text, char* out, int out_size);
	float (JACK_API* add_dialog_query_arg_float)(const char* a1);
	__int64 (JACK_API* add_dialog_query_arg_int)(const char* a1);
	void(JACK_API* end_dialog)(__int64 a1);
	void (JACK_API* add_dialog_plain_text)(const char* a1, ...);
	void  (JACK_API* set_wait_cursor)();
	void  (JACK_API* restore_cursor)();
};

struct JACK_ACTION
{
	const char* actionData[3];
	__int64 state; // 
	__int64 flags; // 0 is item enabled 1+ disabled
	void* dispatch_func;
	/* unused */
	__int64 unknown;
	__int64 id;
	__int64 reserved;
	__int64 reserved2;
};

#pragma pack(pop)

JackAPI* jack_sdk_api = NULL;


__int64 action_dispatch_func();

JACK_ACTION tmpJACK_ACTION{ {"actionName","actionDescription","actionDirectory"}, 0 , 0, (void*)action_dispatch_func, 0,0, 0,0 };

/* unsigned char* qlib is QLibrary address, possible is not used*/

__int64 __fastcall vpEnumActions(void(__fastcall* jackAddAction)(JACK_ACTION*, unsigned char* qt_library), unsigned char* qt_library)
{
	jackAddAction(&tmpJACK_ACTION, qt_library);

	return 1; //actions count?
}
__int64 __fastcall vpEnumArchiveFormats(unsigned int(__fastcall* jackAddArchiveFormat)(__int64 id, const char* name, const char* extension, unsigned char* qt_library)
	, unsigned char * qt_library)
{
	jackAddArchiveFormat(0, "SDK TEST ARCHIVE", ".zip", qt_library);
	jackAddArchiveFormat(1, "SDK TEST ARCHIVE2", ".zzip", qt_library);
	return 2;
}
__int64 __fastcall vpEnumExportFormats(unsigned int(__fastcall* jackAddExportFormat)(__int64 id, const char* name, const char* extension, unsigned char* qt_library), unsigned char* qt_library)
{
	jackAddExportFormat(0, "SDK TEST EXPORT FORMAT", ".zip", qt_library);
	jackAddExportFormat(1, "SDK TEST EXPORT FORMAT2", ".zzip", qt_library);
	return 2;
}
__int64 __fastcall vpEnumImportFormats(unsigned int(__fastcall* jackAddImportFormat)(__int64 id, const char* name, const char* extension, unsigned char* qt_library), unsigned char* qt_library)
{
	jackAddImportFormat(0, "SDK TEST IMPORT FORMAT", ".zip", qt_library);
	jackAddImportFormat(1, "SDK TEST IMPORT FORMAT2", ".zzip", qt_library);
	return 2;
}
__int64 __fastcall vpEnumModelFormats(unsigned int(__fastcall* jackAddModelFormat)(__int64 id, const char* name, const char* extension, unsigned char* qt_library), unsigned char* qt_library)
{
	jackAddModelFormat(0, "SDK TEST MODEL FORMAT", ".zip", qt_library);
	jackAddModelFormat(1, "SDK TEST MODEL FORMAT2", ".zzip", qt_library);
	return 2;
}
__int64 __fastcall vpEnumSkyFormats(unsigned int(__fastcall* jackAddSkyFormat)(__int64 id, const char* name, const char* extension, unsigned char* qt_library), unsigned char* qt_library)
{
	jackAddSkyFormat(0, "SDK TEST SKY FORMAT", ".zip", qt_library);
	jackAddSkyFormat(1, "SDK TEST SKY FORMAT2", ".zzip", qt_library);
	return 2;
}
__int64 __fastcall vpEnumSpriteFormats(unsigned int(__fastcall* jackAddSpriteFormat)(__int64 id, const char* name, const char* extension, unsigned char* qt_library), unsigned char* qt_library)
{
	jackAddSpriteFormat(0, "SDK TEST SPRITE FORMAT", ".zip", qt_library);
	jackAddSpriteFormat(1, "SDK TEST SPRITE FORMAT2", ".zzip", qt_library);
	return 2;
}
__int64 __fastcall vpEnumPackageFormats(unsigned int(__fastcall* jackAddPackageFormat)(__int64 id, const char* name, const char* extension, unsigned char* qt_library), unsigned char* qt_library)
{
	jackAddPackageFormat(0, "SDK TEST PACKAGE FORMAT", ".zip", qt_library);
	jackAddPackageFormat(1, "SDK TEST PACKAGE FORMAT2", ".zzip", qt_library);
	return 2;
}
__int64 __fastcall vpEnumTextureFormats(unsigned int(__fastcall* jackAddTextureFormat)(__int64 id, const char* name, const char* extension,  unsigned char* qt_library), unsigned char* qt_library)
{
	jackAddTextureFormat(0, "SDK TEST TEXTURE FORMAT", ".zip", qt_library);
	jackAddTextureFormat(1, "SDK TEST TEXTURE FORMAT2", ".zzip", qt_library);
	return 2;
}

#pragma pack(push, 4)
struct TestProfile
{
	__int64 id;
	__int64 vtable_addr;
	int unk_num;
	char name[512];
};

#pragma pop

TestProfile tmpTestProfile{ 0,0,1,"vpSomethingBad" };

__int64 __fastcall vpEnumProfiles(void(__fastcall* jackAddProfileStructure)(/*const char * profilename*/TestProfile *  profileName, unsigned char* qt_library), unsigned char* qt_library)
{
	jackAddProfileStructure(&tmpTestProfile,qt_library);
	return 1;
}
__int64 __fastcall vpLoadArchive(__int64 id, const char* path, unsigned char* data)
{
	jack_sdk_api->printWarning("Try to load archive %i type. Path: %s. Data: %p", id, path, data);
	return 0;
}
__int64 __fastcall vpUnloadArchive(__int64 id, unsigned char* data)
{
	jack_sdk_api->printWarning("Try to unload archive %i type. Data: %p", id,  data);
	return 0;
}
__int64 __fastcall vpFindArchiveFile(__int64 id, unsigned char* data, const char* filename)
{
	jack_sdk_api->printWarning("Try to find file archive %i type. Data: %p. File: %s", id, data, filename);
	return 0;
}
__int64 __fastcall vpLoadArchiveFile(__int64 id, unsigned char* data, const char* filename, unsigned char * outdata)
{
	jack_sdk_api->printWarning("Try to load file archive %i type. Data: %p. File: %s", id, data, filename);
	return 0;
}
__int64 __fastcall vpListArchiveFiles(__int64 id, __int64 data, const char* filter, unsigned char* outdata)
{
	jack_sdk_api->printWarning("Try to read archive %i type filelist. Data: %p. Filter: %s", id, data, filter);
	return 0;
}

__int64 __fastcall vpMain(JackAPI* vTable, __int64 sdk_version)
{
	jack_sdk_api = vTable;


	__int64 vTableFuncCount = vTable->size - sizeof(__int64);
	//jack_sdk_api->set_wait_cursor();
	vTable->printLog("JackAPI size : %lli. Vtable size: %llu. JACK: %s", vTableFuncCount, sizeof(JackAPI), jack_sdk_api->get_jack_version());
	
	//jack_sdk_api->show_dialog("HELLO WORLD HELLO WORLD HELLO WORLD HELLO WORLD HELLO WORLD", "YES/NO\nYES/NO\nYES/NO\nYES/NO\nYES/NO\nYES/NO\nYES/NO\nYES/NO\nYES/NO\nYES/NO\nYES/NO\nOR yes?", 9); 

	//jack_sdk_api->restore_cursor();
	if (sdk_version != 100)
		return 100;
	return 0;
}

__int64 __fastcall vpExport(__int64 id, const char * path, unsigned char * data)
{
	jack_sdk_api->printWarning("Try to export %i type. Path: %s. Data: %p", id, path, data);
	return 0;
}
__int64 __fastcall vpImport(__int64 id, const char* path, unsigned char* data)
{
	jack_sdk_api->printWarning("Try to import %i type. Path: %s. Data: %p", id, path, data);
	return 0;
}
__int64 __fastcall vpLoadModel(__int64 id, const char* path, unsigned char * model_data, __int64 a4, unsigned char * data)
{
	jack_sdk_api->printWarning("Try to load model %i type. Path: %s. Data: %p", id, path, data);
	return 0;
}
__int64 __fastcall vpUnloadModel(__int64 id, unsigned char* data)
{
	jack_sdk_api->printWarning("Try to unload model %i type. Data: %p", id, data);
	return 0;
}
__int64 __fastcall vpRenderModel(__int64 id, unsigned int a2, __int64 a3, __int64 a4) //verts, etc?
{
	//jack_sdk_api->printWarning("Try to render model %i type. Data: %p", id, data);
	return 0;
}
__int64 __fastcall vpGetModelBounds(__int64 id, vec3* mins, vec3* maxs, unsigned int a4, __int64 a5)
{
	//jack_sdk_api->printWarning("Try to get model %i type mins maxs. Data: %p", id, data);
	return 0;
}
bool __fastcall vpGetModelFormatFlags(__int64 id)
{
	// return id is
	return false;
}
__int64 __fastcall vpSetPalette(__int64 a1)
{
	return 0;
}
__int64 __fastcall vpLoadSky(__int64 id, __int64 a2, unsigned int a3, const char * name, unsigned int side)
{
	jack_sdk_api->printWarning("Try to load sky %i type. Name: %s. Side: %u", id, name, side);
	return 0;
}
__int64 __fastcall vpLoadSprite(__int64 a1, __int64 a2, unsigned long* a3, __int64 a4, __int64 a5)
{
	return 0;
}
__int64 __fastcall vpGetPackageInfo(__int64 id, const char * path, unsigned long* outdata)
{
	jack_sdk_api->printWarning("Try to get package %i type info. Path: %s", id, path);
	return 0;
}
__int64 __fastcall vpLoadPackage(__int64 id, const char* path)
{
	jack_sdk_api->printWarning("Try to load package %i type. Path: %s", id, path);
	return 0;
}
__int64 __fastcall vpLoadTexture(__int64 id, const char* pathname, __int64 a3, unsigned int a4)
{
	jack_sdk_api->printWarning("Try to load texture %i type. Path: %s", id, pathname);
	return 0;
}
__int64 __fastcall vpFilterTextureName(__int64 unk1, __int64 unk2)
{
	return 0;
}

__int64 __fastcall action_dispatch_func(/*__int64 action_id*/)
{
	jack_sdk_api->show_dialog("TITLE", "MESSAGE", 9);
	return 0;
}

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
	if (fdwReason == DLL_PROCESS_DETACH)
	{

	}
	else if (fdwReason == DLL_PROCESS_ATTACH)
	{

	}
	return 1;
}

//vpFilterTextureName
//vpLoadTexture