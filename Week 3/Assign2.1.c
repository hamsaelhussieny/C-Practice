#include <stdio.h>
#include <string.h>

struct date {
	char day[40];
	char month[30];
	char year[100];
};

void compare_date(struct date d[2]){
	int x = strcmp(d[0].day,d[1].day);
	int y = strcmp(d[0].month,d[1].month);
	int z = strcmp(d[0].year,d[1].year);
	int result=x+y+z;
	if (result==0){
		printf("Dates are equal");
	}
	else{
		printf("Dates are Not equal");	
	}
}


int main(){
	
	struct date d[2];
	printf("Enter day of the first date\n");
	scanf("%s",&d[0].day);
	printf("Enter month of the first date\n");
	scanf("%s",&d[0].month);
	printf("Enter year of the first date\n");
	scanf("%s ",&d[0].year);
	printf("Enter day of the second date\n");
	scanf("%s",&d[1].day);
	printf("Enter month of the second date\n");
	scanf("%s",&d[1].month);
	printf("Enter year of the second date\n");
	scanf("%s",&d[1].year);
	compare_date(d);
	
}
