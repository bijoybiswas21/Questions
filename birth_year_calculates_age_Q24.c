#include<stdio.h>
int main(){
    int age,currentyear,birhtyear;
    printf("Enter Your birth year:- ");
    scanf("%d",&birhtyear);
    printf("Enter Your current year:- ");
    scanf("%d",&currentyear);
    age=currentyear-birhtyear;
    printf("you are %d years,that's a great age.",age);
    return 0;

}