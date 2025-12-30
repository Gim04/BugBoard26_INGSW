cmake_minimum_required(VERSION 4.0)

project(
    bugboard
    VERSION 0.0.1
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# LIBS
include(FetchContent)

# QT6
find_package(Qt6 COMPONENTS Core Widgets REQUIRED)

# CATCH2 test xUnit
find_package(Catch2 3 QUIET)
if (NOT Catch2_FOUND)
    FetchContent_Declare(
        Catch2
        GIT_REPOSITORY
        https://github.com/catchorg/Catch2.git
        GIT_TAG v3.12.0
        )
    FetchContent_MakeAvailable(Catch2)
endif()


add_executable(bugboard src/main.cpp)
target_link_libraries(bugboard PRIVATE Qt6::Core Qt6::Widgets)

enable_testing()

add_executable(bugboard_tests tests/test_main.cpp)
target_link_libraries(bugboard_tests PRIVATE Catch2::Catch2WithMain)

include(CTest)
include(Catch)

catch_discover_tests(bugboard_tests)