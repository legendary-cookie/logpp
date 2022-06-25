#pragma once

#include <string>

namespace logpp {
class Logger {
public:
  void info(std::string s);
  void err(std::string s);
  void warn(std::string s);
};
} // namespace logpp
