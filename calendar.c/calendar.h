#ifndef CALENDAR_H_INCLUDED
#define CALENDAR_H_INCLUDED
struct date{
int dd;
int mm;
int yyyy;
}d;
enum days{Sunday=1,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
struct notes{
int dd;
int mm;
int yyyy;
char note[100];
}mynote;
enum days*getName(enum days dayNo);
void print_date(struct date d);
char *getDay( struct date d);
int checkNote( struct date d);
void printMonth(int mon,int year);
void AddNote( struct notes* note);
void showNote(struct notes mynote,int dd,int mm ,int yyyy);
void increase_month(int *mm, int *yyyy);
void decrease_month(int *mm, int *yyyy);
int check_leapYear(int year);
int getNumberOfDays(int month,int year);

#endif // CALENDAR_H_INCLUDED

