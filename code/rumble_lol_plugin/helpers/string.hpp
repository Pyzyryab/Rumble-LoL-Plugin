#pragma once

#include <string>
#include <vector>

namespace StringHelper {
	std::to_string(std::wstring wstr);
	std::wstring to_wstring(std::string str);
    std::vector<std::string>& split_by_delimiter(const std::string& input, char delimiter, std::vector<std::string>& output);
}
