cmake_minimum_required(VERSION 4.3.3)

project(ToDoApp)

#ftxui
include(FetchContent)
FetchContent_Declare(ftxui
  GIT_REPOSITORY https://github.com/ArthurSonzogni/FTXUI
  GIT_TAG v7.0.1 
)
FetchContent_MakeAvailable(ftxui)

add_executable(ToDoApp)

target_link_libraries(ToDoApp
  PRIVATE ftxui::screen
  PRIVATE ftxui::dom
  PRIVATE ftxui::component
)

target_sources(ToDoApp
    PRIVATE src/Code/main.cpp
)