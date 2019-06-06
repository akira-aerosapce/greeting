#include <stdio.h>
#include <time.h>

int main(void){
    time_t timer;        /* Type for aquisition of time（Actually it's unsigned long） */
    struct tm *local;    /* tm structure which handles time */
 
    /* Hold name and hour */
    int hour;
    char name[999];
     
    timer = time(NULL);        /* get time */
    local = localtime(&timer);    /* convert to localtime */
 
    /* assign hour from tm structure */
    hour = local->tm_hour;
    printf("What's your name?:");
    scanf("%s", name);
    /* Coose a greeting message and print it. */
    if (5 <= hour && hour < 12){
        printf("Good morning");
    }else if(12 <= hour && hour < 18){
        printf("Good afternoon");
    }else{
        printf("Good night");
    }
    printf(", %s!\n",name);
    //printf("Hour: %d\n", hour);
     
    return 0;
}