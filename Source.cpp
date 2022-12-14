#include <iostream>
#include <ctime>
using namespace std;
double powerA2(double a) {
	return a * a;
}

double powerA3(double a) {
	//double res = a * a * a;
	return a * a * a;
}

double powerA4(double a) {
	return a * a * a * a;
}

double aMean(double x, double y) {
	return (x + y) / 2;
}

double gMean(double x, double y) {
	return sqrt(x * y);
}

double triangleP(double a) {
	return 3 * a;
}

double triangleS(double a) {
	return  powerA2(a) * sqrt(3) / 4;
}

double rectP(double x1, double y1, double x2, double y2) {
	return (abs(y1 - y2) + abs(x1 - x2)) * 2;
}

double rectS(double x1, double y1, double x2, double y2) {
	return abs(y1 - y2) * abs(x1 - x2);
}
int main() {
	setlocale(LC_ALL, "rus");
	//Proc1.Описать функцию PowerA3(A), вычисляющую третью степень числа A и возвращающую ее(параметр вещественный).
	//С помощью этой функции найти третьи степени пяти случайных чисел.
	/*srand(time(nullptr));
	for (int i = 1; i <= 5; i++) {
		double x = rand() % 11;
		double x3 = powerA3(x);
		cout << "x = " << x << " x^3 = " << x3 << endl;
	}*/

	//Proc2.Описать 2 функции PowerA2(А), PowerA4(A), вычисляющиx вторую и четвертую степень числа A и возвращающиx эти степени(параметры являются вещественными).
	//С помощью этих функций найти вторую и четвертую степень пяти случайных чисел
	/*srand(time(nullptr));
	for (int i = 1; i <= 5; i++) {
		double x = rand() % 11;
		double x2 = powerA2(x);
		double x4 = powerA4(x);
		cout << "x = " << x << "  x^2 = " << x2 << "  x^4 = " << x4 << endl;
	}*/
	

	//Proc3.Описать 2 функции aMean(X, Y), gMean(X, Y), вычисляющие среднее арифметическое aMean = (X + Y) / 2
	//и среднее геометрическое gMean = √ X·Y двух положительных чисел X и Y(X и Y — входные параметры вещественного типа).
	//С помощью этих функций найти среднее арифметическое и среднее геометрическое для 10 пар случайных чисел.
	/*srand(time(nullptr));
	for (int i = 1; i <= 10; i++) {
		double x1 = rand() % 100 / 10.0;
		double y1 = rand() % 100 / 10.0;
		double am = aMean(x1, y1);
		double gm = gMean(x1, y1);
		cout << x1 << " " << y1 << " " << " am = " << am << " " << " gm = " << gm << endl;
	}*/


	//Proc4.Описать 2 функции triangleP(a) и triangleS(a),
	//вычисляющие по стороне a равностороннего треугольника его периметр P = 3·a
	//и площадь S = a^2 · √ 3 / 4 (параметры являются вещественными).С помощью этих функций найти периметры и 
	//площади трех равносторонних треугольников с данными сторонами(стороны ввести с клавиатуры).
	/*double a;
	cout << " Введите сторону тругольника: " << endl;
	cin >> a;
	double P = triangleP(a);
	double S = triangleS(a);
	cout << "P = " << P << " " << "S = " << S << endl;*/


	/*Proc5.Описать 2 функции rectP(x1, y1, x2, y2)  и rectS(x1, y1, x2, y2),
	вычисляющие периметр P и площадь S прямоугольника со сторонами, параллельными осям координат,
	по координатам(x1, y1), (x2, y2) его противоположных вершин.
	С помощью этих функций найти периметры и площади трех прямоугольников с данными противоположными вершинами.*/
	double x1, x2, y1, y2;
	cout << "Введите x1: " << endl;
	cin >> x1;
	cout << "Введите x2: " << endl;
	cin >> x2;
	cout << "Введите y1: " << endl;
	cin >> y1;
	cout << "Введите y2: " << endl;
	cin >> y2;
	double P = rectP(x1, y1, x2, y2);
	double S = rectS(x1, y1, x2, y2);
	cout << "P = " << P << " " << "S = " << S << endl;





	return 0;
}





	
