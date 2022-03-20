#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

void bill(char name[], char add[], int o[],char *s[],int p[]);
void main()
{
        system("color 0c");

int i,o[10],p[]={40,80,55,85,95,80,130,30,20,120};
char *s[]={"Chowmein      ","Pizza       ","Manchurian ","Chicken tikka  ","Chicken Kabab","Chilli Chicken","Mutton Kosa","Momoes       ","Samosha      ","Biryani        "};
char name[20],add[20];
char a,b;
for(int i = 1;i<20;i++){
    printf("\033[0;31m");
    printf("\20");
    if(i==19){

            printf("\033[1;33m");
        printf(" Welcome to NITian Restaurants ");
    }
}
for(int i = 1;i<20;i++){
    printf("\033[0;31m");
    printf("\21");
}
printf("\033[1;37m");
printf("\n\tNIT ROAD,NEAR PATNA SCIENCE COLLEGE, 800005\n");
printf("\t\t MOBILE-+91-9508132410\n");
printf("\033[1;34m");
printf("\n\t Enter Your Name:\t ");
gets(name);
printf("\t Enter Your Address:\t");
gets(add);
printf("\033[0;32m");
printf("\n********** DEAR NITian, TODAY WE HAVE SOMETHING SPECIAL FOR YOU **********\n\n");
printf(" \t ITEMS \t\t\t PRICE\n");
for(i=0;i<10;i++)
{
printf("\033[1;33m");
printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
}
printf("\nDear customer, would you like to place an order?(y for yes/ n for no) : ");
printf("\033[1;34m");
scanf("%c",&a);
 if(a=='y'||a=='Y')
 {
 printf("\n\t Your Order ......");
 printf("\n \t Please Select Your Order(Enter Quantity only):\n");

  for(i=0;i<10;i++)
  {
  printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
  scanf("%d",&o[i]);
  }
  printf("\033[1;35m");
 printf("\n\n \t In 10 Minutes, food will be on the Table");
 printf("\n \t Please Wait....!\n");
 printf("\n\n\n\t Want bill, Sir...?(y for yes)\t:\t ");
 scanf(" %c",&b);

  if(b=='y'||b=='Y')
  {
      bill(name,add,o,s,p);
      }
  }
      printf("\033[1;36m");
 printf("\n\n\n\t\t Thank You Sir, Visit Again...!");
 printf("\n\n\"_\"_\"_\"_\"_\"_\"_\"\"_\"_\"_\"_\"_\"_\"_\" CODED BY KUSH \"_\"_\"_\"_\"_\"_\"_\"_\"_\"_\"_\"_\"_\"_\"_\"_\n");
}
 void bill(char name[], char add[], int o[],char *s[],int p[])
      {
          int i,tot=0;
          system("cls");
         for(int i = 1;i<19;i++){
    printf("\033[0;35m");
    printf("\20");
    if(i==18){
    printf("\033[1;31m");
    printf("\3");
    printf("\033[1;33m");
    printf(" Welcome to NITian Restaurants ");
    printf("\033[1;31m");
    printf("\3");
    }
}
for(int i = 1;i<19;i++){
    printf("\033[0;35m");
    printf("\21");
}
    printf("\033[0;36m");
printf("\n\tNIT ROAD,NEAR PATNA SCIENCE COLLEGE, 800005\n");
printf("\t\t MOBILE-+91-9508132410\n");
    printf("\033[0;33m");
 printf("\n\t Customer Name: \t");
 puts(name);
 printf("\t Customer Address: \t");
 puts(add);
     printf("\033[0;37m");
  printf("\n\t Your Today's Bill is.....\n");
  printf(" \t\t\tITEMS       \t\t\t\t TOTAL");
  printf("\n\t____________________________________________________________________");
   for(i=0;i<10;i++)
   {
    if(o[i]!=0)
    {
    printf("\n\t\t    %s    \t(%d X %d)\t\t    %d",s[i],o[i],p[i],o[i]*p[i]);
    }
   }
   printf("\n\t____________________________________________________________________");
    for(i=0;i<10;i++)
    {
    tot=tot+o[i]*p[i];
    }
  printf("\n\t Your Total Billing amount is\t:\t\t\t    %d\n",tot);
}
