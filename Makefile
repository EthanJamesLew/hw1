edit:
<<<<<<< HEAD
	echo "Building RELEASE version in current diectory..."
	g++ -o HW1 -std=c++11 main.cpp printdata.cpp
debug:
	echo "Building DEBUG version in Debug folder..."
	g++ -o Debug/HW1 -Wall -g -std=c++11 main.cpp printdata.cpp
=======
	g++ -o Debug/HW1 -std=c++11 main.cpp printdata.cpp
>>>>>>> 008acbad9f795107972f3087f1424a7d1f3a6eb7

clean:
	rm -rf Debug/*
