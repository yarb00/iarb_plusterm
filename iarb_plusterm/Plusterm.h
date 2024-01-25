#pragma once
#include <string>
#include <Windows.h>

class Plusterm
{
public:
	void start();
private:
	const std::string plusterm_version{ "0.20.1" };

#ifdef DEBUG
	const std::string plusterm_version_channel{ "DEBUG" };
#else
	const std::string plusterm_version_channel{ "RTL_CANARY" };
#endif

	bool is_exit{};

	void plusterm_main();

	void run(std::string _user_input_command, std::string _user_input_text);

	void help();

	void print_title(std::string _mode = "title");

	void info(std::string _info_level, std::string _info_text, std::string _input_command = "_plusterm?undefined_");

	//in developing, doesn't work now. use set_static_color() instead
	template<int txt = 7, int bg = 0>
	std::ostream& set_color(std::ostream& text);

	void set_static_color(std::string _color_mode = "output_default");
};