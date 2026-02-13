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
void	defin_func ( );			//объявить указатель и переменную. вывести результаты работы на ними.
void	arg_func (int *pa);		//указатель как аргумент функции. Т.е. функция меняет переменные в программе без создания копий.
void	array_func();			//указатель и массив.
int		*retu_func ();
//====================================================================



/*	Основная программа */
void	main(){
	int 	*ptr = NULL;	//объявление указателя
	int		var1 = 10;		//определение переменной
	//----------------------------------
	
	
	printf("Hello! This is pointer branch. \n");
	defin_func ();
	arg_func(&var1);
	printf("Data_var1 = %d. address_var = %p. \n", var1, &var1);
	array_func( );
	
	printf("\a");
}
//====================================================================


/* указатель - переменная, которая хранит адрес другого объекта в ОЗУ */
void defin_func(){
	int		var0;
	int		var1;
	int		*ptr;			//объявление указателя
	//----------------------------------

	printf("\n    This is \"define_func\" \n");
	var0 = 10;
	var1 = 20;
	ptr  = &var0;
	printf("Data_var0 = %d. data_ptr = %#x. data2_ptr = %p. deref_ptr = %d. \n", var0, ptr, ptr, *ptr);
	*ptr += 34;
	printf("New value for var0. Data_var0 = %d. data_ptr = %#x. data2_ptr = %p. deref_ptr = %d. \n", var0, ptr, ptr, *ptr);
	ptr  = &var1;
	printf("New value for ptr. data_ptr = %#x. deref_ptr = %d.  \n", ptr, *ptr);
}
//====================================================================


/* Указатель как аргумент */
void arg_func (int *pa){
	int		temp;
	int		*t_pb = pa;
	//----------------------------------
	
	printf("\n    This is \"arg_func\" \n");
	printf("Data_pa = %p. deref_pa = %d. \n", pa, *pa);
	*pa *= 4;
	printf("Data_pa = %p. deref_pa = %d. \n", pa, *pa);
	
	t_pb = &temp;
	printf("Unknown temp_address & temp_value. Data_pb = %p. deref_pb = %d. \n", t_pb, *t_pb);
	*pa = *t_pb;
	
}
//====================================================================



/* Указатель и массив */
void	array_func(){
	char	master_login[] = "family";			//исходник.
	char	*ptr_master = master_login;			//указатель на массив "master_login"
	int		num_array[] = {5, 10, 15, 20, 25, 30};
	int		*num_ptr = num_array;
	int		s_num = sizeof(num_array) / sizeof(int);
	int		i=0;
	//----------------------------------
	
	printf("\n    This is \"array_func\" \n");
	printf("Master array by ptr_master: ");
	while(*ptr_master != '\0'){
		putchar(*ptr_master);//printf("%c", *ptr_master);
		ptr_master++;
	}
	printf("\n");
	ptr_master = master_login;
	
	master_login[2] = 'k';
	printf("New master array: %s. \n", master_login);
	*(ptr_master + 2) = 'm';
	printf("Prev master array by pointer: %s. \n", master_login);
	ptr_master = master_login;
	
	printf("Size of num_array = %d. \n", s_num);
	printf("Print num queue: ");
	for(i=0; i<6; i++){
		printf(" %d ", *(num_ptr+i) );
	}
	num_ptr = num_array;
	printf("\n");
	
}
//====================================================================
