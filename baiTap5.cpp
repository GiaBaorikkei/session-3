#include <stdio.h>
int main(){
	int thousandDigit, hundredDigit, dozenDigit, unitDigit;
	printf("nhap vao so nguyen co 4 chu so: ");
	scanf("%d%d%d%d", &thousandDigit, &hundredDigit, &dozenDigit, &unitDigit);
	int sum = thousandDigit+hundredDigit+dozenDigit+unitDigit;
	printf("Tong cac chu so: %d\n", sum);
	printf("So ngich dao:%d%d%d%d",unitDigit,dozenDigit,hundredDigit,thousandDigit);
}
