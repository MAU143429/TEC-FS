cmake_minimum_required(VERSION 3.19)
project(TEC_FS)

set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_FLAGS -pthread)

add_executable(TEC_FS main.cpp src/UtilJSON/JSON_Management.h src/Objects/AppMessage.h src/Socket/Server.h src/Algorithms/HuffmanCompression.h src/Objects/Huffman_pair.h src/App_Controller/App_Controller.h src/DiskNodes_Controller/Disk_Controller.h src/Objects/DiskMessage.h src/Algorithms/BinaryConverter.h src/Socket/Server.cpp src/DiskNodes_Controller/Sender.h)