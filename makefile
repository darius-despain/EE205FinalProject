all: healthTest

healthTest: healthTest.o health.o

	g++ -g healthTest.cpp health.cpp -o healthTest
clean:
	rm -f *.o

real_clean: clean
	rm -f healthTest
