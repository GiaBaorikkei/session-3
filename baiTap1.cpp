#include <stdio.h>
int main(){
	// Khai bao va khoi tao bien va nhap r
	float r;
	printf("Ban kinh hinh tron: ");
	scanf("%f",&r);
	// Khai bao va khoi tao PI
	const float PI = 3.14;
	//Chu vi va dien tich hinh tron
	float chuViHinhTron = 2 * PI * r;
	float dienTichHinhTron = PI * r * r;
	// In ra ket qua
	printf("Chu vi hinh tron: %f\n",chuViHinhTron);
	printf("Dien tich hinh tron: %f\n",dienTichHinhTron);
}
