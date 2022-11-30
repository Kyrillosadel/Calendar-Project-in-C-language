#include "calendar.h"

enum days*getName(enum days dayNo){
        switch(dayNo){
    case 1:printf("Sunday");
    break;
    case 2:printf("Monday");
    break;
    case 3:printf("Tuesday");
    break;
    case 4:printf("Wednesday");
    break;
    case 5:printf("Thursday");
    break;
    case 6:printf("Friday");
    break;
    case 7:printf("Saturday");
    break;

        }

}
void print_date(struct date d){
printf("--------------------------------------------------------------------\n");
    switch(d.mm){
    case 1:printf("\t\tJanuary\t\t");
    break;
    case 2:printf("\t\tFebruary\t\t");
    break;
    case 3:printf("\t\tMarch\t\t");
    break;
    case 4:printf("\t\tApril\t\t");
    break;
    case 5:printf("\t\tMay\t\t");
    break;
    case 6:printf("\t\tJune\t\t");
    break;
    case 7:printf("\t\tJuly\t\t");
    break;
    case 8:printf("\t\tAugust\t\t");
    break;
    case 9:printf("\t\tSeptember\t\t");
    break;
    case 10:printf("\t\tOctober\t\t");
    break;
    case 11:printf("\t\tNovember\t\t");
    break;
    case 12:printf("\t\tDecember\t\t");
    break;
        }
printf("%d\n",d.yyyy);
printf("--------------------------------------------------------------------\n");
}
char *getDay( struct date d){
    int day;
    if(!(d.mm>=1 && d.mm<=12)){
    if(!(d.yyyy>=1900)){
    if(!(d.dd>=1 && d.dd<=getNumberOfDays(d.mm,d.yyyy))){
        return("Invalid day and month and year value");
    }
    }
    }
    if(d.mm>=1 && d.mm<=12){
    if(d.dd>=1 && d.dd<=getNumberOfDays(d.mm,d.yyyy)){
    if(d.yyyy>=1900){
        day = day%7;
        return(getName(day));
    }else{
        return("Please give year more than 1900");
    }
    }
    }
}

int checkNote( struct date d){
     if(mynote.note==NULL){
        printf("note not found");

     }
     else{
       printf("note found in this date");
       return 1;
     }
return 0;
}
void printMonth(int mon,int year){
    int i;
    int x;
    int y;

    if( mon<1 && mon>12){
        printf("INVALID MONTH");
        return;
    }
    if(year<1900){
        printf("INVALID YEAR");
        return;
    }
   print_date(d);
printf("\tS\tM\tT\tW\tT\tF\tS\n");
int g= getNumberOfDays(mon,year);
for(i=1;i<=g;i++){
        if(i%7==0){
                printf("\n");
            }
            printf("\t%d",i);
}


printf("\nRed Background indicates the NOTE,Press's'to see note:\n ");
printf("Press 'n' to Next, Press 'p' to Previous and 'q' to Quit\n");
}
void AddNote( struct notes* mynote){
    printf("Enter date (Day Month Year) : ");
    scanf("%d %d %d",&d.dd,&d.mm,&d.yyyy);
    if(d.mm >=1 && d.mm<=12){
       if(d.yyyy>=1900){
    mynote->dd = d.dd;
    mynote->mm = d.mm;
    mynote->yyyy = d.yyyy;
    printf("please enter the note\n");
    scanf("%s",mynote->note);
    printf("it is saved successfully\n\n");
}
}
}
void showNote(struct notes mynote,int dd, int mm ,int yyyy){
    if((dd!=d.dd) && (mm!=d.mm) && (yyyy!=d.yyyy)){
        printf("there is no note on this day");
    }else{
    printf("%s",mynote.note);
    }

}
void increase_month(int *mm, int *yyyy){
++*mm;
if(*mm == 12){
    *mm = 1;
}
if(*mm>12){
    ++*yyyy;
    *mm=*mm-12;
}

}
void decrease_month(int *mm, int *yyyy){
--*mm;
if(*mm == 0){
        *mm = 12;
        --*yyyy;
    if(*yyyy<1900){
     printf("no data");
    }
}

}
int check_leapYear(int year){
if(year % 400 == 0 || (year % 100!=0 && year % 4 ==0)){
  return 0;
}else{
    return 1;
}

}
int getNumberOfDays(int month,int year){
switch(month){                          //and year
      case 1 : return 31;
      case 2 : if(check_leapYear(year)==1)
		 return 29;
	       else
		 return 28;
      case 3 : return 31;
      case 4 : return 30;
      case 5 : return 31;
      case 6 : return 30;
      case 7 : return 31;
      case 8 : return 31;
      case 9 : return 30;
      case 10: return 31;
      case 11: return 30;
      case 12: return 31;

}
}
