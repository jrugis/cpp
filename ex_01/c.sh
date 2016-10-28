F=../../build-cpp/cpp_01
clang++ -std=c++11 -I/Users/johnrugis/boost_1_62_0 main.cpp -o $F

if [ $? -eq 0 ]; then $F; fi



