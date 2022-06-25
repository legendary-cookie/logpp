#include "logpp.h"
#include <ctime>
#include <iomanip>
#include <iostream>
#include <sstream>

namespace logpp {

  static std::string wrap(std::string s) {
    std::ostringstream oss;
    oss << "[" << s << "]";
    return oss.str();
  }

  static std::string get_ts(void) {
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);
    std::ostringstream oss;
    oss << std::put_time(&tm, "%d/%m/%y - %H:%M:%S");
    return oss.str();
  }

  std::string Logger::get_common_head(std::string s) {
    std::ostringstream oss;
    oss << wrap(get_ts()) << " " << wrap(s) << " " << wrap(lname) << " ";
    return oss.str();
  }

  void Logger::info(std::string s) {
    std::cout << get_common_head("INFO") << s << std::endl;
  }

  void Logger::err(std::string s) {
    std::cerr << get_common_head("ERR") << s << std::endl;
  }
  void Logger::warn(std::string s) {
    std::cerr << get_common_head("WARN") << s << std::endl;
  }

} // namespace logpp
