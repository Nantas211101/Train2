build: compile
	g++ *.o -o chap1 -L "D:\SFML-2.5.1\lib" -lsfml-graphics -lsfml-window -lsfml-system
compile:
	g++ -c *.cpp -I "D:\SFML-2.5.1\include"