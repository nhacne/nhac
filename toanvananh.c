#include <stdio.h>
 
int main () {
	//Gan kieu gia tri cho t,v,a
	float t,v,a;
	printf("Nhap lan luot gia tri toan van anh :");
	// Nhap gia tri cho t,v,a
	scanf ("%f%f%f",&t,&v,&a);
	// Dieu kien mien gia tri tu 0 - 10
	if (0 <= t,v,a <= 10) {
	// Tong SUM voi toan van nhan doi + anh		
		float SUM = t*2 + v*2 + a;
	if (SUM >= 40) {
		printf("PASS");
	} else {
		printf("FAIL");
	}
	}
}

