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
void	multiarr_func ();		//указатель и многомерный массив.
void	storage_class_func(void);//указатели и разные классы переменных
void	func_ptr (void);		//Указатель на функцию.
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
	multiarr_func();
	storage_class_func( );
	func_ptr( );
	
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



/* многомерный массив */
void	multiarr_func (){
	char	mult_arr[3][20] = {
		"Lazarew",
		"Dmitriy",
		"Vladimirovich"
	};
	char	(*ptr_arr)[20] = mult_arr;			//указатель на многомерный массив!!!
	int		array [5][10];						//многомерный массив.
	int		*ptr_array[5];						//массив указателей.
	//----------------------------------	

	printf("\n    This is \"multiarr_func\" \n");
	printf("Print multi array: \n");
	for(int i=0; i<3; i++){
		printf("%s \n",*(ptr_arr+i));
	}
	ptr_arr = mult_arr;
	printf("Check pointer: %s. \n", ptr_arr);
	
	//определение строк массива
	printf("Define array matrix: \n");
	for(int i=0; i < 5; i++){
		for(int j=0; j < 10; j++){
			array[i][j] = i + j*2 + 3;//2^(i%3);
			printf("%d  ",array[i][j]);
		}
		printf("\n");
	}
	printf("\n Sorting for array: \n");
	ptr_array[0] = &array[3][0];
	ptr_array[1] = &array[4][0];
	ptr_array[2] = &array[0][0];
	ptr_array[3] = &array[2][0];
	ptr_array[4] = &array[1][0];
	
	int		length = sizeof(array[0])/sizeof(int);
	printf("\n Enter new matrix: \n");
	for(int i=0; i<5; i++){
		for(int j=0; j<length;j++){
			printf("%d  ",*(ptr_array[i]+j) );
		}
		printf("\n");
	}
}
//====================================================================



/* Разные классы переменных */
void	storage_class_func( ){
	const int		a0 = 10;
	int				bob = 20;
	const int		*pa0 = &a0;			//указатель на константу. Может содержать другой адрес. Может указывать на константу.
	int	*const		pc = &bob; 			//константый указатель. Он не может содержать другой адрес. Только меняет значение по этому адресу.
	//----------------------------------


	printf("\n    This is \"storage_class_func\" \n");
	printf("Var a0 = %d; addr a0 = %p. \n", a0, pa0);
	
	pa0 = &bob;
	printf("Var bob = %d; addr bob = %p. \n", bob, pa0);
	
	printf("Const ptr. var_bob = %d. addr_bob = %p. \n", *pc, pc);
	printf("Const ptr. New var_bob = %d. addr_bob = %p. \n", (*pc + 26), pc);
	
}
//====================================================================



/* Указатель на функцию */
int add(int a, int b) {return a+b;}
int sub(int a, int b) {return a-b;}
void	func_ptr (void){
	int	(*my_function[])(int a, int b) = {add, sub};		//объявлен указатель на функцию
	//----------------------------------	
	
	printf("\n    This is \"func_ptr\" \n");
	printf("Pointer on add: result = %d. \n", my_function[0](10, 20));
	printf("Pointer on sub: result = %d. \n", my_function[1](50, 5));
}
//====================================================================
