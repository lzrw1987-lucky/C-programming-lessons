/*	****************************************************************************
	Project	:	Pointer's in C-program
	Data	:	06.02.2026
	Desript	:	Что такое указатель? Указатель и массив. Указатель как аргумент.
Указатель как возврат функции.
***************************************************************************** */


/*	набор вставляемых файлов: стандартные или пользовательские библиотеки	*/
#include  <stdio.h>
#define		LOGIN_MAX	10
//====================================================================


/*	внешние переменные и объявление функций	*/
void	change (int *pa);		//функция меняет переменные в программе без создания копий.
int		*retu_func ();
int		login_check();			//указатель и массив: на примере проверки массива.
//====================================================================



/*	Основная программа */
void	main(){
	int 	*ptr;			//объявление указателя
	int		var1 = 10;		//определение переменной
	//----------------------------------
	
	//ptr = &var1;
	//printf("Hello! I'm program with pointers. \n");
	//printf("Var1 = %d. *ptr = %d. ptr = %d. \n", var1, *ptr, ptr);
	//printf("Func \"change\". \n");
	//change(&var1);
	//printf("Var1 = %d. *ptr = %d. ptr = %d. \n", var1, *ptr, ptr);
	login_check( );
}
//====================================================================


/* Указатель как аргумент */
void change (int *pa){
	*pa += 25;
}
//====================================================================



/* Проверка логина */
int	login_check(){
	char	master_login[] = "family";			//исходник.
	char	slave_login[LOGIN_MAX];						//получаемый логин.
	int		i=0;
	//----------------------------------
	
	printf("Hello! I'm func \"login_check\". \n");
	printf("Enter login:  ");
	scanf("%s", /* (LOGIN_MAX-1), */ slave_login);	//защитить буфер от переполнения
	
	for(i=0; (slave_login[i])!='\0' && i<LOGIN_MAX; i++){
		if((slave_login[i]) != master_login[i]){
			printf("Login is uncorrect 1. i = %d. Your enter: %s. \n", i, slave_login);
			return 0;
		}
	}
	
	//Проверка на полный логин или переполнение scanf.
	if (master_login[i] != '\0') {
		printf("Login is uncorrect 2. i = %d . Incomplete login. Your enter: %s. \n", i, slave_login);
		return 0;
	}
	else {
		printf("Login correct. I = %d. slave_login = %s. \n", i, slave_login);
		return 1;
	}
}
//====================================================================
