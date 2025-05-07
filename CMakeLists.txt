cmake_minimum_required(VERSION 3.10)

project(BasicSpaceShooter VERSION 0.0.1
                  DESCRIPTION "A SDL3 game"
                  LANGUAGES CXX)

find_package(raylib CONFIG REQUIRED)

# List files
set(SRCS
    main.cpp
)


add_executable(${PROJECT_NAME} ${SRCS})

# Set C++17 feature
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)

target_link_libraries(${PROJECT_NAME} PRIVATE raylib)
