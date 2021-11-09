echo off
g++ -o ./test_data ./test_data.cpp ./BaseData.cpp ./IntData.cpp ./DoubleData.cpp ./BaseDataArray.cpp ./IntDataArray.cpp ./DoubleDataArray.cpp 
dir *.exe
