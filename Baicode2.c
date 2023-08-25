// 
//Created by Dang Kim Thi on 5/17/23.
//
#include <stdio.h>

//int sizeof_demo()
int main () 
{
		float r,c,s;
		printf("Ban kinh hinh tron la r = ");
		scanf("%f",&r);
		c = 6.28 * r; // 2*pi*r
		s = 3.14 *r*r; // pi*  r binh phuong
		printf("\n");
		printf("Ket qua tinh chu vi va dien tich hinh tron: \n");
		printf("=============================== \n");
		printf("Ban kinh hinh tron:			r = %8.1f met \n",r);
		printf("Chu vi hinh tron:			c = %8.2f met \n",c);
		printf("Dien tich hinh tron:			s = %8.2f met vuong \n",s);
		printf("=============================== \n\n");
		//============ vi du 2 ============
		printf("Data Type		| Size of byte \n");
		printf("int				| %d byte \n",sizeof(int));
		printf("float			| %d byte \n",sizeof(float));
		printf("unsigned int	| %d byte \n",sizeof(unsigned int));
		printf("short int		| %d byte \n",sizeof(short int));
		printf("long int		| %d byte \n",sizeof(long int));
		
		return 1;
}

