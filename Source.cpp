#include <iostream>

using namespace std;

int main() {
	int start, during, required;
	int total = 0;
	cin >> start >> during >> required;
	start = start + during;

	while (start >= required) {
		int more = (start / required);
		int remaining = start % required;
		total = total + more;
		start = more + remaining;
	}
	cout << total << endl;

	return 0;

}