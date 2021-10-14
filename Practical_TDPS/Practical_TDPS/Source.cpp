#include <iostream>
#include <ctime>
using namespace std;
int main() {
	int a, b, random, guess, count=1,k,temp,i, sum=0, factorial=1,dividers=1;
	setlocale(0, "Rus");
	cout << "Enter the start of the line - a"<< endl;
	cin >> a;
	cout << "Enter end of line - b" << endl;
	cin >> b;
	srand(time(0));
	random = rand() % (b - a + 1) + a;
	cout << random << endl;
	cout << "Guess the number- " << endl;
	cin >> guess;
	while (guess != random) {
		if (guess < random) {
			cout << "Unsuccessful, the number is higher than suggested, please try again - " << endl;
		}
		else { cout << "Unsuccessful, the number is less than suggested, please try again - " << endl; }
		cin >> guess;
		count++;

	}
	temp = random;
	while (temp != 0) {
		sum = sum + temp % 10;
		temp /= 10;
	}
	if (random < 0) {
		cout << "The is no factorial" << endl;
	}
	else {
		if (random >= 1) {
			{
				for (k = 1; k <= random; k++) {
					factorial = factorial * k;
				}
			}
			cout << "The factorial is = " << factorial << endl;
		}
		else {
			cout << "The factorial is = " << factorial << endl;
		}
	}
	for (i = 2; i*i <= random; i++) {
		if (random % i == 0) {
			dividers = dividers + 1;
		}

	}
	if (dividers == 1) {
		cout << "The entered number is prime"<<endl;
	}
	else { cout << "The entered number is not prime " << endl; 
	for (i = 1; i <= (random / 2); i++) {
		if (random % i == 0)
			cout << i << " ";
	}
	cout << "- dividers of the number " << random << endl;
	}
	
	cout << "Congratulations, you guessed it! Number of attemps = "<<count << endl;
	cout << "Sum of digits of a number = " << fabs(sum) << endl;
}
