#include <iostream>
using namespace std;

// сумма всех чисел от 

inline int sum_A_To_B(int A, int B) {
	int res = 0;
	for (int i = A; i = B; i++)
		res += i;
	return res;
}

// перегруженные функции
// максимум двух цис
int max_el(int A, int B) {
	
	return A > B ? A : B;
}
// максимум двух вещественных чисел
double max_el(double A, double B) {
	return A > B ? A : B;
}
// максимум трех коротких чисел
short max_el(short A, short B, short C) {
	cout <<"получна три коротких чисел \n";
	return A > (B > C ? B : C) ? A : (B > C ? B : C);

 }
//максимум два странных числа
void max_el(int A, int B, bool F) {
	cout << "получна два странных числа";
		cout << (A > B ? A : B) << endl;
}
//шаблонные функции
// функция поиска модля числа
template <typename T>
T absolute(T num) {
	return num < 0 ? -num : num;
}
int absolute(int num) {
	return num < 0 ? -num : num;
}

double absolute(double num) {
	return num < 0 ? -num : num;
}
short absolute(short num) {
	return num < 0 ? -num : num;
}



int main() {
	int n, m;

	// sum

	// SUM_A_to_B
	/*cout << "enter two number";
	cin >> n >> m;
	cout << "Total Number to " << n << " from " << m << " = " <<
		sum_A_To_B (n,m) << endl;
*/

	// MAX_EL
	/*
	cout << max_el(10, 7) << endl; //10
	cout << max_el(20, 50) << endl;//50
	cout << max_el(0.3, 0.8) << endl;//0.8
	short s1 = 15, s2 = 20, s3 = 10;
	cout << max_el(s1, s2, s3) << endl;
	max_el(2, 4, true);
	*/

	// absolute
	cout << absolute(7) << endl;//7
	cout << absolute(-11) << endl;//11
	cout << absolute(0.16) << endl;//0.16
	cout << absolute(-1.5) << endl;//1.5






		return 0;
}