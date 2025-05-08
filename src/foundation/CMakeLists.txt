message(STATUS "APP_ROOT: ${APP_ROOT}")
project(foundation)

# Define a variable containing a list of source files for the project
file(GLOB_RECURSE FOUNDATION_HEADERS *.h)
file(GLOB_RECURSE FOUNDATION_CPPS *.cpp)

set(FOUNDATION_SRC ${FOUNDATION_HEADERS} ${FOUNDATION_CPPS})

# Set the wxWidgets include directories
include_directories(${FOUNDATION_ROOT}/common)
include_directories(${FOUNDATION_ROOT}/gui)
include_directories(${FOUNDATION_ROOT}/include)
include_directories(${APP_ROOT}/frame)
# Define the build target for the executable
add_library(${PROJECT_NAME} SHARED ${FOUNDATION_SRC})

message(STATUS "FOUNDATION_ROOT: ${FOUNDATION_ROOT}")
# Request the required wxWidgets libs
find_package(wxWidgets 3.3 COMPONENTS core base REQUIRED CONFIG)
target_link_libraries(${PROJECT_NAME} PUBLIC wxWidgets::wxWidgets)