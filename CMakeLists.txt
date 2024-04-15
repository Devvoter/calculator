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
set(CPACK_PACKAGE_CONTACT "xcomovj00@stud.fit.vutbr.cz")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Calculator")
set(CPACK_PACKAGE_VERSION "1.0.0-Beta")

if(WIN32)
    set(CPACK_GENERATOR NSIS)
    install(DIRECTORY deployment/ DESTINATION .)
    set(CPACK_PACKAGE_INSTALL_DIRECTORY "${PROJECT_NAME}")
    set(CPACK_NSIS_EXTRA_INSTALL_COMMANDS "Execwait 'vcredist_x64.exe /q'")
    set(CPACK_NSIS_CREATE_ICONS_EXTRA "CreateShortCut '$DESKTOP\\\\${PROJECT_NAME}.lnk' '$INSTDIR\\\\${PROJECT_NAME}.exe'")
    set(CPACK_NSIS_DELETE_ICONS_EXTRA "Delete '$DESKTOP\\\\${PROJECT_NAME}.lnk'")    
else()
    set(CPACK_GENERATOR DEB)
    install(TARGETS ${PROJECT_NAME} DESTINATION /opt/${PROJECT_NAME})
    install(DIRECTORY src/resources DESTINATION /opt/${PROJECT_NAME})
    install(FILES src/install/${PROJECT_NAME}.desktop DESTINATION share/applications)
    install(FILES src/install/uinstall.sh DESTINATION /opt/${PROJECT})
endif()

include(CPack)
