#include <iostream>
#include <ctime>
using namespace std;
int main() {
	int a, b, random, guess, count=1;
	setlocale(0, "Rus");
	cout << "Ââåäèòå íà÷àëî îòðåçêà - a"<< endl;
	cin >> a;
	cout << "Ââåäèòå êîíåö îòðåçêà - b" << endl;
	cin >> b;
	srand(time(0));
	random = rand() % (b - a + 1) + a;
	cout << random << endl;
	cout << "Óãàäàéòå ÷èñëî- " << endl;
	cin >> guess;
	while (guess != random) {
		if (guess < random) {
			cout << "Íåóäà÷íî, ÷èñëî áîëüøå ïðåäëîæåííîãî, ïîïðîáóéòå åù¸ - " << endl;
		}
		else { cout << "Íåóäà÷íî, ÷èñëî ìåíüøå ïðåäëîæåííîãî, ïîïðîáóéòå åù¸ - " << endl; }
		cin >> guess;
		count++;

	}
	cout << "Ïîçäðàâëÿåì, âû óãàäàëè ÷èñëî!" << endl;
	cout<<"Количество попыток = "<<count<<endl;


}
