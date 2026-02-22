/*	****************************************************************************
	Project	:	Struct in C-program
	Data	:	06.02.2026
	Desript	:	Дополнительный файл. Примеры структур и работа с ними.
***************************************************************************** */



/*	внешние переменные и объявление функций	*/
void	st_type (void);
//====================================================================



/*	виды структур */
void	st_type (){
	struct {
		int	x;
		int	y;
	} point;			//анонимная  структура
	
	struct person {
		char *family;
		int		year;
		float	salary;
	};					//создание своего типа
	
	typedef  struct	 {
		char *family;
		int		year;
		float	salary;
	} Person_st;
	//----------------------------------
	
	printf("\n This is \"st_type\" function. \n");
	printf("Coordinates of the point = (%d, %d). //Anonim struct\n", point.x = 5, point.y = 6);
	
	struct person	Ivanov = {"Ivanov", 35, 245000.0};//создание и инициализация переменной собственного типа.
	printf(" Struct elements: 1st = %s, 2nd = %d, 3th = %.2f. \n", Ivanov.family, Ivanov.year, Ivanov.salary);
	
	Person_st	a1 = {"Petrov", 40, 261000.0};
	printf(" Typedef Struct elements: a1.1 = %s, a1.2 = %d, a1.3 = %.2f. \n", a1.family, a1.year, a1.salary);
}
//====================================================================