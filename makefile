all: tamagotchi

healthTest: healthTest.o health.o
	g++ -g healthTest.cpp health.cpp -o healthTest

foodTest: foodTest.o food.o
	g++ -g foodTest.cpp food.cpp -o foodTest

attentionTest: attentionTest.o attention.o
	g++ -g attentionTest.cpp attention.cpp -o attentionTest

tamagotchi: driver.o health.o food.o attention.o display.o periodic.o
	g++ -g driver.cpp health.cpp food.cpp attention.cpp display.cpp periodic.cpp -o tamagotchi

clean:
	rm -f *.o

real_clean: clean
	rm -f healthTest foodTest attentionTest tamagotchi
