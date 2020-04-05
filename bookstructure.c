/*
using structures in C 
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

struct Books {
  char title[50];
  char Author[50];
  char Subject[100];
  int bookId;
};

//function declaration
void printBook( struct Books Book);

int main()
{
    // declare book one and two of datatype Books
    struct Books Book1, Book2;
    
    //Book1 specifications
    strcpy(Book1.title, "C Programing");
    strcpy(Book1.Author, "Nuha Ali");
    strcpy(Book1.Subject, "C Programing Tutorial");
    Book1.bookId = floor(rand());  //generating random Id
    
    // printf("%d",Book1.bookId);
    // Book2 specifications
    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.Author, "Kallyas Media");
    strcpy(Book2.Subject, "Telecom Billing Tutorial");
    Book2.bookId = floor(rand());
    
   /* print Book1 info */
   /*printf( "Book 1 title : %s\n", Book1.title);
   printf( "Book 1 author : %s\n", Book1.Author);
   printf( "Book 1 subject : %s\n", Book1.Subject);
   printf( "Book 1 bookId : %d\n", Book1.bookId);*/

   /* print Book2 info */
  /* printf( "Book 2 title : %s\n", Book2.title);
   printf( "Book 2 Author : %s\n", Book2.Author);
   printf( "Book 2 subject : %s\n", Book2.Subject);
   printf( "Book 2 bookId : %d\n", Book2.bookId);*/
   
   /*Short Method*/
//   print Book 1
    printBook(Book1);
    
    // print Book Book2
    printBook(Book2);
    
    return 0;
}

void printBook( struct Books Book) {
   printf( "Book  title : %s\n", Book.title);
   printf( "Book  author : %s\n", Book.Author);
   printf( "Book  subject : %s\n", Book.Subject);
   printf( "Book  bookId : %d\n", Book.bookId);
}

