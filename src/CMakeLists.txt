add_library(logpp
	logpp.cc)

target_include_directories(logpp PUBLIC
	${PROJECT_SOURCE_DIR}/src/includes
)
