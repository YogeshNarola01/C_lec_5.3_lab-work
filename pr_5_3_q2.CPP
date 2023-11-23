#include<stdio.h>
#include<conio.h>

void main(){
int choice,recharge;
clrscr();
printf("Chuse the number\n\n");
printf("Press 1 for English\n");
printf("Press 2 for Hindi\n");
printf("Press 3 for Gujrati\n\n");
printf("Enter your choice : ");
scanf("%d",&choice);

switch(choice) {
case 1:
      printf("Press 1 Recharge\n");
      printf("Press 2 Top up Recharge\n");
      printf("Press 3 Special Recharge\n\n");
      printf("Enter your choice: ");
      scanf("%d",&recharge);
      switch(recharge){
      case 1:
	     printf("Your recharge is done.");
	     break;
      case 2:
	     printf("Your recharge is done..");
	     break;
      case 3:
	     printf("Your recharge is done...");
	     break;
		     }
case 2:
      printf("recharge ke liye 1 dabaye\n");
      printf("top up ke liye 2 dabaye\n");
      printf("special recharge ke liye 3 dabaie\n\n");
      printf("Enter your choice: ");
      scanf("%d",&recharge);
      switch(recharge){
      case 1:
	     printf("apka recharge ho chuka hai.");
	     break;
      case 2:
	     printf("apka recharge ho chuka hai..");
	     break;
      case 3:
	     printf("apka recharge ho chuka hai...");
	     break;
		     }
case 3:
      printf("recharge mate 1 dabavo\n");
      printf("top up mate 2 dabavo\n");
      printf("special recharge mate 3 dabavo\n\n");
      printf("Enter your choice: ");
      scanf("%d",&recharge);
      switch(recharge){
      case 1:
	     printf("apnu recharge thay gayu chhe.");
	     break;
      case 2:
	     printf("apnu recharge thay gayu chhe..");
	     break;
      case 3:
	     printf("apnu recharge thay gayu chhe...");
	     break;
		     }

	      }
getch();
}