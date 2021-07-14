#include<iostream>
using namespace std;
int main()
{
	//按回车键结束输入;
	int array[100], x = 0, j = 0;
	cout << "--------排序工具-------" << endl << "请输入整数数据,按回车键结束" << endl;
	for (int i = 0; x != 10; i++, j++)//输入
	{
		cin >> array[i];
		x = getchar();

	}
	cout << "你输入的数据是:" << endl;
	for (int i = 0; i<j;i++)//输出排序前数据
	{
		cout << array[i]<<" ";
	
	}
	cout << endl;
	

	int select;
	cout << "请选择排序顺序:" << "输入1由大到小,输入2由小到大" << endl;
	cin >> select;
	if (select == 1)
	{
		for (int k = 0; k < j - 1; k++) //历遍次数
		{
			for (int i = 0; i < j - k - 1; i++)//排序
			{
				if (array[i] < array[i + 1])//如果后一个元素大于前一个元素,则互换数据
				{
					int box = array[i];
					array[i] = array[i + 1];
					array[i + 1] = box;

				}
			}
		}
	}
	else if (select == 2)
	{
		for (int k = 0; k < j - 1; k++) //历遍次数
		{
			for (int i = 0; i < j - k - 1; i++)//排序
			{
				if (array[i] > array[i + 1])//如果后一个元素大于前一个元素,则互换数据
				{
					int box = array[i];
					array[i] = array[i + 1];
					array[i + 1] = box;

				}
			}
		}
	}
	else
	{
		cout << "输入错误";
	}

	for (int i = 0;i<j ;i++) //输出排序后数据
	{
		cout << array[i]<<" ";
	}
}