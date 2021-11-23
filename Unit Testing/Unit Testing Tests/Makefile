CC = g++ # Compiler
CFLAGS = -g -w -Wall # Compile Flags

Main: Main.o Game.o # Make a file named Main (Depending on files Main.o and Game.o)
	$(CC) $(CFLAGS) -o Main Main.o Game.o

Game.o: ../Unit\ Testing/Game.h ../Unit\ Testing/Game.cpp
	$(CC) $(cflags) -c ../Unit\ Testing/Game.cpp

clean: # Clean Directory (Remove Object files and .exe files)
	rm -f core *.o Main