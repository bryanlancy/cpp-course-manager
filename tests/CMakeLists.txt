include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(create_course_manager create_course_manager.cpp)

target_link_libraries(create_course_manager
 PRIVATE
  GTest::GTest
  cm)

add_test(Create_CourseManager create_course_manager)
