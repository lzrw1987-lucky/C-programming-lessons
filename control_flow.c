/*	Project	:	control flow
	Data	:	27.01.2026
	Descript:	Примеры функций, где используются управляющие конструкции.
*/
//====================================================================


//набор вставляемых файлов: стандартные или пользовательские библиотеки
#include  "stdio.h"	
#define		FMIN	1
#define		FMAX	50
#define		MAX_DEPTH	100
//====================================================================


//внешние переменные и функции
void	func_if_else (void);		//работа с функцией "if-else" or "if- else if"
void	func_switch	 (void);
int		put_switch_code(int);		//преобразование значения переменной Х в какую-то константу.
void	filter_char	(void);			//функция сохраняет строку из консоли, фильтруя некоторые символы.
//====================================================================


//заглавная функция
int main () {
	
	//**********************************
	func_if_else();
	func_switch();
	filter_char();
	
	printf("\a \n");

	return 0;
}
//====================================================================


//работа с функцией "if-else" or "if- else if"
void	func_if_else (){
	int		x;
	//**********************************
	
	printf("\n\tHello! I'm if-else. \n");
	printf("Enter number between 1..50. \n");
	scanf("%d", &x);
	if(x < FMIN){
		printf("X minless than 1. \n");
	}
	else if(x > FMAX){
		printf("X maxless than 50. \n");
	}
	else printf("Your are enter X=%2d. \n", x);
	
}
//====================================================================


//switch ... case
void	func_switch (){
	int		x;
	int		i;
	//**********************************
	
	printf("\n\tHello! I'm switch. \n");
	printf("Enter number between 50..100. \n");
	scanf("%d", &x);
	
	switch( put_switch_code(x) ){
		case 1:{//0x65 ... 0xffffffff : {
			printf("X more than 100. X=%d. \n", x);
			break;
		}
		case 2:{//60 ... 70	:{
			printf("X between 60..70. X=%d. \n", x);
			break;
		}
		case 3:{//0 ... 49	:{
			printf("X minless than 50. \n");
			break;
		}
		case 4:{//50 ... 100	:{
			printf("Your are enter X=%2d. Between 50 ... 100. \n", x);
			break;
		}
		default	:{
			printf("Unknown X. \n");
			break;
		}
	}
}


int put_switch_code (int i_x){
	if( i_x > 100) return 1;
	else if(i_x >= 60 && i_x <= 70) return 2;
	else if( i_x < 50) return 3;
	else if( i_x >=50 && i_x <=100) return 4;
	else return 0;
}
//====================================================================


//Фильтрация строки, введёной из консоли.
void  filter_char (){
	char	line [MAX_DEPTH] = {0};
	int		i = 0;
	int		symb = 0;
	//**********************************

	printf("\n\tHello! I'm filter char. \n");	
	while ( i < 7/* (MAX_DEPTH-1) */ ) {
		symb = getchar( );
		if (symb == EOF ) break;			//досрочное прерывание цикла "while"
		else if(symb == '\n' || symb == '\t')continue;
		else if( symb == 'A' || symb == 'a') continue;
		else if( symb == 'B' || symb == 'b') continue;
		else if( symb == '0' || symb == '1') continue;
		else if( symb == '2' || symb == '3') continue;
		else line[i] = symb;
		
		++i;
	}
	printf("The complete while_loop. i=%d \n ", i);	
	line[i] = '\0';
	printf("\nResult_line: %s. \n", line);
}
//====================================================================