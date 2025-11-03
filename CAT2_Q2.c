/*
Name:Ronix otieno
Registration number:PA106/G/28800/25
Description:program to calculate gross pay and taxes
*/
#include <stdio.h>
int main()
{
	float hoursworked,hourlywage,grosspay,tax,netpay;
	printf("Enter hours worked in a week:");
	scanf("%f",&hoursworked);
	printf("Enter hourly wage:");
	scanf("%f",&hourlywage);
	if(hoursworked>40){
		float regularPay=40*hourlywage;
		float overtimePay=(hoursworked-40)*(1.5*hourlywage);
		grosspay=regularPay+overtimePay;
	}else{
		grosspay=hoursworked*hourlywage;
	}
	if(grosspay<=600){
		tax=0.15*grosspay;
	}else{
		tax=(0.15*600)+(0.20*(grosspay-600));
	}
	netpay=grosspay-tax;

	printf("Hours worked:%.2f\n",hoursworked);
	printf("Hourly wage:$%.2f\n",hourlywage);
	printf("Gross pay:$.2f\n",grosspay);
	printf("Net pay:$.2f\n",netpay);
	printf(".............\n");
	return 0;
}