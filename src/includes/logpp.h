#pragma once

#include <string>

namespace logpp {
class Logger {
public:
  std::string lname;
  Logger(std::string name) {
	  lname = name;
  }
  Logger() {
	  lname = "Global";
  }
	
  void info(std::string s);
  void err(std::string s);
  void warn(std::string s);
private:
  std::string get_common_head(std::string s);
};
} // namespace logpp
