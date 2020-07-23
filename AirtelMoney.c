#include <curses.h> //#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
  int choice = 0, MobileNumber = 0, Ammount = 0;

  while (1) {
    printf("\t\tWelcome To Airtel Mobile Money\n");
    printf("\t\t1. Send Money\n");
    printf("\t\t2. Airtime/Bundles\n");
    printf("\t\t3. Withdraw cash\n");
    printf("\t\t4. Pay Bills\n");
    printf("\t\t5. Payements\n");
    printf("\t\t6. School fees\n");
    printf("\t\t7. Financial Services\n");
    printf("\t\t8. Wewole\n");
    printf("\t\t9. Airtel Money Pay\n");
    printf("\t\t10. My Account\n");
    printf("\t\t11. Exit\n");
    printf("\t\tEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      while (2) {
        // system("clear"); //clears screen
        printf("\n\t\tsend Money\n");
        printf("\t\t1. Airtel and Other Number\n");
        printf("\t\t2. MTN Number\n");
        printf("\t\t3. UTL Number\n");
        printf("\t\t4. International Transfer\n");
        printf("\t\tEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
          // system("clear");
          printf("\n\t\tEnter Airtel Mobile Number: ");
          scanf("%d", &MobileNumber);
          printf("\t\tEnter Ammount: ");
          scanf("%d", &Ammount);
          printf("\t\tYou Have successfuly sent %d shs to %d\n\n\n ", Ammount,
                 MobileNumber);
          // system("PAUSE");
          break;

        case 2:
          // system("clear");
          printf("\n\t\tEnter MTN Mobile Number: ");
          scanf("%d", &MobileNumber);
          printf("\t\tEnter Ammount: ");
          scanf("%d", &Ammount);
          printf("\t\tYou Have successfuly sent %d shs to %d\n\n\n ", Ammount,
                 MobileNumber);
          break;
        case 3:
          // system("clear");
          printf("\t\tEnter UTL Mobile Number: ");
          scanf("%d", &MobileNumber);
          printf("\t\tEnter Ammount: ");
          scanf("%d", &Ammount);
          printf("\t\tYou Have successfuly sent %d shs to %d\n\n\n ", Ammount,
                 MobileNumber);
          break;
        case 4:
          while (3) {
            printf("\n\t\t1. Rwanda\n");
            printf("\t\t2. Zambia\n");
            printf("\t\t3. Tanzania\n");
            printf("\t\t4. Malawi\n");
            printf("\t\t5. Burundi\n");
            printf("\t\t6. Zimbabwe\n");
            printf("\t\t7. Exit\n");
            printf("\t\tEnter choice :");
            scanf("%d", &choice);

            switch (choice) {
            case 1:
              while (4) {
                printf("\t\t1. Airtel\n");
                printf("\t\t2. Exit\n");
                printf("\t\tEnter choice: ");
                scanf("%d", &choice);

                switch (choice) {
                case 1:
                  printf("\t\tEnter Rwanda Airtel Number: ");
                  scanf("%d", &MobileNumber);
                  printf("\t\tEnter Ammount: ");
                  scanf("%d", &Ammount);
                  printf("\t\tYou have successfuly sent %d Rwanda francs to "
                         "%d\n\n",
                         Ammount, MobileNumber);
                  break;

                case 2:
                  exit(0);
                  break;

                default:
                  printf("\t\tInavalid choice! Please try again!\n\n");
                  break;
                }
              }
              break;
            case 2:
              while (5) {
                printf("\t\t1. Airtel\n");
                printf("\t\t2. Exit\n");
                printf("\t\tEnter choice: ");
                scanf("%d", &choice);

                switch (choice) {
                case 1:
                  printf("\t\tEnter Zambia Airtel Number: ");
                  scanf("%d", &MobileNumber);
                  printf("\t\tEnter Ammount: ");
                  scanf("%d", &Ammount);
                  printf(
                      "\t\tYou have successfuly sent %d Zambia shs to %d\n\n",
                      Ammount, MobileNumber);
                  break;

                case 2:
                  exit(0);
                  break;

                default:
                  printf("\t\tInavalid choice! Please try again!\n\n");
                  break;
                }

                break;
              case 3:
                while (6) {
                  printf("\t\t1. Airtel\n");
                  printf("\t\t2. Exit\n");
                  printf("\t\tEnter choice: ");
                  scanf("%d", &choice);

                  switch (choice) {
                  case 1:
                    printf("\t\tEnter Tanzania Airtel Number: ");
                    scanf("%d", &MobileNumber);
                    printf("\t\tEnter Ammount: ");
                    scanf("%d", &Ammount);
                    printf("\t\tYou have successfuly sent %d Tanzania shs to "
                           "%d\n\n",
                           Ammount, MobileNumber);
                    break;

                  case 2:
                    exit(0);
                    break;

                  default:
                    printf("\t\tInavalid choice! Please try again!\n\n");
                    break;
                  }
                }

                break;
              case 4:
                while (7) {
                  printf("\t\t1. Airtel\n");
                  printf("\t\t2. Exit\n");
                  printf("\t\tEnter choice: ");
                  scanf("%d", &choice);

                  switch (choice) {
                  case 1:
                    printf("\n\t\tEnter Malawi Airtel Number: ");
                    scanf("%d", &MobileNumber);
                    printf("\t\tEnter Ammount: ");
                    scanf("%d", &Ammount);
                    printf(
                        "\t\tYou have successfuly sent %d Malawi shs to %d\n\n",
                        Ammount, MobileNumber);
                    break;

                  case 2:
                    exit(0);
                    break;

                  default:
                    printf("\t\tInavalid choice! Please try again!\n\n");
                    break;
                  }
                }
                break;
              case 5:
                while (8) {
                  printf("\t\t1. Airtel\n");
                  printf("\t\t2. Exit\n");
                  printf("\t\tEnter choice: ");
                  scanf("%d", &choice);

                  switch (choice) {
                  case 1:
                    printf("\t\tEnter Burundi Airtel Number: ");
                    scanf("%d", &MobileNumber);
                    printf("\t\tEnter Ammount: ");
                    scanf("%d", &Ammount);
                    printf("\t\tYou have successfuly sent %d Burundi francs to "
                           "%d\n\n",
                           Ammount, MobileNumber);
                    break;

                  case 2:
                    exit(0);
                    break;

                  default:
                    printf("\t\tInavalid choice! Please try again!\n\n");
                    break;
                  }
                }
                break;
              case 6:
                while (9) {
                  printf("\t\t1. Airtel\n");
                  printf("\t\t2. Exit\n");
                  printf("\t\tEnter choice: ");
                  scanf("%d", &choice);

                  switch (choice) {
                  case 1:
                    printf("\t\tEnter Zimbabwe Airtel Number: ");
                    scanf("%d", &MobileNumber);
                    printf("\t\tEnter Ammount: ");
                    scanf("%d", &Ammount);
                    printf("\t\tYou have successfuly sent %d Zimbabwe Dollars "
                           "to %d\n\n",
                           Ammount, MobileNumber);
                    break;

                  case 2:
                    exit(0);
                    break;

                  default:
                    printf("\t\tInavalid choice! Please try again!\n\n");
                    break;
                  }
                }
                break;
              case 7:
                exit(0);
                //   goto :
                //     while(1);
                break;
              default:
                printf("\t\tInavalid choice!, please try again!!\n\n");
                break;
              }
            }

          default:
            printf("\n\t\tInvalid choice, please try again!\n\n\n");
            break;
          }
        }
        break;
      case 2:
        printf("\n\t\tAirtime/Bundles\n\n");
        while (10) {
          printf("\t\t1. Buy Airtime\n");
          printf("\t\t2. Buy Data Bundles\n");
          printf("\t\t3. Buy Voice Bundles\n");
          printf("\t\t4. IControl\n");
          printf("\t\t5. OTT Service Tax\n");
          printf("\t\t6. Exit\n");
          printf("\t\tEnter choice: ");
          scanf("%d", &choice);

          switch (choice) {
          case 1:
            printf("\n\t\tBuy Airtime\n\n");
            printf("\t\t1. For MySelt\n");
            printf("\t\t2. For Another Number\n");
            printf("\t\t3. Exit\n");
            printf("\t\tEnter choice: ");
            scanf("%d", &choice);

            switch (choice) {
            case 1:
              printf("\t\tEnter Ammount: ");
              scanf("%d", &Ammount);
              printf("\t\tYou have successfuly topped up %d shs on your "
                     "Number\n\n",
                     Ammount);
              break;

            case 2:
              printf("\t\tEnter other Number: ");
              scanf("%d", &MobileNumber);
              printf("\t\tEnter Ammount: ");
              scanf("%d", &Ammount);
              printf("\t\tYou have successfuly topped up %d shs for %d\n\n",
                     Ammount, MobileNumber);
              break;

            default:
              printf("\t\tInvalid choice Input! Please Try again!!\n\n");
              break;
            }
            break;
          case 2:

            break;
          case 3:

            break;
          case 4:

            break;
          case 5:

            break;
          case 6:
            exit(0);
            break;

            break;
          default:
            printf("\t\tInvalid choice Input! Please Try again!!\n\n");
            break;
          }
        }
        break;
      case 3:
        printf("You selected Withdraw cash\n");
        break;
      case 4:
        printf("You selected Pay Bills\n");
        break;
      case 5:
        printf("You selected Payements\n");
        break;
      case 6:
        printf("You selected School fees\n");
        break;
      case 7:
        printf("You selected Financial Services\n");
        break;
      case 8:
        printf("You selected  Wewole\n");
        break;
      case 9:
        printf("You selected Airtel Money Pay\n");
        break;
      case 10:
        printf("You selected My Account\n");
        break;
      case 11:
        printf("Thank you for using Airtel Money!\n");
        printf("Bye!!");
        exit(0);
      }
    }

    return 0;
  }
}
