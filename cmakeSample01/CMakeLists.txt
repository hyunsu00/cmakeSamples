﻿# CMakeList.txt: cmakeSample에 대한 CMake 프로젝트, 여기에 소스를 포함하고
# 프로젝트 특정 논리를 정의합니다.
#
cmake_minimum_required (VERSION 3.8)

project ("cmakeSample01")

# 이 프로젝트의 실행 파일에 소스를 추가합니다.
add_executable (cmakeSample01 "main.cpp")

# TODO: 필요한 경우 테스트를 추가하고 대상을 설치합니다.
