CC      = gcc
CFLAGS  = -g -Wall -Wextra -Wno-unused-result -Wpedantic -O0 -lm
RM      = rm -f

default: all

all: log

log: log.c
	$(CC) $(CFLAGS) -o log log.c 

clean veryclean:
	$(RM) log
