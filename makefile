all: healthTest

healthTest: healthTest.o health.o

	g++ -g healthTest.cpp health.cpp -o healthTest
