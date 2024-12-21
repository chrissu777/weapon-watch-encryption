cmake_minimum_required(VERSION 3.10)

project(weapon-watch-encryption VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)

find_package(AWSSDK REQUIRED COMPONENTS kms s3)
find_package(OpenSSL REQUIRED)

