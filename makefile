files.exe:main.o palindrome.o fibonacci.o
	gcc -o files.exe  main.o palindrome.o fibonacci.o
main.o:main.c
	gcc -c main.c
palindrome.o:palindrome.c
	gcc -c palindrome.c
fibonacci.o:fibonacci.c
	gcc -c fibonacci.c
