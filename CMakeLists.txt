cmake_minimum_required(VERSION 3.16)
project(calculator VERSION 0.1 LANGUAGES CXX)

#----Set C++ standard----
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Use the standard project setup to handle various platform-specific settings
# qt_standard_project_setup()
set(CMAKE_AUTOMOC ON) 
set(CMAKE_AUTORCC ON) 
set(CMAKE_AUTOUIC ON)

#----Include directories----
set(INCLUDE_DIRECTORIES include)

#----Files----
set(LIB_FILES lib/mathLib.cpp)
set(SRC_FILES src/main.cpp src/mainwindow.cpp)
set(UI_FILES src/mainwindow.ui)
set(TEST_FILES src/mainMathFunctionTests.cpp src/advancedMathFunctionTests.cpp)
set(IN_FILES include/main.h include/mainwindow.h include/ui_mainwindow.h)

#----Find Qt package----
set(Qt6_DIR "/path/to/qt6/lib/cmake/Qt6")
find_package(Qt6 COMPONENTS Widgets REQUIRED)

#----Main Executable----
qt_add_executable(calculator
    MANUAL_FINALIZATION
    ${SRC_FILES}
    ${LIB_FILES}
    ${UI_FILES}
    ${IN_FILES}
)

#----Link libraries----
target_link_libraries(calculator PRIVATE Qt6::Widgets)

#----Include directories----
target_include_directories(calculator PRIVATE ${INCLUDE_DIRECTORIES})

set_target_properties(calculator PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)

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
target_include_directories(runTests PRIVATE ${INCLUDE_DIRECTORIES})
target_link_libraries(runTests PRIVATE gtest_main)
include(GoogleTest)
gtest_discover_tests(runTests)

#----Profiling Executable----
add_executable(stddev profiling/stddev.cpp lib/mathLib.cpp)
target_compile_options(stddev PRIVATE -pg)
target_link_options(stddev PRIVATE -pg)

#----DOXYGEN----
# find_package(Doxygen REQUIRED)
# if(Doxygen_FOUND)
#     add_custom_target(docs ALL
#         COMMAND ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile
#         WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
#         COMMENT "Generating API documentation with Doxygen"
#         VERBATIM
#     )
# else()
#     message(STATUS "Doxygen not found, skipping documentation")
# endif()

#----Finalization for Qt----
if (QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(calculator)
endif()

#----Install----
set(CPACK_PACKAGE_NAME "${PROJECT_NAME}")
set(CPACK_PACKAGE_VENDOR "DIY")
set(CPACK_PACKAGE_CONTACT "jc@stud.fit.vutbr.cz")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Calculator")
set(CPACK_PACKAGE_VERSION "1.0.0-Beta")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "${PROJECT_NAME}")
set(CPACK_OUTPUT_FILE_PREFIX "${CMAKE_SOURCE_DIR}/src/install/_packages")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "JC <${CPACK_PACKAGE_CONTACT}>")
set(CPACK_GENERATOR DEB)
set(CMAKE_INSTALL_PREFIX "${CMAKE_SOURCE_DIR}/install")
set(CPACK_DEBIAN_PACKAGE_SHLIBDEPS YES)

install(TARGETS ${PROJECT_NAME} DESTINATION /usr/bin)
install(DIRECTORY src/ DESTINATION /opt/${PROJECT_NAME})
install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/${PROJECT_NAME}.desktop" DESTINATION /usr/share/applications)
install(FILES src/${PROJECT_NAME}.png DESTINATION /usr/share/icons/hicolor/512x512/apps)
#install(FILES src/uinstall.sh DESTINATION /opt/${PROJECT})

include(CPack)
