//работа с массивами. Виды массивов:
//	1. Одномерный / Многомерный.
//	2. Динамический
//	3. Константные.
//	4. Строковые.
//Индексом служит любое целочисленное выражение.
//====================================================================

//набор вставляемых файлов: стандартные или пользовательские библиотеки
#include  "stdio.h"	

//заглавная функция
int main () {
	int		one_array [5] = {5,10,15,20,25};
	int		multi_array [2][5] = {
				{5,10,15,20,25},
				{2, 4, 8,16,32}
			};
	int		dynamic_arr[] = {1, 2, 4, 8};	//обязательно должен быть проинициализирован при объявлении ? Да
	const int	const_array[3] = {11, 22, 33};
	char	sym_array[] = {"Hey"};
	int		i, y;
	int		rows = sizeof(multi_array) / sizeof(multi_array[0]);
	int		cols = sizeof(multi_array[0]) / sizeof(multi_array[0][0]);
	//----------------------------------
	
	printf("Hello, world!\n");
	printf ("Put one array: \n");
	for(i=0; i < ((sizeof(one_array)/sizeof(int))); i++){
		printf("%d, ", one_array[i]);
	}
	printf("\n");
	
	printf ("Put multi array: \n");
	for(i=0; i < ((sizeof(multi_array)/sizeof(multi_array[0]))); i++){
		for(y = 0; y < (sizeof(multi_array[0])/sizeof(multi_array[0][0])); y++){
			printf("%4d, ", multi_array[i][y]);
		}
		printf("\n");
	}	
	printf("\n");
	printf ("Put multi array2: \n");
	for(i=0; i < rows; i++){
		for(y = 0; y < cols; y++){
			printf("%4d, ", multi_array[i][y]);
		}
		printf("\n");
	}	
	printf("\n");
	
	printf ("Put dynamic array: \n");
	for(i=0; i < ((sizeof(dynamic_arr))/sizeof(int)); i++){
		printf("%d, ", dynamic_arr[i]);
	}
	printf("\n");

	// const_array[0] = 10; Выдаст ошибку.
	
	printf ("Put char array: \n");
	printf ("message: %s \n", sym_array);
	
	printf("\n");

	return 0;
}
