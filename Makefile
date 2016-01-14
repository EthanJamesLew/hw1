edit:
	echo "Building RELEASE version in current diectory..."
	g++ -o HW1 -std=c++11 main.cpp printdata.cpp
debug:
	echo "Building DEBUG version in Debug folder..."
	g++ -o Debug/HW1 -Wall -g -std=c++11 main.cpp printdata.cpp

clean:
	rm -rf Debug/*
