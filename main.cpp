#include <iostream>

using namespace std;


void trima(int n, int k, int p[])
{
	//cout  << "00" << endl;
	// for(int i = 0; i < n; ++i)
	// {
	// 	cout << p[i] << ' ';
	// } 
	int buf = p[0];
	//cout  << "11" << endl;
	if (k != 0){
	for (int i = 0; i < k-1; ++i)
	{
		//cout  << "22" << endl;
		//cout << i << '-' << p[i] << "--" << p[i+1] << endl;
		p[i] = p[i+1];
		//cout  << "33" << endl;
	}
	p[k-1] = buf;
	//cout  << "44" << endl;
}
	//for (int i = k; (i < n) && (i < k))
}



template <typename T>
void func(int n)
{
	int p[n];
	for(int i = 0; i < n; ++i)
	{
		p[i] = i;
		//cout << p[i] << ' ';
	} 
	//cout << endl;
	int k = -1;

	while (k != 0)
	{
		//cout << k << endl << endl << endl;
		//cout << "lll";
		for (int i = 0; i < n; ++i)
		{
			cout << p[i] << ' ';
		}
		cout << endl;

		k = n-1;

		//сдвинуть первые k элементов на 1 позицию
		trima (n, k, p);
		//cout << "+++" << endl;
		while ((p[k] == k) && (k != 0))
		{
			//cout << 1 << endl;
			k-=1;
			// сдвинуть первые k элементов на 1 позицию
			//cout << n << "++" << k << endl;
			trima (n, k, p);
			//cout << 2 << endl;
		}
		//cout << "+++" << endl;
	}

}



int main()
{
	func<int>(3);
	int p[10];
	for (int i = 0; i < 10; ++i)
	{	
		p[i] = i;
	}
	trima(10, 0, p);

	for (int i = 0; i < 10; ++i)
	{	
		cout << p[i] << ' ';
	}
	return 0;
}