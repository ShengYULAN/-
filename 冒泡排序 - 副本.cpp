#include<iostream>
using namespace std;
int main()
{
	//���س�����������;
	int array[100], x = 0, j = 0;
	cout << "--------���򹤾�-------" << endl << "��������������,���س�������" << endl;
	for (int i = 0; x != 10; i++, j++)//����
	{
		cin >> array[i];
		x = getchar();

	}
	cout << "�������������:" << endl;
	for (int i = 0; i<j;i++)//�������ǰ����
	{
		cout << array[i]<<" ";
	
	}
	cout << endl;
	

	int select;
	cout << "��ѡ������˳��:" << "����1�ɴ�С,����2��С����" << endl;
	cin >> select;
	if (select == 1)
	{
		for (int k = 0; k < j - 1; k++) //�������
		{
			for (int i = 0; i < j - k - 1; i++)//����
			{
				if (array[i] < array[i + 1])//�����һ��Ԫ�ش���ǰһ��Ԫ��,�򻥻�����
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
		for (int k = 0; k < j - 1; k++) //�������
		{
			for (int i = 0; i < j - k - 1; i++)//����
			{
				if (array[i] > array[i + 1])//�����һ��Ԫ�ش���ǰһ��Ԫ��,�򻥻�����
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
		cout << "�������";
	}

	for (int i = 0;i<j ;i++) //������������
	{
		cout << array[i]<<" ";
	}
}