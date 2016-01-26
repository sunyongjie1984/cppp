all : AddItem
AddItem : add_item.o
	g++ -o AddItem -std=c++0x -g -Wall add_item.cpp
add_item.o : add_item.cpp
	g++ -o add_item.o -std=c++0x -g -Wall -c add_item.cpp
clean:
	rm -rf *.o AddItem *.gch
