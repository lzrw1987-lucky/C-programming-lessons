//Объявление переменных.
//вывод целочисленных переменных с разными спецификаторами.
//====================================================================

//набор вставляемых файлов: стандартные или пользовательские библиотеки
#include  "stdio.h"	

//заглавная функция
int main () {
	int		a1 = 0;
	short	b1 = 0;
	long	c1 = 0;
	
	c1 = 0xffffffff;
	a1 = c1;
	b1 = a1;
	
	printf("hello, world! \n");
	printf("a1_dec = %-16d,\t a1_int = %-16i,\t a1_unsig = %-16u,\t a1_hex = %-x  \n",a1, a1, a1, a1); //выравнивание по левому краю
	printf("b1_dec = %-16d,\t b1_int = %-16i,\t b1_unsig = %-16u,\t b1_hex = %-x  \n",b1, b1, b1, b1); 
	printf("c1_dec = %-16d,\t c1_int = %-16i,\t c1_unsig = %-16u,\t c1_hex = %-x  \n",c1, c1, c1, c1); 
	
	printf("char:  	%zu byte \n", sizeof(char) );
	printf("short: 	%zu byte \n", sizeof(short) );
	printf("int: 	%zu byte \n", sizeof(int) );
	printf("long: 	%zu byte \n", sizeof(long) );
	printf("long long: 	%zu byte \n", sizeof(long long) );
	printf("\a \n");

	return 0;
}
