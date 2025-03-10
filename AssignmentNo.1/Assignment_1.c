#include<stdio.h>

struct date{
    int day;
    int month;
    int year;
};
void acceptDatefromconsole();
void printDatefromconsole();


int main(){
    struct date e;
    acceptDatefromconsole(&e);
    printDatefromconsole(&e);

}   

void acceptDatefromconsole(struct date *e)
{
    printf("Enter the date - ");
    scanf("%d",&e->day);
    printf("Enter the month - ");
    scanf("%d",&e->month);
    printf("Enter the year - ");
    scanf("%d",&e->year);
}
void printDatefromconsole(struct date *e )
{
    printf("%d/%d/%d",e->day,e->month,e->year);
}

