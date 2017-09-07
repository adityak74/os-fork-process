# Makefile for compiling os_fork.c
# Aditya Karnam
# September, 2017

CC	= gcc
TARGET	= forkos
OBJS	= os_fork.o
SRCDIR  = src

$(TARGET):	$(OBJS)
		$(CC) -o $(TARGET) $(OBJS)

os_fork.o:	$(SRCDIR)/os_fork.c
		$(CC) -c $(SRCDIR)/os_fork.c

clean:
		/bin/rm -f *.o $(TARGET)

cleanobj: 
		/bin/rm -f *.o