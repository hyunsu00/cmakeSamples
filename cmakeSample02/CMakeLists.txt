# CMakeList.txt: cmakeSample02에 대한 CMake 프로젝트, 여기에 소스를 포함하고
# 프로젝트 특정 논리를 정의합니다.
#
cmake_minimum_required (VERSION 3.8)

project ("cmakeSample02")

# 이 프로젝트의 실행 파일에 소스를 추가합니다.
add_library (cmakeSample02 STATIC "Rect.cpp" "Rect.h")

