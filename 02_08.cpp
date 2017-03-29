#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

double piRecursive(int n) {
	if(n>=1000) return 1;
	return 1+(n/(double)(n*2+1))*piRecursive(n+1);
}
int main() {
	double pi = 2 * piRecursive(1);
	cout << "Die ersten Stellen von Pi: " << setw(10) << pi << endl;
}
