#include <iostream>
#include <ctime>
using namespace std;
int main() {
	int a, b, random, guess;
	setlocale(0, "Rus");
	cout << "������� ������ ������� - a"<< endl;
	cin >> a;
	cout << "������� ����� ������� - b" << endl;
	cin >> b;
	srand(time(0));
	random = rand() % (b - a + 1) + a;
	cout << random << endl;
	cout << "�������� �����- " << endl;
	cin >> guess;
	while (guess != random) {
		if (guess < random) {
			cout << "��������, ����� ������ �������������, ���������� ��� - " << endl;
		}
		else { cout << "��������, ����� ������ �������������, ���������� ��� - " << endl; }
		cin >> guess;

	}
	cout << "�����������, �� ������� �����!" << endl;


}