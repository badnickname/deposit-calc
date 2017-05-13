TITLE = deposit-calc
MAIN = main
DPST = deposit
FLAGS = -Wall -Werror
BUILDPATH = ../build/
BINPATH = ../bin/
CC = gcc

all: build

$(BUILDPATH)$(MAIN).o: $(MAIN).c
	$(CC) $(FLAGS) -c $(MAIN).c -o $(BUILDPATH)$(MAIN).o

$(BUILDPATH)$(DPST).o: $(DPST).c
	$(CC) $(FLAGS) -c $(DPST).c -o $(BUILDPATH)$(DPST).o

build: $(BUILDPATH)$(MAIN).o $(BUILDPATH)$(DPST).o
	$(CC) $(BUILDPATH)$(MAIN).o $(BUILDPATH)$(DPST).o -o $(BINPATH)$(TITLE)

clean:
	rm -rf $(BUILDPATH)*.o
