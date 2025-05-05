# message(STATUS "main:CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")
project(whypainter_app)

# Define a variable containing a list of source files for the project
file(GLOB_RECURSE APP_HEADERS *.h)
file(GLOB_RECURSE APP_CPPS *.cpp)

set(APP_ALLSRC ${APP_HEADERS} ${APP_CPPS})

# Set the wxWidgets include directories
include_directories(${APP_ROOT}/frame)
include_directories(${APP_ROOT}/panel/paint)
include_directories(${APP_ROOT}/panel/preview)
include_directories(${APP_ROOT})
include_directories(${FOUNDATION_ROOT}/common)
include_directories(${FOUNDATION_ROOT}/gui)

# Define the build target for the executable
add_executable(${PROJECT_NAME} WIN32 MACOSX_BUNDLE ${APP_ALLSRC})

#message(STATUS "APP_ALLSRC: ${APP_ALLSRC}")


# Request the required wxWidgets libs
find_package(wxWidgets 3.3 COMPONENTS core base REQUIRED CONFIG)
target_link_libraries(${PROJECT_NAME} PUBLIC 
wxWidgets::wxWidgets
foundation
)