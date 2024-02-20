#pragma once

#include "tic_toc.hpp"
namespace llog {
// // define print color
// const std::string RESET = "\033[0m";
// const std::string RESET_RETURN = "\033[0m\n";
// const std::string BLACK = "\033[1;30m";   /* Black */
// const std::string RED = "\033[1;31m";     /* Red */
// const std::string GREEN = "\033[1;32m";   /* Green */
// const std::string YELLOW = "\033[1;33m";  /* Yellow */
// const std::string BLUE = "\033[1;34m";    /* Blue */
// const std::string MAGENTA = "\033[1;35m"; /* Magenta */
// const std::string CYAN = "\033[1;36m";    /* Cyan */
// const std::string WHITE = "\033[1;37m";   /* White */

TicToc::Ptr CreateTimer(const std::string &name);
std::string GetAllTimingStatistics(int print_level = 100);
void PrintAllTimingStatistics(int print_level = 100);
void Reset();
void PrintLog(int print_level = 100);
void SaveLog(const std::string &_save_path);

} // namespace llog