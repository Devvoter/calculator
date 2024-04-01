cmake_minimum_required(VERSION 3.16)
project(calculator VERSION 0.1 LANGUAGES CXX)

#----Set C++ standard----
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#----Files----
set(LIB_FILES lib/mathLib.cpp)
set(SRC_FILES src/main.cpp)
set(TEST_FILES src/mainMathFunkceTests.cpp)

#----Main Executable----
add_executable(calculator ${SRC_FILES} ${LIB_FILES})

#----GUI----
set(Qt6_DIR "/path/to/qt6/lib/cmake/Qt6")
find_package(Qt6 COMPONENTS Widgets REQUIRED)

if(Qt6_FOUND)
    target_link_libraries(calculator PRIVATE Qt6::Widgets)
else()
    message(FATAL_ERROR "Qt6 not found. Please check your Qt6 installation.")
endif()

#----GTESTS----
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/release-1.11.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

#----Testing Executable----
add_executable(runTests ${TEST_FILES} ${LIB_FILES})
target_include_directories(runTests PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(runTests gtest_main)
include(GoogleTest)
gtest_discover_tests(runTests)

#----DOXYGEN----
find_package(Doxygen REQUIRED)
if(Doxygen_FOUND)
    add_custom_target(docs ALL
        COMMAND ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMENT "Generating API documentation with Doxygen"
        VERBATIM
    )
else()
    message(FATAL_ERROR "Doxygen needs to be installed to generate the doxygen documentation")
endif()
