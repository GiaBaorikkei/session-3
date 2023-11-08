#include <stdio.h>
int main(){
	float diemToan;
	float diemAnh;
	float diemVan;
	printf("Nhap vao diem toan van anh: ");
	scanf("%f, %f, %f", &diemToan, &diemVan, &diemAnh);
	float sum = diemToan + diemVan + diemAnh;
	printf("Tong cac mon:%f\n",sum);
	float average = (diemToan + diemVan + diemAnh)/3;
	printf("Trung binh cac mon hoc:%f",average);
}
