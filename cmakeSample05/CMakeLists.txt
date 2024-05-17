# 최소 필요한 CMake 버전 설정
cmake_minimum_required(VERSION 3.10)

# 프로젝트 이름 설정
project(cmakeSample05)

# 공유 라이브러리의 소스 파일을 변수에 할당
set(LIBRARY_SOURCE_FILES shape.cpp)

# 공유 라이브러리 만들기
add_library(shape_library SHARED ${LIBRARY_SOURCE_FILES})

# 실행 파일의 소스 파일을 변수에 할당
set(EXECUTABLE_SOURCE_FILES main.cpp)

# 실행 파일 만들기
add_executable(${PROJECT_NAME} ${EXECUTABLE_SOURCE_FILES})

# 실행 파일이 공유 라이브러리를 링크하도록 설정
target_link_libraries(${PROJECT_NAME} shape_library)