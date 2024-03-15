#include <Windows.h>
#include <string>

// UNOFFICIAL JACK SDK v100

#define SKIP_DEBUG_KEY VK_ESCAPE

#define SHOW_DEBUG_SPAM_STUFF_KEY VK_F1

#define IsKeyPressed(CODE) ((GetAsyncKeyState(CODE) & 0x8000) > 0)


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
	void* (JACK_API* alloc_mem_in_tempbuf)(unsigned __int64 bufid/*0-4*/, size_t Size);
	char* (JACK_API* alloc_char_mem_block)(const char* str);
	float (JACK_API* get_elapsed_sec)();
	void (JACK_API* set_option_val)(unsigned __int64 option/*0-5*/, unsigned __int64 val);
	__int64 (JACK_API* get_option_val)(unsigned __int64 option/*0-5*/);
	__int64 (JACK_API* unknown_steamapi)(unsigned __int64 arg1, __int64 arg2, __int64 arg3, __int64 arg4);
	char* (JACK_API* get_last_fgd_key_type)();
	__int64 (JACK_API* get_last_fgd_key_line)();
	bool (JACK_API* load_fgd_file)(char* path, unsigned __int64 flags);
	char (JACK_API* unknown_fill_memorybuffer)(__int64 a1, __int64 a2, __int64 a3);
	__int64 (JACK_API* is_fgd_parse_error)();
	void (JACK_API* print_fgd_parse_error)(const char* Format, ...);
	void (JACK_API* clear_fgd_parse_error)();
	bool (JACK_API* unknown_parse_membuf_errors)(bool some);
	bool (JACK_API* unknown_parse_membuf)(bool some);
	bool (JACK_API* check_for_errors)();
	void (JACK_API* unknown_set_byte)();
	void (JACK_API* check_latest_fgd_token)(const char* tok);
	bool (JACK_API* check_bad_token)(const char* tok, bool load_type);
	void (JACK_API* check_float_values_array_array)(unsigned __int64  values_num, unsigned __int64 value_size, __int64 a2, float** values);
	void (JACK_API* check_float_values_array)(unsigned __int64 values_num, __int64 a2, float** values);
	void (JACK_API* check_float_values)(__int64 values_num, float* values);
	bool (JACK_API* check_for_errors2)();
	void (JACK_API* unknown_unload_fgd)();
	__int64 (JACK_API* unknown_get_fgd_count_val)(__int64 val);
	__int64 (JACK_API* unknown_set_fgd_count_val)(__int64 val);
	bool  (JACK_API* unknown_check_valid_str)(const char* a1);
	char* (JACK_API* unknown_get_fgd_string)();
	void (JACK_API* unknown_clear_fgd_something)();
	short (JACK_API* unknown_get_fgd_code)();
	__int64 (JACK_API* unknown_get_fgd_count)();
	void (JACK_API* unknown_gl_setstate3)(__int64 a1, __int64 a2);
	void (JACK_API* unknown_gl_setstate2)(__int64 a1, __int64 a2);
	void (JACK_API* gl_line_width)(__int64 id, __int64 id2, float linesize);
	void (JACK_API* gl_point_width)(__int64 id, __int64 id2, float pointsize);
	__int64 (JACK_API* gl_set_begin_option)(__int64 a1);
	__int64(JACK_API* gl_update_color_part)(char r, char g, char b, char a);
	void (JACK_API* gl_update_color_full)(unsigned int /*COLOR4*/* rgba);
	void (JACK_API* set_int_pos)(__int64 pos[2]);
	void (JACK_API* set_float_pos)(float x, float y);
	void (JACK_API* set_float_x)(float x);
	void  (JACK_API* gl_push_vec3)(vec3 a1);
	void (JACK_API* gl_update)(vec3 * points, unsigned char* unk_struct/* count ?*/);
	__int64  (JACK_API* get_gl_state)();
	void (JACK_API* unknown_gl_setstate)(__int64 a1, __int64 a2);
	void (JACK_API* unknown_set_something_mouse)(unsigned long* val);
	float (JACK_API* unknown_product_from_vec)(vec3 a1);
	float (JACK_API* unknown_get_float_value)();
	bool (JACK_API* unknown_str_get1)(char* Destination, rsize_t SizeInBytes);
	bool (JACK_API* unknown_str_get2)(char* Destination, rsize_t SizeInBytes);
	__int64 (JACK_API* unknown_read_file)(char* FileName, char* Destination, rsize_t SizeInBytes);
	const char * (JACK_API* unknown_same_string)(const char* val);
	bool (JACK_API* is_file_exists)(char* FileName);
	unsigned char* (JACK_API* read_file)(char* FileName, size_t* size);
	bool (JACK_API* create_dir)(char* Path);
	void (JACK_API* zero_is_small_float_array)(__int64 size, float* v);
	void (JACK_API* zero_is_small_vec)(vec3* v);
	void (JACK_API* clamp_to_map)(vec3* v);
	void (JACK_API* snap_to_grid)(vec3* v);
	char* (JACK_API* get_jack_version)();
	float (JACK_API* get_grid_size)();
	bool(JACK_API* unknown_qt_func1)(void* qobj1, void* q_unused, void* qobj2, void* qevnt);
	__int64 (JACK_API* unknown_do_something)(void* some_struct, char** outstr, char fill_char, __int64 need_fill_or_not);
	__int64 (JACK_API* unknown_list_create_some_object)(void* some_struct, const char* name, int* iarray, __int64 flags);
	__int64 (JACK_API* unknown_list_do_something)(__int64 arg1, __int16 flags, double arg3, double arg4);
	__int64 (JACK_API* unknown_list_swap_something2)(__int64 arg1, unsigned char* arg_array);
	__int64 (JACK_API* unknown_list_swap_something)(__int64 arg1, unsigned long* arg_array);
	void (JACK_API* unknown_list_add_something)(__int64 arg1, __int64 arg2, unsigned __int64 arg3);
	void (JACK_API* unknown_list_add_something2)(__int64 arg1, __int64 arg2, unsigned __int64 arg3);
	__int64 (JACK_API* unknown_list_get_at)(void* arg1, __int64 offset);
	__int64 (JACK_API* unknown_list_get_size)(void* arg1);
	__int64 (JACK_API* unknown_list_get_by_name)(void* arg1, const char* name, __int64 offset);
	__int64 (JACK_API* unknown_list_get_somehing)(void* arg1, __int64 offset);
	__int64 (JACK_API* unknown_list_get_somehing2)(void* arg1, __int64 offset);
	__int64 (JACK_API* unknown_list_add_object)(__int64 arg1, __int64 arg2);
	__int64 (JACK_API* unknown_list_do_something2)(__int64 arg1, __int64 arg2);
	void (JACK_API* unknown_get_color_or_something)(__int64 a1, unsigned char* a2);
	void (JACK_API* unknown_something_color)(__int64 a1, unsigned long* a2);
	void (JACK_API* unknown_list_add_something3)(__int64 arg1, __int64 arg2, unsigned __int64 arg3);
	void (JACK_API* unknown_list_add_something4)(__int64 arg1, __int64 arg2, unsigned __int64 arg3);
	__int64 (JACK_API* unknown_list_get_at2)(void* arg1, __int64 offset);
	__int64 (JACK_API* unknown_list_get_size2)(void* arg1);
	__int64 (JACK_API* unknown_list_do_something3)(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
	__int64(JACK_API* unknown_list_do_something4)(__int64 a1, __int64 a2);
	__int64 (JACK_API* unknown_list_do_something_uppercase)(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
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
	void* (JACK_API* unknown_do_something_hashtable)(const char* a1, const char* a2, __int64 a3);
	void* (JACK_API* unknown_find_hastable)(const char* a1);
	void (JACK_API* unknown_mark_something_hashable)(__int64 a1);
	void (JACK_API* unknown_alloc_something)(__int64 a1, void* a2);
	void (JACK_API* unknown_free_something)(void* Block);
	__int64 (JACK_API* unknown_do_something_qt_witdget1)(__int64 a1, __int64 a2);
	__int64 (JACK_API* unknown_do_something_hashtable2)(__int64 a1, const char* a2);
	__int64 (JACK_API* alloc_current_widget_1)();
	__int64 (JACK_API* unknown_do_something_qt_witdget2)(__int64 a1, __int64 a2);
	unsigned long* (JACK_API* qapp_process_event)(__int64 a1, const char* a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, char a8, void* a9);
	__int64 (JACK_API* alloc_current_widget_2)(__int64 a1, __int64 a2, __int64 a3);
	void  (JACK_API* widget_clear_textures)(__int64 a1, void* a2);
	__int64  (JACK_API* unknown_do_something_color)(__int64 a1, char* a2);
	void (JACK_API* unknown_free_something2)(__int64 a1, unsigned __int64 a2);
	void (JACK_API* unknown_recreate_something)(__int64 a1, unsigned __int64 a2, char* a3, unsigned __int64 a4, int* a5);
	__int64 (JACK_API* unknown_get_something)(__int64 a1);
	__int64 (JACK_API* unknown_create_something)(__int64 a1, __int64 a2);
	__int64 (JACK_API* unknown_create_something2)(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned long* a5, unsigned long* a6, unsigned char* a7);
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
	void (JACK_API* unknown_show_something2)(__int64 a1, __int64 a2);
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
	void (JACK_API* unknown_show_something3)(__int64 a1, __int64 a2);
	void  (JACK_API* unknown_fill_something22)(__int64 a1);
	void  (JACK_API* unknown_fill_something21)(__int64 a1);
	__int64 (JACK_API* show_dialog_with_options)(const char* title, const char* message, const char* options, __int64 flags);
	bool (JACK_API* show_dialog)(const char* title, const char* message, unsigned char flags);
	void  (JACK_API* set_dialog_add_title)(const char* title);
	void  (JACK_API* set_dialog_add_button)(const char* name, void* dispatch_func);
	void  (JACK_API* set_dialog_add_button_2)(const char* name, void* dispatch_func);
	void (JACK_API* set_progress_bar)(__int64 val, __int64 max);
	void  (JACK_API* add_dialog_editable_text)(const char* category, const char* row, const char* direct_text, __int64 flags);
	void (JACK_API* add_dialog_radiobox_text)(const char* category, const char* tile, bool checked, __int64 flags);
	void  (JACK_API* add_dialog_checkbox_text)(const char* category, const char* tile, bool checked, __int64 flags);
	void (JACK_API* add_dialog_spinbox_text_int)(const char* category, const char* text, __int64 value, __int64 min, __int64 max, __int64 step, __int64 flags);
	void (JACK_API* add_dialog_spinbox_text_float)(const char* category, const char* text, float value, float min, float max, float step, __int64 flags);
	void (JACK_API* add_dialog_fileedit_text)(const char* category, const char* a2, const char* a3, const char* a4, __int64 a5);
	void (JACK_API* add_dialog_filelist_text)(const char* category, const char* a2, const char* a3, const char* a4, __int64 a5);
	void (JACK_API* add_dialog_combobox_text)(const char* category, const char* a2, __int64 a3, const char* a4, __int64 a5);
	void (JACK_API* add_dialog_directory_text)(const char* category, const char* a2, const char* a3, __int64 a4);
	void (JACK_API* add_dialog_query_arg_str)(const char* text, char* out, __int64 out_size);
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

JackAPI* jack_sdk_api = NULL;


static char big_buffer[4096];

class HookJackAPI
{
public:

	static void JACK_API printLog(const char* Format, ...)
	{
		va_list args;
		va_start(args, Format);
		vsnprintf(big_buffer, sizeof(big_buffer), Format, args);
		va_end(args);

		jack_sdk_api->printLog("HOOKED: %s", big_buffer);
	}

	static void JACK_API printLog2(const char* Format, ...)
	{
		va_list args;
		va_start(args, Format);
		vsnprintf(big_buffer, sizeof(big_buffer), Format, args);
		va_end(args);

		jack_sdk_api->printLog2("HOOKED: %s", big_buffer);
	}

	static void JACK_API printWarning(const char* Format, ...)
	{
		va_list args;
		va_start(args, Format);
		vsnprintf(big_buffer, sizeof(big_buffer), Format, args);
		va_end(args);

		jack_sdk_api->printWarning("HOOKED: %s", big_buffer);
	}

	static void JACK_API printError(const char* Format, ...)
	{
		va_list args;
		va_start(args, Format);
		vsnprintf(big_buffer, sizeof(big_buffer), Format, args);
		va_end(args);

		jack_sdk_api->printError("HOOKED: %s", big_buffer);
	}

	static void JACK_API free_mem_block(void* Block)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Funcion %s. Data %p", __func__, Block);
		}
		jack_sdk_api->free_mem_block(Block);
	}

	static void* JACK_API alloc_mem_block(size_t Size)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY)) 
		{
			jack_sdk_api->printLog("Function alloc_mem_block. Size: %zu", Size);
		}
		return jack_sdk_api->alloc_mem_block(Size);
	}

	static void* JACK_API alloc_mem_in_tempbuf(unsigned __int64 bufid, size_t Size)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function alloc_mem_in_tempbuf. Bufid: %u, Size: %zu", bufid, Size);
		}
		return jack_sdk_api->alloc_mem_in_tempbuf(bufid, Size);
	}

	static char* JACK_API alloc_char_mem_block(const char* str)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function alloc_char_mem_block. String: %s", str);
		}
		return jack_sdk_api->alloc_char_mem_block(str);
	}

	static float JACK_API get_elapsed_sec()
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function get_elapsed_sec.");
		}
		return jack_sdk_api->get_elapsed_sec();
	}

	static void JACK_API set_option_val(unsigned __int64 option, unsigned __int64 val)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY)) 
		{
			jack_sdk_api->printLog("Function set_option_val. Option: %u, Value: %u", option, val);
		}
		return jack_sdk_api->set_option_val(option, val);
	}

	static __int64 JACK_API get_option_val(unsigned __int64 option)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function get_option_val. Option: %u", option);
		}
		return jack_sdk_api->get_option_val(option);
	}

	static __int64 JACK_API unknown_steamapi(unsigned __int64 arg1, __int64 arg2, __int64 arg3, __int64 arg4)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_steamapi. Args: %u, %lld, %lld, %lld", arg1, arg2, arg3, arg4);
		}
		return jack_sdk_api->unknown_steamapi(arg1, arg2, arg3, arg4);
	}

	static char* JACK_API get_last_fgd_key_type()
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function get_last_fgd_key_type.");
		}
		return jack_sdk_api->get_last_fgd_key_type();
	}

	static __int64 JACK_API get_last_fgd_key_line()
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function get_last_fgd_key_line.");
		}
		return jack_sdk_api->get_last_fgd_key_line();
	}

	static bool JACK_API load_fgd_file(char* path, unsigned __int64 flags)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function load_fgd_file. Path: %s, Flags: %u", path, flags);
		}
		return jack_sdk_api->load_fgd_file(path, flags);
	}

	static char JACK_API unknown_fill_memorybuffer(__int64 a1, __int64 a2, __int64 a3)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_memorybuffer. Args: %lld, %d, %d", a1, a2, a3);
		}
		return jack_sdk_api->unknown_fill_memorybuffer(a1, a2, a3);
	}

	static __int64 JACK_API is_fgd_parse_error()
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function is_fgd_parse_error.");
		}
		return jack_sdk_api->is_fgd_parse_error();
	}

	static void JACK_API print_fgd_parse_error(const char* Format, ...)
	{
		va_list args;
		va_start(args, Format);
		vsnprintf(big_buffer, sizeof(big_buffer), Format, args);
		va_end(args);


		jack_sdk_api->print_fgd_parse_error("HOOKED: %s", big_buffer);
	}

	static void JACK_API clear_fgd_parse_error()
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function clear_fgd_parse_error.");
		}
		return jack_sdk_api->clear_fgd_parse_error();
	}

	static bool JACK_API unknown_parse_membuf_errors(bool some)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_parse_membuf_errors. Some: %d", some);
		}
		return jack_sdk_api->unknown_parse_membuf_errors(some);
	}

	static bool JACK_API unknown_parse_membuf(bool some)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_parse_membuf. Some: %d", some);
		}
		return jack_sdk_api->unknown_parse_membuf(some);
	}

	static bool JACK_API check_for_errors()
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function check_for_errors.");
		}
		return jack_sdk_api->check_for_errors();
	}

	static void JACK_API unknown_set_byte()
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_set_byte.");
		}
		return jack_sdk_api->unknown_set_byte();
	}

	static void JACK_API check_latest_fgd_token(const char* tok)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function check_latest_fgd_token. Token: %s", tok);
		}
		return jack_sdk_api->check_latest_fgd_token(tok);
	}

	static bool JACK_API check_bad_token(const char* tok, bool load_type)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function check_bad_token. Token: %s, Load Type: %d", tok, load_type);
		}
		return jack_sdk_api->check_bad_token(tok, load_type);
	}

	static void JACK_API check_float_values_array_array(unsigned __int64 values_num, unsigned __int64 value_size, __int64 a2, float** values)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function check_float_values_array_array. Values Num: %u, Value Size: %u, A2: %d", values_num, value_size, a2);
		}
		return jack_sdk_api->check_float_values_array_array(values_num, value_size, a2, values);
	}

	static void JACK_API check_float_values_array(unsigned __int64 values_num, __int64 a2, float** values)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY)) 
		{
			jack_sdk_api->printLog("Function check_float_values_array. Values Num: %u, A2: %d", values_num, a2);
		}
		return jack_sdk_api->check_float_values_array(values_num, a2, values);
	}

	static void JACK_API check_float_values(__int64 values_num, float* values)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function check_float_values. Values Num: %d", values_num);
		}
		return jack_sdk_api->check_float_values(values_num, values);
	}

	static bool JACK_API check_for_errors2()
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function check_for_errors2.");
		}
		return jack_sdk_api->check_for_errors2();
	}

	static void JACK_API unknown_unload_fgd()
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_unload_fgd.");
		}
		return jack_sdk_api->unknown_unload_fgd();
	}

	static __int64 JACK_API unknown_get_fgd_count_val(__int64 val)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_get_fgd_count_val. Val: %d", val);
		}
		return jack_sdk_api->unknown_get_fgd_count_val(val);
	}

	static __int64 JACK_API unknown_set_fgd_count_val(__int64 val)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_set_fgd_count_val. Val: %d", val);
		}
		return jack_sdk_api->unknown_set_fgd_count_val(val);
	}

	static bool JACK_API unknown_check_valid_str(const char* a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_check_valid_str. A1: %s", a1);
		}
		return jack_sdk_api->unknown_check_valid_str(a1);
	}

	static char* JACK_API unknown_get_fgd_string()
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_get_fgd_string.");
		}
		return jack_sdk_api->unknown_get_fgd_string();
	}

	static void JACK_API unknown_clear_fgd_something()
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_clear_fgd_something.");
		}
		return jack_sdk_api->unknown_clear_fgd_something();
	}

	static short JACK_API unknown_get_fgd_code()
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_get_fgd_code.");
		}
		return jack_sdk_api->unknown_get_fgd_code();
	}

	static __int64 JACK_API unknown_get_fgd_count()
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_get_fgd_count.");
		}
		return jack_sdk_api->unknown_get_fgd_count();
	}

	static void JACK_API unknown_gl_setstate3(__int64 a1, __int64 a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_gl_setstate3. Args: %lld, %lld", a1, a2);
		}
		return jack_sdk_api->unknown_gl_setstate3(a1, a2);
	}

	static void JACK_API unknown_gl_setstate2(__int64 a1, __int64 a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_gl_setstate2. Args: %lld, %lld", a1, a2);
		}
		return jack_sdk_api->unknown_gl_setstate2(a1, a2);
	}

	static void JACK_API gl_line_width(__int64 id, __int64 id2, float linesize)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function gl_line_width. Id: %lld, Id2: %lld, Line Size: %f", id, id2, linesize);
		}
		return jack_sdk_api->gl_line_width(id, id2, linesize);
	}

	static void JACK_API gl_point_width(__int64 id, __int64 id2, float pointsize)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function gl_point_width. Id: %lld, Id2: %lld, Point Size: %f", id, id2, pointsize);
		}
		return jack_sdk_api->gl_point_width(id, id2, pointsize);
	}

	static __int64 JACK_API gl_set_begin_option(__int64 a1)
	{
		if (IsKeyPressed(SHOW_DEBUG_SPAM_STUFF_KEY))
		{
			jack_sdk_api->printLog("Function gl_set_option. A1: %d", a1);
		}
		return jack_sdk_api->gl_set_begin_option(a1);
	}

	static __int64 JACK_API gl_update_color_part(char r, char g, char b, char a)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function gl_update_color_part. R: %d, G: %d, B: %d, A: %d", r, g, b, a);
		}
		return jack_sdk_api->gl_update_color_part(r, g, b, a);
	}

	static void JACK_API gl_update_color_full(unsigned int* rgba)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function gl_update_color_full.");
		}
		return jack_sdk_api->gl_update_color_full(rgba);
	}

	static void JACK_API set_int_pos(__int64 pos[2])
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function set_int_pos. Pos: %lld, %lld", pos[0], pos[1]);
		}
		return jack_sdk_api->set_int_pos(pos);
	}

	static void JACK_API set_float_pos(float x, float y)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function set_float_pos. X: %f, Y: %f", x, y);
		}
		return jack_sdk_api->set_float_pos(x, y);
	}

	static void JACK_API set_float_x(float x)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function set_float_x. X: %f", x);
		}
		return jack_sdk_api->set_float_x(x);
	}

	static void JACK_API gl_push_vec3(vec3 point)
	{
		if (IsKeyPressed(SHOW_DEBUG_SPAM_STUFF_KEY))
		{
			jack_sdk_api->printLog("Function gl_push_vec3. Vec: %.2f %.2f %.2f", point.x, point.x, point.z);
		}
		return jack_sdk_api->gl_push_vec3(point);
	}

	static void JACK_API gl_update(vec3* points, unsigned char* unk_struct)
	{
		if (IsKeyPressed(SHOW_DEBUG_SPAM_STUFF_KEY))
		{
			jack_sdk_api->printLog("Function gl_update. Data: %p, %p", points, unk_struct);
		}
		return jack_sdk_api->gl_update(points, unk_struct);
	}

	static __int64 JACK_API get_gl_state()
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function get_gl_state.");
		}
		return jack_sdk_api->get_gl_state();
	}

	static void JACK_API unknown_gl_setstate(__int64 a1, __int64 a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_gl_setstate. Args: %lld, %lld", a1, a2);
		}
		return jack_sdk_api->unknown_gl_setstate(a1, a2);
	}

	static void JACK_API unknown_set_something_mouse(unsigned long* val)
	{
		if (IsKeyPressed(SHOW_DEBUG_SPAM_STUFF_KEY))
		{
			jack_sdk_api->printLog("Function unknown_set_something_mouse. Val: %lu", *val);
		}
		return jack_sdk_api->unknown_set_something_mouse(val);
	}

	static float JACK_API unknown_product_from_vec(vec3 a1)
	{
		if (IsKeyPressed(SHOW_DEBUG_SPAM_STUFF_KEY))
		{
			jack_sdk_api->printLog("Function unknown_product_from_vec.");
		}
		return jack_sdk_api->unknown_product_from_vec(a1);
	}

	static float JACK_API unknown_get_float_value()
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_get_float_value.");
		}
		return jack_sdk_api->unknown_get_float_value();
	}

	static bool JACK_API unknown_str_get1(char* Destination, rsize_t SizeInBytes)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_str_get1. Destination: %s, SizeInBytes: %zu", Destination, SizeInBytes);
		}
		return jack_sdk_api->unknown_str_get1(Destination, SizeInBytes);
	}

	static bool JACK_API unknown_str_get2(char* Destination, rsize_t SizeInBytes)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_str_get2. Destination: %s, SizeInBytes: %zu", Destination, SizeInBytes);
		}
		return jack_sdk_api->unknown_str_get2(Destination, SizeInBytes);
	}

	static __int64 JACK_API unknown_read_file(char* FileName, char* Destination, rsize_t SizeInBytes)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_read_file. File Name: %s, Destination: %s, SizeInBytes: %zu", FileName, Destination, SizeInBytes);
		}
		return jack_sdk_api->unknown_read_file(FileName, Destination, SizeInBytes);
	}

	static const char * JACK_API unknown_same_string(const char * val)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_convert_string. Val: %s", val);
		}
		return jack_sdk_api->unknown_same_string(val);
	}

	static bool JACK_API is_file_exists(char* FileName)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function is_file_exists. File Name: %s", FileName);
		}
		return jack_sdk_api->is_file_exists(FileName);
	}

	static unsigned char* JACK_API read_file(char* FileName, size_t* size)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function read_file. File Name: %s", FileName);
		}
		return jack_sdk_api->read_file(FileName, size);
	}

	static bool JACK_API create_dir(char* Path)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function create_dir. Path: %s", Path);
		}
		return jack_sdk_api->create_dir(Path);
	}

	static void JACK_API zero_is_small_float_array(__int64 size, float* v)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function zero_is_small_float_array. Size: %d", size);
		}
		return jack_sdk_api->zero_is_small_float_array(size, v);
	}

	static void JACK_API zero_is_small_vec(vec3* v)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function zero_is_small_vec.");
		}
		return jack_sdk_api->zero_is_small_vec(v);
	}

	static void JACK_API clamp_to_map(vec3* v)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function clamp_to_map.");
		}
		return jack_sdk_api->clamp_to_map(v);
	}

	static void JACK_API snap_to_grid(vec3* v)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function snap_to_grid.");
		}
		return jack_sdk_api->snap_to_grid(v);
	}

	static char* JACK_API get_jack_version()
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function get_jack_version.");
		}
		return jack_sdk_api->get_jack_version();
	}

	static float JACK_API get_grid_size()
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function get_grid_size.");
		}
		return jack_sdk_api->get_grid_size();
	}

	static bool JACK_API unknown_qt_func1(void* qobj1, void* q_unused, void* qobj2, void* qevnt)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_qt_func1.");
		}
		return jack_sdk_api->unknown_qt_func1(qobj1, q_unused, qobj2, qevnt);
	}

	static __int64 JACK_API unknown_do_something(void* some_struct, char** outstr, char fill_char, __int64 need_fill_or_not)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_do_something. Fill Char: %c, Need Fill: %d", fill_char, need_fill_or_not);
		}
		return jack_sdk_api->unknown_do_something(some_struct, outstr, fill_char, need_fill_or_not);
	}

	static __int64 JACK_API unknown_list_create_some_object(void* some_struct, const char* name, int* iarray, __int64 flags)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_create_some_object. Name: %s, Flags: %d", name, flags);
		}
		return jack_sdk_api->unknown_list_create_some_object(some_struct, name, iarray, flags);
	}

	static __int64 JACK_API unknown_list_do_something(__int64 arg1, __int16 flags, double arg3, double arg4)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_do_something. Args: %lld, %d, %f, %f", arg1, flags, arg3, arg4);
		}
		return jack_sdk_api->unknown_list_do_something(arg1, flags, arg3, arg4);
	}

	static __int64 JACK_API unknown_list_swap_something2(__int64 arg1, unsigned char* arg_array)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_swap_something2. Arg1: %lld", arg1);
		}
		return jack_sdk_api->unknown_list_swap_something2(arg1, arg_array);
	}

	static __int64 JACK_API unknown_list_swap_something(__int64 arg1, unsigned long* arg_array)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_swap_something. Arg1: %lld", arg1);
		}
		return jack_sdk_api->unknown_list_swap_something(arg1, arg_array);
	}

	static void JACK_API unknown_list_add_something(__int64 arg1, __int64 arg2, unsigned __int64 arg3)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_add_something. Arg1: %lld, Arg2: %lld, Arg3: %u", arg1, arg2, arg3);
		}
		return jack_sdk_api->unknown_list_add_something(arg1, arg2, arg3);
	}

	static void JACK_API unknown_list_add_something2(__int64 arg1, __int64 arg2, unsigned __int64 arg3)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_add_something2. Arg1: %lld, Arg2: %lld, Arg3: %u", arg1, arg2, arg3);
		}
		return jack_sdk_api->unknown_list_add_something2(arg1, arg2, arg3);
	}

	static __int64 JACK_API unknown_list_get_at(void* arg1, __int64 offset)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_get_at. Offset: %lld", offset);
		}
		return jack_sdk_api->unknown_list_get_at(arg1, offset);
	}

	static __int64 JACK_API unknown_list_get_size(void* arg1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_get_size.");
		}
		return jack_sdk_api->unknown_list_get_size(arg1);
	}

	static __int64 JACK_API unknown_list_get_by_name(void* arg1, const char* name, __int64 offset)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_get_by_name. Name: %s, Offset: %lld", name, offset);
		}
		return jack_sdk_api->unknown_list_get_by_name(arg1, name, offset);
	}

	static __int64 JACK_API unknown_list_get_somehing(void* arg1, __int64 offset)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_get_somehing. Offset: %lld", offset);
		}
		return jack_sdk_api->unknown_list_get_somehing(arg1, offset);
	}

	static __int64 JACK_API unknown_list_get_somehing2(void* arg1, __int64 offset)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_get_somehing2. Offset: %lld", offset);
		}
		return jack_sdk_api->unknown_list_get_somehing2(arg1, offset);
	}

	static __int64 JACK_API unknown_list_add_object(__int64 arg1, __int64 arg2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_add_object. Arg1: %lld, Arg2: %lld", arg1, arg2);
		}
		return jack_sdk_api->unknown_list_add_object(arg1, arg2);
	}

	static __int64 JACK_API unknown_list_do_something2(__int64 arg1, __int64 arg2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_do_something2. Args: %lld, %lld", arg1, arg2);
		}
		return jack_sdk_api->unknown_list_do_something2(arg1, arg2);
	}

	static void JACK_API unknown_get_color_or_something(__int64 a1, unsigned char* a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_get_color_or_something. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_get_color_or_something(a1, a2);
	}

	static void JACK_API unknown_something_color(__int64 a1, unsigned long* a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_something_color. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_something_color(a1, a2);
	}

	static void JACK_API unknown_list_add_something3(__int64 arg1, __int64 arg2, unsigned __int64 arg3)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_add_something3. Arg1: %lld, Arg2: %lld, Arg3: %u", arg1, arg2, arg3);
		}
		return jack_sdk_api->unknown_list_add_something3(arg1, arg2, arg3);
	}

	static void JACK_API unknown_list_add_something4(__int64 arg1, __int64 arg2, unsigned __int64 arg3)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_add_something4. Arg1: %lld, Arg2: %lld, Arg3: %u", arg1, arg2, arg3);
		}
		return jack_sdk_api->unknown_list_add_something4(arg1, arg2, arg3);
	}

	static __int64 JACK_API unknown_list_get_at2(void* arg1, __int64 offset)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_get_at2. Offset: %lld", offset);
		}
		return jack_sdk_api->unknown_list_get_at2(arg1, offset);
	}

	static __int64 JACK_API unknown_list_get_size2(void* arg1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_get_size2.");
		}
		return jack_sdk_api->unknown_list_get_size2(arg1);
	}

	static __int64 JACK_API unknown_list_do_something3(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_do_something3. Args: %lld, %lld, %lld, %d", a1, a2, a3, a4);
		}
		return jack_sdk_api->unknown_list_do_something3(a1, a2, a3, a4);
	}

	static __int64 JACK_API unknown_list_do_something4(__int64 a1, __int64 a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_do_something4. Args: %lld, %lld", a1, a2);
		}
		return jack_sdk_api->unknown_list_do_something4(a1, a2);
	}

	static __int64 JACK_API unknown_list_do_something_uppercase(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_do_something_uppercase. Args: %lld, %lld, %d, %d", a1, a2, a3, a4);
		}
		return jack_sdk_api->unknown_list_do_something_uppercase(a1, a2, a3, a4);
	}

	static __int64 JACK_API unknown_call_something(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_call_something. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_call_something(a1);
	}

	static __int64 JACK_API unknown_list_do_something_angles(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_do_something_angles. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_list_do_something_angles(a1);
	}

	static __int64 JACK_API unknown_list_do_something_float(__int64 a1, float* a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_do_something_float. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_list_do_something_float(a1, a2);
	}

	static __int64 JACK_API unknown_list_do_something_angles2(__int64 a1, float a2, __int64 a3)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_do_something_angles2. A1: %lld, A2: %f, A3: %lld", a1, a2, a3);
		}
		return jack_sdk_api->unknown_list_do_something_angles2(a1, a2, a3);
	}

	static void JACK_API unknown_list_do_something_center(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_do_something_center. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_list_do_something_center(a1);
	}

	static __int64 JACK_API unknown_list_add_something5(__int64 a1, __int64 a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_add_something5. A1: %lld, A2: %lld", a1, a2);
		}
		return jack_sdk_api->unknown_list_add_something5(a1, a2);
	}

	static __int64 JACK_API unknown_call_something2(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_call_something2. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_call_something2(a1);
	}

	static __int64 JACK_API unknown_list_add_something6(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_add_something6. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_list_add_something6(a1);
	}

	static __int64 JACK_API unknown_call_something3(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_call_something3. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_call_something3(a1);
	}

	static __int64 JACK_API unknown_list_add_something8(__int64 a1, __int64 a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_add_something8. A1: %lld, A2: %lld", a1, a2);
		}
		return jack_sdk_api->unknown_list_add_something8(a1, a2);
	}

	static __int64 JACK_API unknown_list_add_something7(__int64 a1, __int64 a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_add_something7. A1: %lld, A2: %lld", a1, a2);
		}
		return jack_sdk_api->unknown_list_add_something7(a1, a2);
	}

	static __int64 JACK_API unknown_list_find_something(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_find_something. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_list_find_something(a1);
	}

	static __int64 JACK_API unknown_list_add_group(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_list_add_group. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_list_add_group(a1);
	}

	static __int64 JACK_API unknown_call_something_group(__int64 a1, __int64 a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_call_something_group. A1: %lld, A2: %lld", a1, a2);
		}
		return jack_sdk_api->unknown_call_something_group(a1, a2);
	}

	static __int64 JACK_API unknown_cmp_groups(__int64 a1, __int64 a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_cmp_groups. A1: %lld, A2: %lld", a1, a2);
		}
		return jack_sdk_api->unknown_cmp_groups(a1, a2);
	}

	static __int64 JACK_API unknown_merge_groups(__int64 a1, __int64 a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_merge_groups. A1: %lld, A2: %lld", a1, a2);
		}
		return jack_sdk_api->unknown_merge_groups(a1, a2);
	}

	static __int64 JACK_API unknown_do_something_groups(__int64 a1, __int64 a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_do_something_groups. A1: %lld, A2: %lld", a1, a2);
		}
		return jack_sdk_api->unknown_do_something_groups(a1, a2);
	}

	static void JACK_API unknown_get_color_or_something1(__int64 a1, unsigned char* a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_get_color_or_something1. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_get_color_or_something1(a1, a2);
	}

	static __int64 JACK_API unknown_do_something_groups2(__int64 a1, __int64 a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_do_something_groups2. A1: %lld, A2: %lld", a1, a2);
		}
		return jack_sdk_api->unknown_do_something_groups2(a1, a2);
	}

	static __int64 JACK_API unknown_call_something_color(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_call_something_color. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_call_something_color(a1);
	}

	static __int64 JACK_API unknown_call_something_color2(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_call_something_color2. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_call_something_color2(a1);
	}

	static void JACK_API unknown_get_color_or_something2(__int64 a1, unsigned char* a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_get_color_or_something2. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_get_color_or_something2(a1, a2);
	}

	static __int64 JACK_API unknown_call_something_color3(__int64 a1, unsigned long* a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_call_something_color3. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_call_something_color3(a1, a2);
	}

	static void JACK_API unknown_do_something_float(__int64 a1, unsigned int* a2, unsigned int* a3)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_do_something_float. A1: %lld", a1);
		}

		return jack_sdk_api->unknown_do_something_float(a1, a2, a3);
	}

	static void* JACK_API unknown_do_something_hashtable(const char* a1, const char* a2, __int64 a3)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_do_something_hashtable. A1: %s, A2: %s, A3: %d", a1, a2, a3);
		}
		return jack_sdk_api->unknown_do_something_hashtable(a1, a2, a3);
	}

	static void* JACK_API unknown_find_hastable(const char* a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_find_hastable. A1: %s", a1);
		}
		return jack_sdk_api->unknown_find_hastable(a1);
	}

	static void JACK_API unknown_mark_something_hashable(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_mark_something_hashable. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_mark_something_hashable(a1);
	}

	static void JACK_API unknown_alloc_something(__int64 a1, void* a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_alloc_something. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_alloc_something(a1, a2);
	}

	static void JACK_API unknown_free_something(void* Block)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_free_something.");
		}
		return jack_sdk_api->unknown_free_something(Block);
	}
	static __int64 JACK_API unknown_do_something_qt_witdget1(__int64 a1, __int64 a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_do_something_qt_witdget1. A1: %lld, A2: %lld", a1, a2);
		}
		return jack_sdk_api->unknown_do_something_qt_witdget1(a1, a2);
	}

	static __int64 JACK_API unknown_do_something_hashtable2(__int64 a1, const char* a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_do_something_hashtable2. A1: %lld, A2: %s", a1, a2);
		}
		return jack_sdk_api->unknown_do_something_hashtable2(a1, a2);
	}

	static __int64 JACK_API alloc_current_widget_1()
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function alloc_current_widget_1");
		}
		return jack_sdk_api->alloc_current_widget_1();
	}

	static __int64 JACK_API unknown_do_something_qt_witdget2(__int64 a1, __int64 a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_do_something_qt_witdget2. A1: %lld, A2: %lld", a1, a2);
		}
		return jack_sdk_api->unknown_do_something_qt_witdget2(a1, a2);
	}

	static __int64 JACK_API alloc_current_widget_2(__int64 a1, __int64 a2, __int64 a3)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function alloc_current_widget_2");
		}
		return jack_sdk_api->alloc_current_widget_2(a1,a2,a3);
	}

	static unsigned long* JACK_API qapp_process_event(__int64 a1, const char* a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, char a8, void* a9)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function qapp_process_event. A1: %lld, A2: %s, A3: %d, A4: %d, A5: %d, A6: %d, A7: %d, A8: %c", a1, a2, a3, a4, a5, a6, a7, a8);
		}
		return jack_sdk_api->qapp_process_event(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static void JACK_API widget_clear_textures(__int64 a1, void* a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function widget_clear_textures. A1: %lld", a1);
		}
		return jack_sdk_api->widget_clear_textures(a1, a2);
	}

	static __int64 JACK_API unknown_do_something_color(__int64 a1, char* a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_do_something_color. A1: %lld, A2: %s", a1, a2);
		}
		return jack_sdk_api->unknown_do_something_color(a1, a2);
	}

	static void JACK_API unknown_free_something2(__int64 a1, unsigned __int64 a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_free_something2. A1: %lld, A2: %u", a1, a2);
		}
		return jack_sdk_api->unknown_free_something2(a1, a2);
	}

	static void JACK_API unknown_recreate_something(__int64 a1, unsigned __int64 a2, char* a3, unsigned __int64 a4, int* a5)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_recreate_something. A1: %lld, A2: %u, A3: %s, A4: %u", a1, a2, a3, a4);
		}
		return jack_sdk_api->unknown_recreate_something(a1, a2, a3, a4, a5);
	}

	static __int64 JACK_API unknown_get_something(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_get_something. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_get_something(a1);
	}

	static __int64 JACK_API unknown_create_something(__int64 a1, __int64 a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_create_something. A1: %lld, A2: %d", a1, a2);
		}
		return jack_sdk_api->unknown_create_something(a1, a2);
	}

	static __int64 JACK_API unknown_create_something2(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned long* a5, unsigned long* a6, unsigned char* a7)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_create_something2. A1: %lld, A2: %llu, A3: %lld, A4: %d, A5: %p, A6: %p, A7: %p", a1, a2, a3, a4, a5, a6, a7);
		}
		return jack_sdk_api->unknown_create_something2(a1, a2, a3, a4, a5, a6, a7);
	}

	static void JACK_API unknown_free_something3(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_free_something3. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_free_something3(a1);
	}

	static void JACK_API unknown_set_undo_levels(__int64 a1, __int64 a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_set_undo_levels. A1: %lld, A2: %lld", a1, a2);
		}
		return jack_sdk_api->unknown_set_undo_levels(a1, a2);
	}

	static void JACK_API unknown_fill_something2(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something2. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something2(a1);
	}

	static void JACK_API unknown_fill_something1(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something1. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something1(a1);
	}

	static void JACK_API unknown_fill_something3(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something3. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something3(a1);
	}

	static void JACK_API unknown_fill_something4(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something4. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something4(a1);
	}

	static void JACK_API unknown_show_something(__int64 a1, __int64 a2, BOOL a3, BOOL a4)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_show_something. A1: %lld, A2: %lld, A3: %d, A4: %d", a1, a2, a3, a4);
		}
		return jack_sdk_api->unknown_show_something(a1, a2, a3, a4);
	}

	static void JACK_API unknown_fill_something7(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something7. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something7(a1);
	}

	static void JACK_API unknown_fill_something6(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something6. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something6(a1);
	}

	static void JACK_API unknown_fill_something8(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something8. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something8(a1);
	}

	static void JACK_API unknown_fill_something9(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something9. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something9(a1);
	}

	static void JACK_API unknown_fill_something5(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something5. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something5(a1);
	}

	static void JACK_API unknown_show_something2(__int64 a1, __int64 a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_show_something2. A1: %lld, A2: %d", a1, a2);
		}
		return jack_sdk_api->unknown_show_something2(a1, a2);
	}

	static void JACK_API unknown_fill_something11(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something11. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something11(a1);
	}

	static void JACK_API unknown_fill_something12(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something12. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something12(a1);
	}

	static void JACK_API unknown_fill_something13(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something13. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something13(a1);
	}

	static void JACK_API unknown_fill_something10(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something10. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something10(a1);
	}

	static void JACK_API unknown_fill_something15(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something15. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something15(a1);
	}

	static void JACK_API unknown_fill_something14(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something14. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something14(a1);
	}

	static void JACK_API unknown_fill_something16(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something16. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something16(a1);
	}

	static void JACK_API unknown_fill_something18(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something18. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something18(a1);
	}

	static void JACK_API unknown_fill_something17(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something17. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something17(a1);
	}

	static void JACK_API unknown_fill_something20(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something20. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something20(a1);
	}

	static void JACK_API unknown_fill_something19(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something19. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something19(a1);
	}

	static void JACK_API unknown_show_something3(__int64 a1, __int64 a2)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_show_something3. A1: %lld, A2: %d", a1, a2);
		}
		return jack_sdk_api->unknown_show_something3(a1, a2);
	}

	static void JACK_API unknown_fill_something22(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something22. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something22(a1);
	}

	static void JACK_API unknown_fill_something21(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function unknown_fill_something21. A1: %lld", a1);
		}
		return jack_sdk_api->unknown_fill_something21(a1);
	}

	static __int64 JACK_API show_dialog_with_options(const char* title, const char* message, const char* options, __int64 flags)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function show_dialog_with_options. Title: %s, Message: %s, Options: %s, Flags: %d", title, message, options, flags);
		}
		return jack_sdk_api->show_dialog_with_options(title, message, options, flags);
	}

	static bool JACK_API show_dialog(const char* title, const char* message, unsigned char flags)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function show_dialog. Title: %s, Message: %s, Flags: %d", title, message, flags);
		}
		return jack_sdk_api->show_dialog(title, message, flags);
	}

	static void JACK_API set_dialog_add_title(const char* title)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function set_dialog_add_title. Title: %s", title);
		}
		return jack_sdk_api->set_dialog_add_title(title);
	}

	static void JACK_API set_dialog_add_button(const char* name, void* dispatch_func)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function set_dialog_add_button. Name: %s, dispatch_func: %p", name, dispatch_func);
		}
		return jack_sdk_api->set_dialog_add_button(name, dispatch_func);
	}

	static void JACK_API set_dialog_add_button_2(const char* name, void* dispatch_func)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function set_dialog_add_button_2. Name: %s, dispatch_func: %p", name, dispatch_func);
		}
		return jack_sdk_api->set_dialog_add_button_2(name, dispatch_func);
	}

	static void JACK_API set_progress_bar(__int64 val, __int64 max)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function set_progress_bar. Value: %d, Max: %d", val, max);
		}
		return jack_sdk_api->set_progress_bar(val, max);
	}

	static void JACK_API add_dialog_editable_text(const char* category, const char* row, const char* direct_text, __int64 flags)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function add_dialog_editable_text. Category: %s, Row: %s, Direct Text: %s, Flags: %d", category, row, direct_text, flags);
		}
		return jack_sdk_api->add_dialog_editable_text(category, row, direct_text, flags);
	}

	static void JACK_API add_dialog_radiobox_text(const char* category, const char* tile, bool checked, __int64 flags)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function add_dialog_radiobox_text. Category: %s, Title: %s, Checked: %d, Flags: %d", category, tile, checked, flags);
		}
		return jack_sdk_api->add_dialog_radiobox_text(category, tile, checked, flags);
	}

	static void JACK_API add_dialog_checkbox_text(const char* category, const char* tile, bool checked, __int64 flags)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function add_dialog_checkbox_text. Category: %s, Title: %s, Checked: %d, Flags: %d", category, tile, checked, flags);
		}
		return jack_sdk_api->add_dialog_checkbox_text(category, tile, checked, flags);
	}

	static void JACK_API add_dialog_spinbox_text_int(const char* category, const char* text, __int64 value, __int64 min, __int64 max, __int64 step, __int64 flags)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function add_dialog_spinbox_text_int. Category: %s, Text: %s, Value: %d, Min: %d, Max: %d, Step: %d, Flags: %d", category, text, value, min, max, step, flags);
		}

		return jack_sdk_api->add_dialog_spinbox_text_int(category, text, value, min, max, step, flags);
	}

	static void JACK_API add_dialog_spinbox_text_float(const char* category, const char* text, float value, float min, float max, float step, __int64 flags)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function add_dialog_spinbox_text_float. Category: %s, Text: %s, Value: %f, Min: %f, Max: %f, Step: %f, Flags: %d", category, text, value, min, max, step, flags);
		}
		return jack_sdk_api->add_dialog_spinbox_text_float(category, text, value, min, max, step, flags);
	}

	static void JACK_API add_dialog_fileedit_text(const char* category, const char* a2, const char* a3, const char* a4, __int64 a5)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function add_dialog_fileedit_text. Category: %s, A2: %s, A3: %s, A4: %s, A5: %d", category, a2, a3, a4, a5);
		}
		return jack_sdk_api->add_dialog_fileedit_text(category, a2, a3, a4, a5);
	}

	static void JACK_API add_dialog_filelist_text(const char* category, const char* a2, const char* a3, const char* a4, __int64 a5)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function add_dialog_filelist_text. Category: %s, A2: %s, A3: %s, A4: %s, A5: %d", category, a2, a3, a4, a5);
		}
		return jack_sdk_api->add_dialog_filelist_text(category, a2, a3, a4, a5);
	}

	static void JACK_API add_dialog_combobox_text(const char* category, const char* a2, __int64 a3, const char* a4, __int64 a5)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function add_dialog_combobox_text. Category: %s, A2: %s, A3: %d, A4: %s, A5: %d", category, a2, a3, a4, a5);
		}
		return jack_sdk_api->add_dialog_combobox_text(category, a2, a3, a4, a5);
	}

	static void JACK_API add_dialog_directory_text(const char* category, const char* a2, const char* a3, __int64 a4)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function add_dialog_directory_text. Category: %s, A2: %s, A3: %s, A4: %d", category, a2, a3, a4);
		}
		return jack_sdk_api->add_dialog_directory_text(category, a2, a3, a4);
	}

	static void JACK_API add_dialog_query_arg_str(const char* text, char* out, __int64 out_size)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function add_dialog_query_arg_str. Text: %s, Out Size: %d", text, out_size);
		}
		return jack_sdk_api->add_dialog_query_arg_str(text, out, out_size);
	}

	static float JACK_API add_dialog_query_arg_float(const char* strval)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function add_dialog_query_arg_float. A1: %s", strval);
		}
		return jack_sdk_api->add_dialog_query_arg_float(strval);
	}

	static __int64 JACK_API add_dialog_query_arg_int(const char* strval)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function add_dialog_query_arg_int. A1: %s", strval);
		}
		return jack_sdk_api->add_dialog_query_arg_int(strval);
	}

	static void JACK_API end_dialog(__int64 a1)
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function end_dialog. A1: %lld", a1);
		}
		return jack_sdk_api->end_dialog(a1);
	}

	static void JACK_API add_dialog_plain_text(const char* Format, ...)
	{
		va_list args;
		va_start(args, Format);
		vsnprintf(big_buffer, sizeof(big_buffer), Format, args);
		va_end(args);

		jack_sdk_api->add_dialog_plain_text("HOOKED: %s", big_buffer);
	}

	static void JACK_API set_wait_cursor()
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function set_wait_cursor.");
		}

		return jack_sdk_api->set_wait_cursor();
	}

	static void JACK_API restore_cursor()
	{
		if (!IsKeyPressed(SKIP_DEBUG_KEY))
		{
			jack_sdk_api->printLog("Function restore_cursor.");
		}
		return jack_sdk_api->restore_cursor();
	}
};

#pragma pack(pop)



__int64 action_dispatch_func();

JACK_ACTION tmpJACK_ACTION{ {"actionName","actionDescription","actionDirectory"}, 0 , 0, (void*)action_dispatch_func, 0,0, 0,0 };

/* unsigned char* qlib is QLibrary address, possible is not used*/

__int64 __fastcall vpEnumActions(void(__fastcall* jackAddAction)(JACK_ACTION*, unsigned char* qt_library), unsigned char* qt_library)
{
	jackAddAction(&tmpJACK_ACTION, qt_library);

	return 1; //actions count?
}
__int64 __fastcall vpEnumArchiveFormats(unsigned int(__fastcall* jackAddArchiveFormat)(__int64 id, const char* name, const char* extension, unsigned char* qt_library)
	, unsigned char* qt_library)
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
__int64 __fastcall vpEnumTextureFormats(unsigned int(__fastcall* jackAddTextureFormat)(__int64 id, const char* name, const char* extension, unsigned char* qt_library), unsigned char* qt_library)
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

#pragma pack(pop)

TestProfile tmpTestProfile{ 0,0,1,"vpSomethingBad" };

__int64 __fastcall vpEnumProfiles(void(__fastcall* jackAddProfileStructure)(/*const char * profilename*/TestProfile* profileName, unsigned char* qt_library), unsigned char* qt_library)
{
	jackAddProfileStructure(&tmpTestProfile, qt_library);
	return 1;
}
__int64 __fastcall vpLoadArchive(__int64 id, const char* path, unsigned char* data)
{
	jack_sdk_api->printWarning("Try to load archive %i type. Path: %s. Data: %p", id, path, data);
	return 0;
}
__int64 __fastcall vpUnloadArchive(__int64 id, unsigned char* data)
{
	jack_sdk_api->printWarning("Try to unload archive %i type. Data: %p", id, data);
	return 0;
}
__int64 __fastcall vpFindArchiveFile(__int64 id, unsigned char* data, const char* filename)
{
	jack_sdk_api->printWarning("Try to find file archive %i type. Data: %p. File: %s", id, data, filename);
	return 0;
}
__int64 __fastcall vpLoadArchiveFile(__int64 id, unsigned char* data, const char* filename, unsigned char* outdata)
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
	jack_sdk_api = new JackAPI();
	memcpy(jack_sdk_api, vTable, sizeof(JackAPI));

	jack_sdk_api->printWarning("ENABLED HOOK JACK SDK!!");

	vTable->printLog = *HookJackAPI::printLog;
	vTable->printLog2 = *HookJackAPI::printLog2;
	vTable->printWarning = *HookJackAPI::printWarning;
	vTable->printError = *HookJackAPI::printError;
	vTable->free_mem_block = *HookJackAPI::free_mem_block;
	vTable->alloc_mem_block = *HookJackAPI::alloc_mem_block;
	vTable->alloc_mem_in_tempbuf = *HookJackAPI::alloc_mem_in_tempbuf;
	vTable->alloc_char_mem_block = *HookJackAPI::alloc_char_mem_block;
	vTable->get_elapsed_sec = *HookJackAPI::get_elapsed_sec;
	vTable->set_option_val = *HookJackAPI::set_option_val;
	vTable->get_option_val = *HookJackAPI::get_option_val;
	vTable->unknown_steamapi = *HookJackAPI::unknown_steamapi;
	vTable->get_last_fgd_key_type = *HookJackAPI::get_last_fgd_key_type;
	vTable->get_last_fgd_key_line = *HookJackAPI::get_last_fgd_key_line;
	vTable->load_fgd_file = *HookJackAPI::load_fgd_file;
	vTable->unknown_fill_memorybuffer = *HookJackAPI::unknown_fill_memorybuffer;
	vTable->is_fgd_parse_error = *HookJackAPI::is_fgd_parse_error;
	vTable->print_fgd_parse_error = *HookJackAPI::print_fgd_parse_error;
	vTable->clear_fgd_parse_error = *HookJackAPI::clear_fgd_parse_error;
	vTable->unknown_parse_membuf_errors = *HookJackAPI::unknown_parse_membuf_errors;
	vTable->unknown_parse_membuf = *HookJackAPI::unknown_parse_membuf;
	vTable->check_for_errors = *HookJackAPI::check_for_errors;
	vTable->unknown_set_byte = *HookJackAPI::unknown_set_byte;
	vTable->check_latest_fgd_token = *HookJackAPI::check_latest_fgd_token;
	vTable->check_bad_token = *HookJackAPI::check_bad_token;
	vTable->check_float_values_array_array = *HookJackAPI::check_float_values_array_array;
	vTable->check_float_values_array = *HookJackAPI::check_float_values_array;
	vTable->check_float_values = *HookJackAPI::check_float_values;
	vTable->check_for_errors2 = *HookJackAPI::check_for_errors2;
	vTable->unknown_unload_fgd = *HookJackAPI::unknown_unload_fgd;
	vTable->unknown_get_fgd_count_val = *HookJackAPI::unknown_get_fgd_count_val;
	vTable->unknown_set_fgd_count_val = *HookJackAPI::unknown_set_fgd_count_val;
	vTable->unknown_check_valid_str = *HookJackAPI::unknown_check_valid_str;
	vTable->unknown_get_fgd_string = *HookJackAPI::unknown_get_fgd_string;
	vTable->unknown_clear_fgd_something = *HookJackAPI::unknown_clear_fgd_something;
	vTable->unknown_get_fgd_code = *HookJackAPI::unknown_get_fgd_code;
	vTable->unknown_get_fgd_count = *HookJackAPI::unknown_get_fgd_count;
	vTable->unknown_gl_setstate3 = *HookJackAPI::unknown_gl_setstate3;
	vTable->unknown_gl_setstate2 = *HookJackAPI::unknown_gl_setstate2;
	vTable->gl_line_width = *HookJackAPI::gl_line_width;
	vTable->gl_point_width = *HookJackAPI::gl_point_width;
	vTable->gl_set_begin_option = *HookJackAPI::gl_set_begin_option;
	vTable->gl_update_color_part = *HookJackAPI::gl_update_color_part;
	vTable->gl_update_color_full = *HookJackAPI::gl_update_color_full;
	vTable->set_int_pos = *HookJackAPI::set_int_pos;
	vTable->set_float_pos = *HookJackAPI::set_float_pos;
	vTable->set_float_x = *HookJackAPI::set_float_x;
	vTable->gl_push_vec3 = *HookJackAPI::gl_push_vec3;
	vTable->gl_update = *HookJackAPI::gl_update;
	vTable->get_gl_state = *HookJackAPI::get_gl_state;
	vTable->unknown_gl_setstate = *HookJackAPI::unknown_gl_setstate;
	vTable->unknown_set_something_mouse = *HookJackAPI::unknown_set_something_mouse;
	vTable->unknown_product_from_vec = *HookJackAPI::unknown_product_from_vec;
	vTable->unknown_get_float_value = *HookJackAPI::unknown_get_float_value;
	vTable->unknown_str_get1 = *HookJackAPI::unknown_str_get1;
	vTable->unknown_str_get2 = *HookJackAPI::unknown_str_get2;
	vTable->unknown_read_file = *HookJackAPI::unknown_read_file;
	vTable->unknown_same_string = *HookJackAPI::unknown_same_string;
	vTable->is_file_exists = *HookJackAPI::is_file_exists;
	vTable->read_file = *HookJackAPI::read_file;
	vTable->create_dir = *HookJackAPI::create_dir;
	vTable->zero_is_small_float_array = *HookJackAPI::zero_is_small_float_array;
	vTable->zero_is_small_vec = *HookJackAPI::zero_is_small_vec;
	vTable->clamp_to_map = *HookJackAPI::clamp_to_map;
	vTable->snap_to_grid = *HookJackAPI::snap_to_grid;
	vTable->get_jack_version = *HookJackAPI::get_jack_version;
	vTable->get_grid_size = *HookJackAPI::get_grid_size;
	vTable->unknown_qt_func1 = *HookJackAPI::unknown_qt_func1;
	vTable->unknown_do_something = *HookJackAPI::unknown_do_something;
	vTable->unknown_list_create_some_object = *HookJackAPI::unknown_list_create_some_object;
	vTable->unknown_list_do_something = *HookJackAPI::unknown_list_do_something;
	vTable->unknown_list_swap_something2 = *HookJackAPI::unknown_list_swap_something2;
	vTable->unknown_list_swap_something = *HookJackAPI::unknown_list_swap_something;
	vTable->unknown_list_add_something = *HookJackAPI::unknown_list_add_something;
	vTable->unknown_list_add_something2 = *HookJackAPI::unknown_list_add_something2;
	vTable->unknown_list_get_at = *HookJackAPI::unknown_list_get_at;
	vTable->unknown_list_get_size = *HookJackAPI::unknown_list_get_size;
	vTable->unknown_list_get_by_name = *HookJackAPI::unknown_list_get_by_name;
	vTable->unknown_list_get_somehing = *HookJackAPI::unknown_list_get_somehing;
	vTable->unknown_list_get_somehing2 = *HookJackAPI::unknown_list_get_somehing2;
	vTable->unknown_list_add_object = *HookJackAPI::unknown_list_add_object;
	vTable->unknown_list_do_something2 = *HookJackAPI::unknown_list_do_something2;
	vTable->unknown_get_color_or_something = *HookJackAPI::unknown_get_color_or_something;
	vTable->unknown_something_color = *HookJackAPI::unknown_something_color;
	vTable->unknown_list_add_something3 = *HookJackAPI::unknown_list_add_something3;
	vTable->unknown_list_add_something4 = *HookJackAPI::unknown_list_add_something4;
	vTable->unknown_list_get_at2 = *HookJackAPI::unknown_list_get_at2;
	vTable->unknown_list_get_size2 = *HookJackAPI::unknown_list_get_size2;
	vTable->unknown_list_do_something3 = *HookJackAPI::unknown_list_do_something3;
	vTable->unknown_list_do_something4 = *HookJackAPI::unknown_list_do_something4;
	vTable->unknown_list_do_something_uppercase = *HookJackAPI::unknown_list_do_something_uppercase;
	vTable->unknown_call_something = *HookJackAPI::unknown_call_something;
	vTable->unknown_list_do_something_angles = *HookJackAPI::unknown_list_do_something_angles;
	vTable->unknown_list_do_something_float = *HookJackAPI::unknown_list_do_something_float;
	vTable->unknown_list_do_something_angles2 = *HookJackAPI::unknown_list_do_something_angles2;
	vTable->unknown_list_do_something_center = *HookJackAPI::unknown_list_do_something_center;
	vTable->unknown_list_add_something5 = *HookJackAPI::unknown_list_add_something5;
	vTable->unknown_call_something2 = *HookJackAPI::unknown_call_something2;
	vTable->unknown_list_add_something6 = *HookJackAPI::unknown_list_add_something6;
	vTable->unknown_call_something3 = *HookJackAPI::unknown_call_something3;
	vTable->unknown_list_add_something8 = *HookJackAPI::unknown_list_add_something8;
	vTable->unknown_list_add_something7 = *HookJackAPI::unknown_list_add_something7;
	vTable->unknown_list_find_something = *HookJackAPI::unknown_list_find_something;
	vTable->unknown_list_add_group = *HookJackAPI::unknown_list_add_group;
	vTable->unknown_call_something_group = *HookJackAPI::unknown_call_something_group;
	vTable->unknown_cmp_groups = *HookJackAPI::unknown_cmp_groups;
	vTable->unknown_merge_groups = *HookJackAPI::unknown_merge_groups;
	vTable->unknown_do_something_groups = *HookJackAPI::unknown_do_something_groups;
	vTable->unknown_get_color_or_something1 = *HookJackAPI::unknown_get_color_or_something1;
	vTable->unknown_do_something_groups2 = *HookJackAPI::unknown_do_something_groups2;
	vTable->unknown_call_something_color = *HookJackAPI::unknown_call_something_color;
	vTable->unknown_call_something_color2 = *HookJackAPI::unknown_call_something_color2;
	vTable->unknown_get_color_or_something2 = *HookJackAPI::unknown_get_color_or_something2;
	vTable->unknown_call_something_color3 = *HookJackAPI::unknown_call_something_color3;
	vTable->unknown_do_something_float = *HookJackAPI::unknown_do_something_float;
	vTable->unknown_do_something_hashtable = *HookJackAPI::unknown_do_something_hashtable;
	vTable->unknown_find_hastable = *HookJackAPI::unknown_find_hastable;
	vTable->unknown_mark_something_hashable = *HookJackAPI::unknown_mark_something_hashable;
	vTable->unknown_alloc_something = *HookJackAPI::unknown_alloc_something;
	vTable->unknown_free_something = *HookJackAPI::unknown_free_something;
	vTable->unknown_do_something_qt_witdget1 = *HookJackAPI::unknown_do_something_qt_witdget1;
	vTable->unknown_do_something_hashtable2 = *HookJackAPI::unknown_do_something_hashtable2;
	vTable->alloc_current_widget_1 = *HookJackAPI::alloc_current_widget_1;
	vTable->unknown_do_something_qt_witdget2 = *HookJackAPI::unknown_do_something_qt_witdget2;

	vTable->qapp_process_event = *HookJackAPI::qapp_process_event;
	vTable->alloc_current_widget_2 = *HookJackAPI::alloc_current_widget_2;

	/*vTable->widget_clear_textures = *HookJackAPI::widget_clear_textures;
	vTable->unknown_do_something_color = *HookJackAPI::unknown_do_something_color;
	vTable->unknown_free_something2 = *HookJackAPI::unknown_free_something2;
	vTable->unknown_recreate_something = *HookJackAPI::unknown_recreate_something;
	vTable->unknown_get_something = *HookJackAPI::unknown_get_something;*/
	vTable->unknown_create_something = *HookJackAPI::unknown_create_something;
	vTable->unknown_create_something2 = *HookJackAPI::unknown_create_something2;
	vTable->unknown_free_something3 = *HookJackAPI::unknown_free_something3;
	vTable->unknown_set_undo_levels = *HookJackAPI::unknown_set_undo_levels;
	vTable->unknown_fill_something2 = *HookJackAPI::unknown_fill_something2;
	vTable->unknown_fill_something1 = *HookJackAPI::unknown_fill_something1;
	vTable->unknown_fill_something3 = *HookJackAPI::unknown_fill_something3;
	vTable->unknown_fill_something4 = *HookJackAPI::unknown_fill_something4;
	vTable->unknown_show_something = *HookJackAPI::unknown_show_something;
	vTable->unknown_fill_something7 = *HookJackAPI::unknown_fill_something7;
	vTable->unknown_fill_something6 = *HookJackAPI::unknown_fill_something6;
	vTable->unknown_fill_something8 = *HookJackAPI::unknown_fill_something8;
	vTable->unknown_fill_something9 = *HookJackAPI::unknown_fill_something9;
	vTable->unknown_fill_something5 = *HookJackAPI::unknown_fill_something5;
	vTable->unknown_show_something2 = *HookJackAPI::unknown_show_something2;
	vTable->unknown_fill_something11 = *HookJackAPI::unknown_fill_something11;
	vTable->unknown_fill_something12 = *HookJackAPI::unknown_fill_something12;
	vTable->unknown_fill_something13 = *HookJackAPI::unknown_fill_something13;
	vTable->unknown_fill_something10 = *HookJackAPI::unknown_fill_something10;
	vTable->unknown_fill_something15 = *HookJackAPI::unknown_fill_something15;
	vTable->unknown_fill_something14 = *HookJackAPI::unknown_fill_something14;
	vTable->unknown_fill_something16 = *HookJackAPI::unknown_fill_something16;
	vTable->unknown_fill_something18 = *HookJackAPI::unknown_fill_something18;
	vTable->unknown_fill_something17 = *HookJackAPI::unknown_fill_something17;
	vTable->unknown_fill_something20 = *HookJackAPI::unknown_fill_something20;
	vTable->unknown_fill_something19 = *HookJackAPI::unknown_fill_something19;
	vTable->unknown_show_something3 = *HookJackAPI::unknown_show_something3;
	vTable->unknown_fill_something22 = *HookJackAPI::unknown_fill_something22;
	vTable->unknown_fill_something21 = *HookJackAPI::unknown_fill_something21;
	vTable->show_dialog_with_options = *HookJackAPI::show_dialog_with_options;
	vTable->show_dialog = *HookJackAPI::show_dialog;
	vTable->set_dialog_add_title = *HookJackAPI::set_dialog_add_title;
	vTable->set_dialog_add_button = *HookJackAPI::set_dialog_add_button;
	vTable->set_dialog_add_button_2 = *HookJackAPI::set_dialog_add_button_2;
	vTable->set_progress_bar = *HookJackAPI::set_progress_bar;
	vTable->add_dialog_editable_text = *HookJackAPI::add_dialog_editable_text;
	vTable->add_dialog_radiobox_text = *HookJackAPI::add_dialog_radiobox_text;
	vTable->add_dialog_checkbox_text = *HookJackAPI::add_dialog_checkbox_text;
	vTable->add_dialog_spinbox_text_int = *HookJackAPI::add_dialog_spinbox_text_int;
	vTable->add_dialog_spinbox_text_float = *HookJackAPI::add_dialog_spinbox_text_float;
	vTable->add_dialog_fileedit_text = *HookJackAPI::add_dialog_fileedit_text;
	vTable->add_dialog_filelist_text = *HookJackAPI::add_dialog_filelist_text;
	vTable->add_dialog_combobox_text = *HookJackAPI::add_dialog_combobox_text;
	vTable->add_dialog_directory_text = *HookJackAPI::add_dialog_directory_text;
	vTable->add_dialog_query_arg_str = *HookJackAPI::add_dialog_query_arg_str;
	vTable->add_dialog_query_arg_float = *HookJackAPI::add_dialog_query_arg_float;
	vTable->add_dialog_query_arg_int = *HookJackAPI::add_dialog_query_arg_int;
	vTable->end_dialog = *HookJackAPI::end_dialog;
	vTable->add_dialog_plain_text = *HookJackAPI::add_dialog_plain_text;
	vTable->set_wait_cursor = *HookJackAPI::set_wait_cursor;
	vTable->restore_cursor = *HookJackAPI::restore_cursor;
	
	__int64 vTableFuncCount = vTable->size - sizeof(__int64);
	//jack_sdk_api->set_wait_cursor();
	vTable->printLog("JackAPI size : %lli. Vtable size: %llu. JACK: %s", vTableFuncCount, sizeof(JackAPI), jack_sdk_api->get_jack_version());

	//jack_sdk_api->show_dialog("HELLO WORLD HELLO WORLD HELLO WORLD HELLO WORLD HELLO WORLD", "YES/NO\nYES/NO\nYES/NO\nYES/NO\nYES/NO\nYES/NO\nYES/NO\nYES/NO\nYES/NO\nYES/NO\nYES/NO\nOR yes?", 9); 

	//jack_sdk_api->restore_cursor();
	if (sdk_version != 100)
		return 100;
	return 0;
}

__int64 __fastcall vpExport(__int64 id, const char* path, unsigned char* data)
{
	jack_sdk_api->printWarning("Try to export %i type. Path: %s. Data: %p", id, path, data);
	return 0;
}
__int64 __fastcall vpImport(__int64 id, const char* path, unsigned char* data)
{
	jack_sdk_api->printWarning("Try to import %i type. Path: %s. Data: %p", id, path, data);
	return 0;
}
__int64 __fastcall vpLoadModel(__int64 id, const char* path, unsigned char* model_data, __int64 a4, unsigned char* data)
{
	jack_sdk_api->printWarning("Try to load model %i type. Path: %s. Data: %p", id, path, data);
	return 0;
}
__int64 __fastcall vpUnloadModel(__int64 id, unsigned char* data)
{
	jack_sdk_api->printWarning("Try to unload model %i type. Data: %p", id, data);
	return 0;
}
__int64 __fastcall vpRenderModel(__int64 id, unsigned __int64 a2, __int64 a3, __int64 a4) //verts, etc?
{
	//jack_sdk_api->printWarning("Try to render model %i type. Data: %p", id, data);
	return 0;
}
__int64 __fastcall vpGetModelBounds(__int64 id, vec3* mins, vec3* maxs, unsigned __int64 a4, __int64 a5)
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
__int64 __fastcall vpLoadSky(__int64 id, __int64 a2, unsigned __int64 a3, const char* name, unsigned __int64 side)
{
	jack_sdk_api->printWarning("Try to load sky %i type. Name: %s. Side: %u", id, name, side);
	return 0;
}
__int64 __fastcall vpLoadSprite(__int64 id, __int64 a2, unsigned long* a3, __int64 a4, __int64 a5)
{
	return 0;
}
__int64 __fastcall vpGetPackageInfo(__int64 id, const char* path, unsigned long* outdata)
{
	jack_sdk_api->printWarning("Try to get package %i type info. Path: %s", id, path);
	return 0;
}
__int64 __fastcall vpLoadPackage(__int64 id, const char* path)
{
	jack_sdk_api->printWarning("Try to load package %i type. Path: %s", id, path);
	return 0;
}
__int64 __fastcall vpLoadTexture(__int64 id, const char* pathname, __int64 a3, unsigned __int64 a4)
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