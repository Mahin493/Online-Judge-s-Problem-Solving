#include <stdio.h>
int main() {
	int amt, total;
	printf("Input Total amount: ");
	scanf("%d",&amt);
    int count=0;
    int temp=amt;
	total = (int)amt/25;




  printf("25 cents --- %d \n", total);
   count+=total;
	amt = amt-(total*25);

	total = (int)amt/10;

	printf("10 cents --- %d \n", total);
   count+=total;
	amt = amt-(total*10);


	total = (int)amt/5;

	printf("5 cents --- %d\n", total);
   count+=total;
	amt = amt-(total*5);



	total = (int)amt/1;

	printf("1 cents --- %d\n", total);
   count+=total;


   printf("Total %d coins",count);


	return 0;
}
