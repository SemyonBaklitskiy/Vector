.PHONY: 1 2 3 4 5 clean

common.o: common.cpp
	g++ -Wall -Wextra -c common.cpp -o common.o

1: task1.cpp
	g++ -Wall -Wextra task1.cpp -o task1.exe
	./task1.exe

2: task2.cpp common.o
	g++ -Wall -Wextra task2.cpp common.o -o task2.exe
	./task2.exe

3: task3.cpp common.o
	g++ -Wall -Wextra task3.cpp common.o -o task3.exe
	./task3.exe

4: task4.cpp common.o
	g++ -Wall -Wextra task4.cpp common.o -o task4.exe
	./task4.exe

5: task5.cpp
	g++ -Wall -Wextra task5.cpp -o task5.exe
	./task5.exe

clean:
	rm task1.exe task2.exe task3.exe task4.exe task5.exe common.o