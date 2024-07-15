# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Espressif/frameworks/esp-idf-v5.2.1/components/bootloader/subproject"
  "D:/2.upwork/91.Beer/esp32_beer/build/bootloader"
  "D:/2.upwork/91.Beer/esp32_beer/build/bootloader-prefix"
  "D:/2.upwork/91.Beer/esp32_beer/build/bootloader-prefix/tmp"
  "D:/2.upwork/91.Beer/esp32_beer/build/bootloader-prefix/src/bootloader-stamp"
  "D:/2.upwork/91.Beer/esp32_beer/build/bootloader-prefix/src"
  "D:/2.upwork/91.Beer/esp32_beer/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/2.upwork/91.Beer/esp32_beer/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/2.upwork/91.Beer/esp32_beer/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
