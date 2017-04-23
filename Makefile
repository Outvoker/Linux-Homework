main:main.o Random.o GetLevel.o
	gcc main.o Random.o GetLevel.o -o main
main.o:main.c
	gcc -c main.c
Random.o:Random.c
	gcc -c Random.c
GetLevel.o:GetLevel.c
	gcc -c GetLevel.c
clean:
	rm main *.o
