#include <stdio.h>
int main(){
	int namHienTai=2023;
	int namSinh;
	printf("Nhap nam sinh: ");
	scanf("%d\n",&namSinh);
	int tuoiHienTai=namHienTai-namSinh;
	printf("Tuoi hien tai: %d\n",tuoiHienTai);
	(tuoiHienTai % 2 ==0 ) ? printf("Tuoi la so:%s\n","chan") : printf("Tuoi la so:%s\n", "le");
	}
