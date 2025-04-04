#include <iostream>
#include<vector>
#include<string>

using namespace std;

int N, num[10000];

void command() {
	
	cin >> N;

	int num, index;
	string order;
	vector<int>list;


	for (int i = 0; i < N; i++) {
		cin >> order;

		if (order == "push_back") {
			cin >> num;
			list.push_back(num);
		}
		else if (order == "pop_back") {
			if (!list.empty()) {
				list.pop_back();
			}
		}
		else if (order == "size") {
			cout << list.size() << endl;
		}
		else if(order == "get") {
			cin >> index;
			if (index >= 1 && index <= list.size()) {
				cout << list[index - 1] << endl;
			}
		}
	}
}

int main() {
	command();
	return 0;
}