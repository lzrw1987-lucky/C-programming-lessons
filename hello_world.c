//арифметические действия над целочисленными переменными.
//простая функция.
//====================================================================

//набор вставляемых файлов: стандартные или пользовательские библиотеки
#include  "stdio.h"	

//заглавная функция
int main () {
	int		min_fahr = 0;
	int		max_fahr = 300;
	int		step = 20;
	int		celcius = 0;

	
	printf("char:  	%zu byte \n", sizeof(char) );
	printf("short: 	%zu byte \n", sizeof(short) );
	printf("int: 	%zu byte \n", sizeof(int) );
	printf("long: 	%zu byte \n", sizeof(long) );
	printf("long long: 	%zu byte \n", sizeof(long long) );
	printf("-------------------------------------\n");
	printf("|    Farenheit     |     Celcius    |\n");
	printf("-------------------------------------\n");
	while( min_fahr <= max_fahr){
		celcius = 5 * (min_fahr - 32) / 9;
		printf("\t%-4d\t\t %-4d \n", min_fahr, celcius);
		min_fahr += step;
	}
		
	printf("\a \n");

	return 0;
}
