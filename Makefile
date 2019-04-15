# Structured makefile for camera placement
#
#

CC = gcc  #-gdwarf-3 
LDLIBS =  -lglut -lGL -lGLU -lm
HEADERS = opengl.h structs.h globals.h constants.h prototypes.h
OBJS = init.o drawAxes.o reshape.o display.o  

debug ?= n
ifeq ($(debug), y)
    CFLAGS += -g -DDEBUG
else
    CFLAGS += -O2 
endif


all: spot tags 

spot :	main.o $(OBJS) 
	$(CC) $(CFLAGS) main.o $(OBJS) -o spot $(LDLIBS)

main.o : main.c $(HEADERS)
	$(CC) $(CFLAGS) main.c -c

init.o : init.c $(HEADERS)
	$(CC) $(CFLAGS) init.c -c

drawAxes.o : drawAxes.c $(HEADERS)
	$(CC) $(CFLAGS) drawAxes.c -c

reshape.o : reshape.c $(HEADERS)
	$(CC) $(CFLAGS) reshape.c -c

display.o : display.c $(HEADERS)
	$(CC) $(CFLAGS) display.c -c

clean:
	rm *.o

pristine:
	rm *.o
	touch *

tags:
	ctags *.h *.c
