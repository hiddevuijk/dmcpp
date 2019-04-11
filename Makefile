TARGET = test.exe
OBJS = main.o randuni.o configFile.o
CC = g++
OPTFLAG =  -O3 -DNDEBUG
CFLAGS = -c -Wall  -g
LFLAGS = -Wall  -g
#CFLAGS = -c -Wall -O3 -DNDEBUG
#LFALGS = -Wall -O3 -DNDEBUG

$(TARGET): $(OBJS)
	$(CC) $(LFLAGS)  $(OBJS) -o $(TARGET)

main.o: main.cpp xyz.h system.h 
	$(CC) $(CFLAGS) main.cpp

randuni.o: randuni.cpp randuni.h
	$(CC) $(CFLAGS) randuni.cpp

configFile.o: configFile.cpp configFile.h
	$(CC) $(CFLAGS) configFile.cpp

.PHONY: clean
clean:
	rm -f  $(OBJS) $(TARGET)

