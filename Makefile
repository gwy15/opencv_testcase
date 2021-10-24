main: main.cpp
	clang++ main.cpp -I /usr/include/opencv4 -lopencv_imgcodecs -lopencv_core -o main
