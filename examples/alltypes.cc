#include <logpp.h>
using namespace logpp;

int main(void) {
	// Global logger
	Logger logger;
	logger.info("Best logger in ze entire world.");
	logger.warn("SOMETHINGS WRONG BUT NOT FATAL!");
	logger.err("This is an error!");
	// Logger with name
	Logger lwithname("Hello World");
	lwithname.info("Look at my name! It's not global anymore, is it?");
	return 0;
}
