project(singleton)

add_library(my_static_with_singleton STATIC my_static_with_singleton.cpp)
add_library(shared_a SHARED shared_a.cpp)
target_link_libraries(shared_a my_static_with_singleton)

add_library(shared_b SHARED shared_b.cpp)
target_link_libraries(shared_b my_static_with_singleton)

add_executable(my_executable my_executable.cpp)
target_link_libraries(my_executable shared_a shared_b)

