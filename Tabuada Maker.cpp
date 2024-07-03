#include <iostream>

using namespace std;

int recursao(int n1, int n2);

int main()
{
int num1, num2;

cin >> num1 >> num2;

for (int i = 0; i <= num2; i++)
{
	cout << num1 << " x " << i << " = " << recursao(num1, i) << endl;
}
   return 0;
}

int recursao(int n1, int n2){
	
if (n2 == 0)
	return 0;
if ( n2 ==1 )
	return n1;
else{
		return n1 + recursao(n1, n2 - 1);
	}
}
