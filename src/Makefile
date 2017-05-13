TITLE = deposit-calc
TITLETEST = deposit-calc-test

MAIN = main
DPST = deposit
MAINTEST = maintest
DPSTTEST = deposit_test

FLAGS = -Wall -Werror
BUILDPATH = ../build/
BINPATH = ../bin/
TESTPATH = ../test/
HEADERS = -I ../thirdparty -I ../src
CC = gcc

all: build

$(BUILDPATH)$(MAIN).o: $(MAIN).c
	$(CC) $(FLAGS) -c $(MAIN).c -o $(BUILDPATH)$(MAIN).o

$(BUILDPATH)$(DPST).o: $(DPST).c
	$(CC) $(FLAGS) -c $(DPST).c -o $(BUILDPATH)$(DPST).o

build: $(BUILDPATH)$(MAIN).o $(BUILDPATH)$(DPST).o
	$(CC) $(BUILDPATH)$(MAIN).o $(BUILDPATH)$(DPST).o -o $(BINPATH)$(TITLE)

$(BUILDPATH)$(MAINTEST).o: $(TESTPATH)main.c
	$(CC) $(HEADERS) -c $(TESTPATH)main.c -o $(BUILDPATH)$(MAINTEST).o

$(BUILDPATH)$(DPSTTEST).o: $(TESTPATH)$(DPSTTEST).c
	$(CC) $(HEADERS) -c $(TESTPATH)$(DPSTTEST).c -o $(BUILDPATH)$(DPSTTEST).o

test: $(BUILDPATH)$(DPSTTEST).o $(BUILDPATH)$(MAINTEST).o $(BUILDPATH)$(DPST).o
	$(CC) $(BUILDPATH)$(MAINTEST).o $(BUILDPATH)$(DPSTTEST).o $(BUILDPATH)$(DPST).o -o $(BINPATH)$(TITLETEST)

clean:
	rm -rf $(BUILDPATH)*.o
