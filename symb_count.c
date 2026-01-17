/*	Project	:	working with symbols
	StartDate:	17.01.2026
	Desription:	Из консоли посимвольно вводятся данные.
	Проверяются  механизмы ввода символов, их подсчёта, а также подсчёта строк и слов.
*/
//====================================================================


/*	набор вставляемых файлов: стандартные или пользовательские библиотеки	*/
#include  "stdio.h"	
#include  <string.h>
#define		IN			1	// внутри слова
#define		OUT			0	// снаружи слова
//====================================================================


/*	внешние переменные и объявление функций	*/
//====================================================================


/*	заглавная функция	*/
void main () {
	int		symb_cnt = 0;			//счётчик введённых символов.
	int		line_cnt = 0;
	int		word_cnt = 0;
	int		symb_temp = 0;
	int		state = 0;
	//**********************************
	
	
	state = OUT;
	while((symb_temp = getchar()) != EOF){
		++symb_cnt;
		if(symb_temp == '\n')
			++line_cnt;
		if(symb_temp == ' ' || symb_temp == '\n' || symb_temp == '\t'){
			state = OUT;
		}
		else if(state == OUT){
			state = IN;
			++word_cnt;
		}
	}
		
	
	printf("Symbol_num = %d;\t Line_num = %d;\t Word_num = %d.\n",symb_cnt, line_cnt, word_cnt);
	printf("\a \n");

}
//====================================================================