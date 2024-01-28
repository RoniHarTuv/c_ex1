CC=gcc
AR= ar
FLAGS= -Wall -g
BASIC=basicClassification.o
ADVANCED_L= advancedClassificationLoop.o
ADVANCED_R= advancedClassificationRecursion.o

all: libclassloops.a mains maindloop maindrec

mains: main.o libclassrec.a 
	$(CC) -o mains main.o libclassrec.a 

maindloop: main.o libclassloops.so
	$(CC) -o maindloop main.o ./libclassloops.so

maindrec: main.o libclassrec.so
	$(CC) -o maindrec main.o ./libclassrec.so

libclassloops.a: $(BASIC) $(ADVANCED_L) 
	$(AR) -rcs libclassloops.a $(BASIC) $(ADVANCED_L)

libclassrec.a: $(BASIC) $(ADVANCED_R) 
	$(AR) -rcs libclassrec.a $(BASIC) $(ADVANCED_R)

libclassrec.so: $(BASIC) $(ADVANCED_R) 
	$(CC) -shared -o libclassrec.so $(BASIC) $(ADVANCED_R)

libclassloops.so: $(BASIC) $(ADVANCED_L) 
	$(CC) -shared -o libclassloops.so $(BASIC) $(ADVANCED_L)

main.o: main.c NumClass.h
	$(CC)  -c main.c

basicClassification.o: NumClass.h
	$(CC)  -c $(FLAGS) -fPIC basicClassification.c

advancedClassificationLoop.o: NumClass.h
	$(CC)  -c $(FLAGS) -fPIC advancedClassificationLoop.c

advancedClassificationRecursion.o: NumClass.h
	$(CC)  -c $(FLAGS)  -fPIC advancedClassificationRecursion.c

loops: libclassloops.a
recursives: libclassrec.a
recursived: libclassrec.so
loopd: libclassloops.so

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maindloop maindrec 


  