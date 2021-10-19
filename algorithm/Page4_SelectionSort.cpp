#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string temp;
	getline(cin, temp);
	istringstream str(temp);
	string out;
	while (str >> out) {
		cout << out << endl;
	}
}