Every C program is a collection of instructions and every instruction is a collection of some individual units. 
Every smallest individual unit of a c program is called token. Every instruction in a c program is a collection of tokens. 
Tokens are used to construct c programs and they are said to the basic building blocks of a c program.

In a c program tokens may contain the following...
- Keywords
- Identifiers
- Operators
- Special Symbols
- Constants
- Strings
- Data values

>In a C program, a collection of all the keywords, identifiers, operators, special symbols, constants, strings, and data values are called tokens.

considering the following program
```c
#include<stdio.h>
#include<conio.h>
int main() {
	int i;
        clrscr();
	printf("ASCII  ==>  Character\n");
	for(i = -128; i <= 127; i++)
	   printf("%d    ==>     %c\n", i, i);
        getch();
	return 0;
}
```
In the above program there are 22 tokens.