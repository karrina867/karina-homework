// Karina Baslyk 07 11 21 homework 3
#include<iostream>
using namespace std;
int main() {
	/*For4. Дано вещественное число — цена 1 кг конфет. Вывести стоимость 1,2, . . . , 10 кг конфет.*/
	/*int a, n;
	cin >> a;
	for (int i = 1; i <= 10; i++) {
		n = i * a;
		cout << n << ' ';
	}
	cout << endl;*/
	/*For7. Даны два целых числа A и B (A < B). Найти сумму всех целых чисел от A до B включительно.*/
	/*int a, b, n = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) { n += i;}
	cout << n << endl;*/
	/*For8. Даны два целых числа A и B (A < B). Найти произведение всех целых чисел от A до B включительно.*/
	/*int a, b, n = 1;
	cin >> a >> b;
	for (int i = a; i <= b; i++) { n *= i; }
	cout << n << endl;*/
	/*For9. Даны два целых числа A и B (A < B). Найти сумму квадратов всех целых чисел от A до B включительно.*/
	int a, b, n = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) { n += i*i; }
	cout << n << endl;
	return 0;
}