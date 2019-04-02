a.out: 21500771.o 21700431.o main.o
	gcc -o a.out 21500771.o 21700431.o main.o

21500771.o: 21500771.c
	gcc -c -o 21500771.o 21500771.c

21700431.o: 21700431.c
	gcc -c -o 21700431.o 21700431.c

main.o: main.c
	gcc -c -o main.o main.c

clean:
	rm a.out 21500771.o 21700431.o main.o
