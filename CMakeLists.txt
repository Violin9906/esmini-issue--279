cmake_minimum_required(VERSION 3.16)

set(TARGET test)
project(${TARGET})

set(CMAKE_CXX_STANDARD 14)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories(lib/include)
link_directories(lib/bin)

add_executable(${TARGET}
        test.cpp
)

target_link_libraries(${TARGET}
        libesminiLib.so
        libesminiRMLib.so
)