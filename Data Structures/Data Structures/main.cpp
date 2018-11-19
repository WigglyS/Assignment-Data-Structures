#include <iostream>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

void main(){
	int Data[] = { 1, 2, 3, 4, 5 };
	stack<int> S;
	queue<int> Q;

	cout << "Initial Data : ";
	for (int i = 0; i <= 4; i++) {
		S.push(Data[i]);
		Q.push(Data[i]);

		cout << Data[i] << ' ';
	}

	cout <<"\n" << "The Stack has " << S.size() << " elements." << endl;
	cout << "The Queue has " << Q.size()<< " elements." << endl;

	system("pause");

	cout << "The Stacks Values : ";
	for (int i = 0; i <= 4; i++) {
		cout << S.top()<<' ';
		S.pop();
	}

	system("pause");

	cout << "The Queues Values : ";
	for (int i = 0; i <= 4; i++) {
		cout << Q.front() << ' ';
		Q.pop();
	}

	system("pause");
}