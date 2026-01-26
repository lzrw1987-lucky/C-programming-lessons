/*	Project	:	Примеры с работой над типами данных
	Data	:	26.01.2026
	Descript:	В файле несколько функций. Каждая функция решает свою задачу по работе с типами данных.
*/
//====================================================================


//набор вставляемых файлов: стандартные или пользовательские библиотеки
#include  	<stdio.h>
#include	<stdlib.h>		//абсолютная разница между целыми числами.
//====================================================================


//внешние переменные и функции.
void	trading(void);			//элементарные математические задачи на уровне 1го и 2го класса.
void	logic_operation(void);	//логические операции над переменными.
//====================================================================


//заглавная функция
int main () {
	//**********************************
	
	trading( );
	logic_operation( );
	
	printf("\a \n");

	return 0;
}



//мат. задачи на тему торговли для 1го и 2го класса.
void trading ( ){
	int		alex = 100;			//кол-во яблок у Алексея
	int		bob	 = 20;			//кол-во яблок у Боба.
	int		box  = 0;			//ящик для сбора яблок.
	short	diff = 0;			//абсолютная разница в кол-ве собранных яблок
	float	fdiff = 0.0;
	//**********************************
	
	
	printf("Hello! I'm \"trading func\".\n");
	box = alex + bob;		//кол-во яблок, сборанных алекусом и бобом.
	diff= abs(bob-alex);	//абсолютная разница |b-a| между 2мя числами.
	printf("Collected together: alex & box: apple = %d. \n",box);
	printf("Difference in the number: abs = %u. \n", diff);
	bob *= 2.0;
	fdiff = ((float)alex) / bob;
	printf("New fdiff in the number: %.2f. \n", fdiff);
	bob/=2;
	printf("pres_state: %d. \n",(alex/bob));
	printf("\a \n");
}
//====================================================================


//логические операции над переменными.
void	logic_operation( ){
	int		alex = 0x00000001;			//исходное число
	int		bob = 0;
	//**********************************

	printf("Hello! I'm \"logic func\".\n");
	bob = alex << 4;
	printf("pres_state bob: %#x. \n",bob);	// 16 = 1 * 2^4;
	
	alex = 0x0000000a;
	bob  = alex & 0x00000002;
	printf("Bitwise AND:: alex: %#x; bob: %#x. \n", alex, bob);	// 16 = 1 * 2^4;
	
	alex = 0x0000000c;
	bob	 = alex | 0x00000003;
	printf("Bitwise OR:: alex: %#X; bob: %#X. \n", alex, bob);
	
	alex = 0x000000FC;
	bob	 = alex ^ 0x000000D6;
	printf("Bitwise XOR:: alex: %#x; bob: %#x. \n", alex, bob);
	
	alex = 0xF0000000;
	bob  = alex >> 1;
	printf("Right shift: alex = %#x, bob=%#x. \n", alex, bob);
	
	printf("\a \n");
}
//====================================================================