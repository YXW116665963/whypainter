# message(STATUS "main:CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")
# Set the wxWidgets include directories
# include_directories(${APPSRC_PATH}/frame)
# include_directories(${APPSRC_PATH})
# 设置可执行文件输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
# 设置共享库输出目录
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
# 设置静态库输出目录（如果有静态库的话）
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
# my var 设置动态库和exe输出路径，会传递到子cmake
set(APP_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/app)
set(SERVICE_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/service)
set(FOUNDATION_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/foundation)


add_subdirectory(app)
add_subdirectory(service)
add_subdirectory(foundation)

