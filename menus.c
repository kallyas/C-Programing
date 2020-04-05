/* Example of Menu Driven program using functions  */

#include<stdio.h>
#include<stdlib.h>
 
/* Prototype */
int ShowMainMenu();
int ShowRhymeMenu();
int ShowRhymeSubMenu();
int ShowFairyMenu();
int ShowFairySubMenu();
 
void PrintZub();
void PrintBigFatGit();
void PrintAliens();
 
void PrintMary();
void PrintJack();
void PrintLittleBoPeep();
 
int main(void)
{
   int 
      nChoice = 0;
 
   do
   {
      nChoice = ShowMainMenu ();
      switch (nChoice)
      {
         case 1:
         {
            ShowRhymeMenu ();            
         }
         break;
 
         case 2: 
         {
            ShowFairyMenu ();
         }
         break;
 
         case 3: 
         {
            printf ("Bye Bye\n\n");
         }
         break;
      }
   }
   while (nChoice != 3);
   system ("Pause");
   return 0;
} 
 
/* ************************************************** ******************* */
 
int ShowMainMenu ()
{
   int 
      nSelected = 0;
 
   do
   {
      printf ("This is a nursery rhyme and fairy stories program\n");
      printf ("You can choose to display a number of different nursery rhymes and fairy stories\n\n");
 
      printf ("(1) Nursery rhymes\n(2) Fairy stories\n(3) Quit\n\n");
 
      printf ("Enter a number that corresponds to your choice > ");
      scanf ("%d", &nSelected);
      printf("\n");
 
      if (( nSelected < 1 ) || ( nSelected > 3))
      {
         printf("You have entered an invalid choice. Please try again\n\n\n");
      }
   }
   while (( nSelected < 1) || ( nSelected > 3));
 
   return nSelected;
}
 
/* ************************************************** ************************** */
int ShowRhymeMenu ()
{   
   int 
      nChoice = 0;   
   do
   {
      nChoice = ShowRhymeSubMenu();
      switch (nChoice)
      {
 
         case 1:
         {
            PrintMary ();
         }
         break;
 
         case 2: 
         {
            PrintJack ();
         }
         break;
 
         case 3: 
         {
            PrintLittleBoPeep ();
         }
         break;
 
         case 4: 
         {
            printf ("Bye Bye\n\n");
         }
         break;
      }
   }
   while (nChoice != 4);
 
   return nChoice;
}
 
/* ************************************************** ******************* */
int ShowRhymeSubMenu() 
{
   int 
      nSelected = 0;
 
   do
   {
 
      printf ("(1) Mary had a little lamb\n(2) Jack and Jill\n(3) Little Bo Peep\n(4) Quit\n\n");
 
      printf ("Enter a number that corresponds to your choice > ");
      scanf ("%d", &nSelected);
      printf("\n");
 
      if (( nSelected < 1 ) || ( nSelected > 4))
      {
         printf("You have entered an invalid choice. Please try again\n\n\n");
      }
   }
   while (( nSelected < 1) || ( nSelected > 4));
 
   return nSelected;
}
 
/* ************************************************** ************************** */
int ShowFairyMenu ()
{
   int 
      nChoice = 0;
 
   do
   {
      nChoice = ShowFairySubMenu ();
      switch (nChoice)
      {
         case 1:
         { 
            PrintZub ();
         }
         break;
 
         case 2:
         { 
            PrintBigFatGit ();
         }
         break;
 
         case 3:          
         {             
            PrintAliens ();
         }
         break;
 
         case 4:
         { 
            printf ("Bye Bye\n\n");
         }
         break;
      }
   }
   while (nChoice != 4);
 
   return nChoice;
}
 
/* ************************************************** ******************* */
int ShowFairySubMenu ()
{
   int 
      nSelected = 0;
 
   do
   {
 
      printf ("(1) The zub zubs\n(2) The BFG\n(3) PrintAliens\n(4) Quit\n\n");
 
      printf ("Enter a number that corresponds to your choice > ");
      scanf ("%d", &nSelected);
      printf("\n");
 
      if (( nSelected < 1 ) || ( nSelected > 4))
      {
         printf("You have entered an invalid choice. Please try again\n\n\n");
      }
   }
   while (( nSelected < 1) || ( nSelected > 4));
 
   return nSelected;
}
 
/* ************************************************** ************************** */
void PrintMary ()
{
   printf("Mary had a little lamb\n fleese white as snow\n\n\n");
}
 
/* ************************************************** ************************** */
void PrintJack ()
{
   printf("Jack and jill went up the hill to fetch water\nThen they fell down\n\n\n");
}
 
/* ************************************************** ************************** */
void PrintLittleBoPeep()
{
   printf("Little bo peep had sheep\nthen they came home\n\n\n");
}
 
/* ************************************************** ************************** */
void PrintZub ()
{
   printf("zub zub zub zub zub zub zub zub\n\n\n");
}
 
/* ************************************************** ************************** */
void PrintBigFatGit ()
{
   printf("im big and fat and a git\n\n\n");
}
/* ************************************************** ************************** */
 
void PrintAliens ()
{
   printf("take us to your leader\n\n\n");
}
 
