#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

int main(){
	stack<int> binaryResult;
	int value;
	int remainder;

	cout << "Enter a value to be converted to binary";
	cin >> value;

	while (value > 0){
		binaryResult.push(value % 2);
		value /= 2;
	}	

	while(!binaryResult.empty()){
		cout << binaryResult.top();
		binaryResult.pop();
	}

	cout << endl;

	return 0;
}
