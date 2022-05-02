#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
	int linecount = rand() % 100 + 1;

	for (int i = 0; i < linecount; i++)
	{
		int star = rand() % 70 + 1;
		for (int j = 0; j < star; j++)
			cout << '*';
		cout << endl;
	}
}