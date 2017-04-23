all: healthTest foodTest attentionTest tamagotchi

healthTest: healthTest.o health.o
	g++ -g healthTest.cpp health.cpp -o healthTest

foodTest: foodTest.o food.o
	g++ -g foodTest.cpp food.cpp -o foodTest

attentionTest: attentionTest.o attention.o
	g++ -g attentionTest.cpp attention.cpp -o attentionTest

tamagotchi: main.o health.o food.o attention.o
	g++ -g main.cpp health.cpp food.cpp attention.cpp -o tamagotchi

clean:
	rm -f *.o

real_clean: clean
	rm -f healthTest foodTest attentionTest tamagotchi