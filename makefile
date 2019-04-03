exefile : 21600671.o 21300187.o main.o
        gcc -o a.out 21600671.o 21300187.o main.o
21600671.o : 21600671.c
        gcc -c -o 21600671.o 21600671.c
21300187.o : 21300187.c
        gcc -c -o 21300187.o 21300187.c
main.o : main.c
        gcc -c -o main.o main.c
clean:
        rm *.o a.out

