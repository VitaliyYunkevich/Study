#include <iostream>
#include <ctime>
using namespace std;
int main() {
	int a, b, random, guess;
	setlocale(0, "Rus");
	cout << "Введите начало отрезка - a"<< endl;
	cin >> a;
	cout << "Введите конец отрезка - b" << endl;
	cin >> b;
	srand(time(0));
	random = rand() % (b - a + 1) + a;
	cout << random << endl;
	cout << "Угадайте число- " << endl;
	cin >> guess;
	while (guess != random) {
		if (guess < random) {
			cout << "Неудачно, число больше предложенного, попробуйте ещё - " << endl;
		}
		else { cout << "Неудачно, число меньше предложенного, попробуйте ещё - " << endl; }
		cin >> guess;

	}
	cout << "Поздравляем, вы угадали число!" << endl;


}