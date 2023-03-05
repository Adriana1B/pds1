#include <iostream>
#include <string>

using namespace std;

void fun1();
void fun2();

int main()
{
	fun1();
	fun2();
}

void fun1() {
	bool p, q;
	int i;

	do
	{
		cout << "1 - True 0 - False" << endl;
		cout << "Enter p: ";
		cin >> i;
		cout << endl;
	} while (i != 1 && i != 0);
	p = i == 0;

	do
	{
		cout << "1 - True 0 - False" << endl;
		cout << "Enter q: ";
		cin >> i;
		cout << endl;
	} while (i != 1 && i != 0);
	q = i == 1;

	cout << "AND" << endl;
	cout << (p && q) << endl;
	cout << endl;

	cout << "OR" << endl;
	cout << (p || q) << endl;
	cout << endl;

	cout << "XOR" << endl;
	cout << (p ^ q) << endl;
	cout << endl;

	cout << "p->q" << endl;
	cout << (!p || q) << endl;
	cout << endl;

	cout << "q->p" << endl;
	cout << (!q || p) << endl;
	cout << endl;

	cout << "p~q" << endl;
	cout << ((!p || q) && (!q || p)) << endl;
	cout << endl;

}

void fun2() {
	string a = "01001100",
		b = "10011110";
	int n = a.length();
	string x = "", y = "", z = "";
	char c;
	bool aa, bb, cc;
	for (int i = 0; i < n; i++) {
		aa = (a[i] == '0');
		bb = (b[i] == '1');

		cc = (aa || bb);
		c = cc ? '0' : '1';
		x = x + c;
		cc = (aa && bb);
		c = cc ? '0' : '1';
		y = y + c;
		cc = (aa != bb);
		c = cc ? '0' : '1';
		z = z + c;
	}
	cout << "a =      " << a << endl;
	cout << "b =      " << b << endl;
	cout << "a || b = " << x << endl;
	cout << "a && b = " << y << endl;
	cout << "a ^ b =  " << z << endl;

}
