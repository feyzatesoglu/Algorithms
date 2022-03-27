#include<iostream>
#include<math.h>
using namespace std;
int power(int, int);

int main() {
	int a=power(3, 4);
	cout << a<<endl;
	system("pause");

}
int power(int a,int n) {
	//Base Cases
	if (n == 0)
		return 1;
	if (n == 1)
		return a;
	//Divide and Conqure
	int partialPow = power(a,n - 1);

	//Merge
	return partialPow * a;
}