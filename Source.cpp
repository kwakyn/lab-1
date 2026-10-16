//Лабораторна Робота №1 Романовича Іллі группи КН-11 2026 16.10

// Завдання 1.
//Користувач вводить три цілих числа.
// Збільшіть перше число в два рази, друге число зменшіть на 3, третє число піднесіть 
// до квадрату, а потім знайдіть суму нових трьох чисел

//#include <iostream>
//#include <windows.h>
//using namespace std;
//int main() {
//	SetConsoleCP(65001);
//	SetConsoleOutputCP(65001);
//
//
//
//	int a, b, c;
//	cout << "Введіть число A: ";
//		cin >> a;
//
//		cout << "Введіть число B: ";
//		cin >> b;
//
//		cout << "Введіть число C: ";
//		cin >> c;
//
//	int sum;
//	a = (a * 2);
//	b = (b - 3);
//	c = (c * c);
//	sum = (a + b + c);
//	
//	cout << "Сума нових чисел: " << a << "+" << b << "+" << c << "=" << sum << endl;
//	return 0;
//}


//Завдання 2.
//Користувач вводить ціни 1 кг цукерок та 1 кг печиво.Знайдіть вартість :
//а) однієї покупки з 300 г цукерок та 400 г печива;
//б) три покупок, кожна з яких містить 2 кг печива і 1 кг 800 г цукерок.


//#include <iostream>
//#include <windows.h>
//
//using namespace std;
//
//int main() {
//	SetConsoleCP(65001);
//	SetConsoleOutputCP(65001);
//
//	double candyPrice;
//	double cookiePrice;
//
//	cout << "Введіть ціну 1кг цукерок:";
//	cin >> candyPrice;
//
//	cout << "Введіть ціну 1кг печива:";
//	cin >> cookiePrice;
//
//	double oneBuy;
//	double threeBuy;
//
//	oneBuy = (candyPrice * 0.300) + ( cookiePrice * 0.400);
//	threeBuy = 3 * ((candyPrice * 1.800) + (cookiePrice * 2.000));
//
//	cout << "Ціна однієї покупки:" << oneBuy << endl;
//
//	cout << "Ціна трьох покупок:" << threeBuy << endl;
//
//
//	return 0;
//
//
//}


//Завдання 3.
//Вік Марусі - X років, а вік Дмитра - Y років.Знайти їх середній вік, 
//а також визначити, на скільки відрізняється вік кожної дитини від середньої величини.

//#include <iostream>
//#include <windows.h>
//
//using namespace std;
//
//int main() {
//	SetConsoleCP(65001);
//	SetConsoleOutputCP(65001);
//
//
//	double M, D;
//	cout << "Вік Марусі:";
//	cin >> M;
//	cout << "Вік Дмитра:";
//	cin >> D;
//	
//	double midaref;
//	midaref = (M + D)/ 2.0;
//
//	cout << "Середній вік дітей:" << midaref << endl;
//	double  difaref;
//	difaref = (M - midaref);
//	double  difaref1;
//	difaref1 = (D - midaref);
//	cout << "Різниця Марусі від середнього арифметичного:" << difaref << endl;
//	cout << "Різниця Дмитра від середнього арифметичного:" << difaref1 << endl;
//	return 0;
//	
//
//}


//Завдання 4.
//Визначити площу трикутника зі сторонами a, b, c, використовуючи формулу Герона :
//S = pp - ap - b(p - c), де p = a + b + c/2.

//#include <iostream>
//#include <windows.h>
//#include <cmath>
//
//using namespace std;
//int main() {
//		SetConsoleCP(65001);
//	SetConsoleOutputCP(65001);
//
//	double a, b, c;
//	cout << "Введіть розмір сторони a:";
//	cin >> a;
//	cout << "Введіть розмір сторони в:";
//	cin >> b;
//	cout << "Введіть розмір сторони с:";
//	cin >> c;
//
//	double p = (a + b + c) / 2;
//	double geron = sqrt(p * (p - a) * (p - b) * (p - c));
//
//	cout << "Площа трикутника:" << geron << endl;
//	return 0;
//
//}




//Завдання 5.
//Дано координат трьох вершин трикутника
//(x1, y1), (x2, y2), (x3, y3).Знайти його периметр і площу.Відстань між двома точками визначається за формулою :
//d = (x2 - x1)2 + (y2 - y1)2

//#include <iostream>
//#include <cmath>
//#include <windows.h>
//
//using namespace std;
//int main() {
//			SetConsoleCP(65001);
//	SetConsoleOutputCP(65001);
//
//	double x1, y1, x2, y2, x3, y3;
//	cout << "Введи ккординату X1 першої точки:";
//	cin >> x1;
//	cout << "Введи ккординату Y1 другої точки:";
//	cin >> y1;
//	cout << "Введи ккординату X2 третьої точки:";
//	cin >> x2;
//	cout << "Введи ккординату Y2 четвертої точки:";
//	cin >> y2;
//	cout << "Введи ккординату X3 пятої точки:";
//	cin >> x3;
//	cout << "Введи ккординату Y3 шостої точки:";
//	cin >> y3;
//
//	double A = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
//	double B = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
//	double C = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
//	double perimetr = (A + B + C);
//	double P = (A + B + C) / 2;
//	double geron = sqrt(P * (P - A) * (P - B) * (P - C));
//
//	cout << "Периметр вершин трикутникa:" << perimetr << endl;
//	cout << "Площадь вершин трикутника через формулу герона:" << geron << endl;
//	return 0;
//
//
//}


//Завдання 6.
//Зарплата менеджера 100$ + 5 % від продаж.
//Користувач вводить з клавіатури загальну суму угод менеджера за місяць.Порахувати підсумкову зарплату менеджера.

//#include <iostream>
//#include <windows.h>
//#include <cmath>
//
//using namespace std;
//int main() {
//				SetConsoleCP(65001);
//				SetConsoleOutputCP(65001);
//				double case1;
//				cout << "Введи загальку сумму угод менеджера за місяць:";
//				cin >> case1;
//
//				double sallary = (case1 * 0.05) + 100;
//
//				cout << "Підсумкова зарплата:" << sallary << "$" << endl;
//				return 0;
//
//
//
//
//}



//Завдання 7.
//Користувач вводить з клавіатури розмір одного фільму в гігабайтах і швидкість інтернет 
//- з'єднання в бітах в секунду. Порахувати за скільки годин, хвилин і секунд скачається фільм.

#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	long long GB;
	cout << "Введіть розмір фільму в гігабайтах:";
	cin >> GB;
	double mBIT;
	cout << "Введіть швидкість інтернету (мБ/Сек):";
	cin >> mBIT;
	long long BITI = (mBIT * 1048576);
	long long bit_result = (GB * 1073741824);
	cout << "Розмір фільму в байтах:" << bit_result << endl;
	cout << "Швидкість інтернету в байтах:" << BITI << endl;

	long long bit_speed = bit_result / BITI;
	long long bit_hours = bit_speed / 3600;
	long long bit_minutes = (bit_speed % 3600) / 60;

	string hours_word;
	if (bit_hours % 10 == 1 && bit_hours % 100 != 11) {
		hours_word = "година і ";
	}
	else if ((bit_hours % 10 >= 2 && bit_hours % 10 <= 4) && (bit_hours % 100 < 10 || bit_hours % 100 >= 20)) {
		hours_word = "години і ";
	}
	else {
		hours_word = "годин і ";
	}

	cout << "До повного Завантаження залишилось приблизно:" << bit_hours << " " << hours_word << bit_minutes << " Хвилин" << endl;
	return 0;

}