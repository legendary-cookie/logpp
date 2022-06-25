#include <logpp.h>
using namespace logpp;

int main(void) {
	Logger logger;
	logger.info("Best logger in ze entire world.");
	logger.warn("SOMETHINGS WRONG BUT NOT FATAL!");
	logger.err("This is an error!");
	return 0;
}
