#include <stdio.h>
#include<string.h>

int main()
{
	 char name[50];
int BJP=0,CONG=0,AAP=0,SP=0,BSP=0,NOTA=0;
printf("enter the no. of voters");
int voter;
scanf("%d",&voter);
while(voter>0)
{int exi;
char comp;
printf("press 1 to give vote \n press 2 to exit the machine");
scanf("%d",&exi);
if(exi==2)
{break;
}
else if(exi==1)
{
char male[]="male";
printf("enter your gender please");
char gender[100];
scanf("%s",gender);
comp= strcmp(male,gender);
if(comp==0)
{printf("Mr");
}
else
{
 printf("Miss.");
}
 printf("Enter your name: ");
    scanf("%s", name);
printf("please enter your age");
int age;
scanf("%d",&age);
if(age<18)
{printf("Sorry you are not eligible");
}
else
{int a;
printf("press 1 for BJP \npress 2 for CONG \npress 3 for AAP \npress 4 for SP \npress 5 for BSP");
scanf("%d",&a);



switch(a)
{
case 1:
   { BJP++;
   break;
   
}


case 2:
{CONG++;
break;

}
case 3:
{AAP++;
break;
}
case 4:
{
SP++;
break;

}
case 5:
{BSP++;
break;
}
default:
{NOTA++;
}}

}}
else
{printf("sorry no data found");
}
voter--;
}
 
    
    printf("\n :~WINNER PARTY IS~:  ");
    if (BJP > CONG && BJP > AAP && BJP > SP) {
        printf("(BJP)\n");
    } else if (CONG > BJP && CONG > AAP && CONG > SP) {
        printf("(AAP)\n");
    } else if (AAP > BJP && AAP > CONG && AAP > SP) {
        printf("(CONG)\n");
    } else if (SP > BJP && SP > CONG && SP > AAP) {
        printf("(SP)\n");
    } else {
        printf(" none party is winner ");
    }


return 0;
}

