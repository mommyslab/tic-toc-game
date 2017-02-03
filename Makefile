# Here is the basic syntax

all: main

main: main.cpp
	g++ main.cpp -o main

clean:
	rm main