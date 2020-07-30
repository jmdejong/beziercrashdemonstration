# based on https://stackoverflow.com/a/44720684

cmake_minimum_required(VERSION 3.3)
project(bezierfeature) # Your project name

set(CMAKE_CXX_STANDARD 11) # This is equal to QMAKE_CXX_FLAGS += -std=c++0x

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)
# Instruct CMake to run uic automatically when needed.
set(CMAKE_AUTOUIC ON)

# This will find the Qt5 files. You will need a QT5_DIR env variable
find_package(Qt5Widgets REQUIRED) # Equivalent of QT += widgets

set(CURVE_SOURCES
	main.cpp)
set(CURVE_HEADERS)

add_subdirectory(triwild)

# This will create you executable
add_executable(testbezierfeature ${CURVE_SOURCES} ${CURVE_HEADERS})
# This will link necessary Qt5 libraries to your project
target_link_libraries(testbezierfeature Qt5::Widgets)
target_link_libraries(testbezierfeature triwild_lib)
