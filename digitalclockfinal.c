#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()

{
    printf("\t \t \t \t WELCOME TO OUR DIGITAL CLOCK\n");
    
    int hour,minute,second;
    jump:
    printf("Enter the current time. \n");
    printf("Enter the hours: \n");
    scanf("%d",&hour);
    printf("Enter the minutes: \n");
    scanf("%d",&minute);
    printf("Enter the seconds: \n");
    scanf("%d",&second);
    if(hour>=24||minute>59||second>59){
        printf("The time you have entered is wrong.....Please try again.\n");
   goto jump;
    }
    if(hour<=24||minute<59||second<59)
    while(4<5){
        system("cls");
           second++;
        if(second>59){
           second=0;
           minute++;
        }
        if(minute>59){
            minute=0;
            hour++;
        }
        if(hour>=24){
            hour=0;
        }
        printf("\n%dhr :%dm :%ds \n",hour,minute,second);
        sleep(1);
        
    }
    return 0;
}