CC      = gcc

CFLAGS  = -g -std=c99 -Wall -Wextra -Wno-unused-result -Wpedantic -O0 -lm
# -std=c99: padrao C99 da linguagem C
# -ansi:    padrao C90 da linguagem C
# -O0: nao otimiza o codigo ao compilar
# -g:  prepara o terreno para que o gdb possa encontrar bugs

RM      = rm -f

default: all

all: log

log: log.c
	$(CC) $(STD) $(CFLAGS) -o log log.c 

clean veryclean:
	$(RM) log
