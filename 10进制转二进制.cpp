#include<iostream>
using namespace std;
int main()
{
	cout << "����ʮ����ת������" << endl;
	int num,onum;
	int k[100],i=0;
	cin >> num;
	while (num >= 2)
	{
		k[i] = num % 2;
		num = num / 2;
		i++;

	}
	k[i] = num;
	while (i >= 0)
	{
		cout << k[i];
		i--;
	}



	return 0;

}