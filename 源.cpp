#include<iostream>
using namespace std;
#include"Bitree.h"

int main()
{
	BiTree T;
	cout << "------ǰ�����------" << endl;
	T.PreOrder();
	cout << endl;
	cout << "------�������------" << endl;
	T.InOrder();
	cout << endl;
	cout << "------�������------" << endl;
	T.PostOrder();
	cout << endl;
	cout << "------�������------" << endl;
	T.LevelOrder();
	cout << endl;
	system("pause");
	return 0;
}