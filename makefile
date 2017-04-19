CC = g++
CCFLAGS = -g -w
exec: main.o Item.o Animal.o Grassland.o Wolf.o Rabbit.o makefile
	$(CC) $(CCFLAGS) -o Project7 main.o Grassland.o
main.o:
	$(CC) $(CCFLAGS) -c main.C
Item.o:
	$(CC) $(CCFLAGS) -c Item.h
Animal.o:
	$(CC) $(CCFLAGS) -c Animal.h
Grassland.o:
	$(CC) $(CCFLAGS) -c Grassland.C
Wolf.o:
	$(CC) $(CCFLAGS) -c Wolf.h
Rabbit.o:
	$(CC) $(CCFLAGS) -c Rabbit.h
clean:
	rm -rf *.o
