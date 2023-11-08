#include <stdio.h>
int main(){
	int number1;
	int number2;
	int number3;
	printf("Nhap gia tri 3 so nguyen: ");
	scanf("%d, %d, %d",&number1, &number2, &number3);
	int max = number1;
	int min = number2;
	max=(max<number2)?number2:max;
	max=(max<number3)?number3:max;
	min=(min>number2)?number2:min;
	min=(min>number3)?number3:min;
	printf("Gia tri lon nhat la: %d\n", max);
	printf("Gia tri be nhat la: %d\n", min);
}
