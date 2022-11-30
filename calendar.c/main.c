#include <stdio.h>
#include <stdlib.h>
#include "calendar.c"

int main(){

    printf("Calender Project\n");
    int choice;
    char ch = 'a';
    while(1){
            ch = 'a';
        printf("1: Enter the day\n");
        printf("2: Print days of the month\n");
        printf("3: Add Note\n");
        printf("4: Show Note\n");
        printf("5: EXIT\n");
        printf("Enter number: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Enter date (Day Month Year) : ");
                scanf("%d %d %d",&d.dd,&d.mm,&d.yyyy);
                printf("Day is : %c",getDay(d));
                printf("\nPress any key to continue......");
                break;
            case 2 :
                printf("Enter month and year (Month Year) : ");
                scanf("%d %d",&d.mm,&d.yyyy);
                printMonth(d.mm,d.yyyy);
                while(ch!='q'){
                scanf("%c",&ch);
                    if(ch == 'n'){
                        increase_month(&d.mm,&d.yyyy);

                        printMonth(d.mm,d.yyyy);
                    }else if(ch == 'p'){
                        decrease_month(&d.mm,&d.yyyy);

                        printMonth(d.mm,d.yyyy);
                    }
                }
                break;
            case 3:
                AddNote(&mynote);
                break;
            case 4:
                printf("Enter date (Day Month Year) : ");
                scanf("%d %d %d",&d.dd,&d.mm,&d.yyyy);
                showNote(mynote,d.dd,d.mm,d.yyyy);
            case 5 :
                exit(0);
        }
    }
    return 0;
}

