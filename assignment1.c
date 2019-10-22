#include<stdio.h>
int main()
{
char choice;
printf("Time table\n");
printf("1.Monday\n");
printf("2.Tuesday\n");
printf("3.Wednesday\n");
printf("4.Thursday\n");
printf("5.Friday\n");
printf("6.Saturday\n");
printf("7.Sunday\n");
printf("enter choice\n");

scanf("%c", &choice);

if(choice=='1')
{
printf("you have class ICT\n");

}
else if(choice=='2')
{
printf("you have class basic programing\n");

}
else if(choice=='3')
{
printf("you have class of Applied physics\n");

}
else if(choice=='4')
{
printf("today you have class of English\n");

}
else if(choice=='5')
{
printf("today you have class of calculus\n");

}
else if(choice=='6')
{
printf("it is off today\n");

}
else if(choice=='7')

{
printf("it is off today\n");

}
   return 0;
}
