# Makefile for compiling forkos programs
# Aditya Karnam
# September, 2017

CC	= gcc
TARGETS	= forkos forkos_1_3 forkos_4 forkos_5 forkos_6 forkos_7
OBJS	= forkos.o forkos_1_3.o forkos_4.o forkos_5.o forkos_6.o forkos_7.o
SRCDIR  = src

all: $(TARGETS)

$(TARGETS): % : %.o
		$(CC) -o $@ $<

$(OBJS) : %.o : $(SRCDIR)/%.c
		$(CC) -c $<

clean:
		/bin/rm -f *.o $(TARGETS)

cleanobj: 
		/bin/rm -f *.o