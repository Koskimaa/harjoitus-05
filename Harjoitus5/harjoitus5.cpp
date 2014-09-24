#include <iostream> 
using namespace std;
int main()
{
	int luku1;
	int luku2;
	cout << "syötä luku1: ";
	cin >> luku1;
	cout << "syötä luku2: ";
	cin >> luku2;
	if (luku1 == luku2)
		cout << "BINGO";
	else
		cout << "BONGO";
}