#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include<vector>//for vector
#include <iterator>
using namespace std;
int main() {
	/*stringȫ����*/
	string str = "bca";
	char szStr[] = "def";
	while (next_permutation(str.begin(), str.end())) //ȫ����
	{
		cout << str << endl;
	}
	cout << "****" << endl;
	while (next_permutation(szStr, szStr + 3)) 
	{
		cout << szStr << endl;
	}
	sort(str.begin(), str.end());//��������
	cout << "****" << endl;
	while (next_permutation(str.begin(), str.end()))
	{
		cout << str << endl;
	}

	/*int���� ȫ���� list*/
	int a[] = { 1,2,3 };
	list<int> ls(a, a + 3);
	while (next_permutation(ls.begin(), ls.end())) 
	{
		list<int>::iterator i;
		for (i = ls.begin(); i != ls.end(); ++i)
			cout << *i << " ";
		cout << endl;
	}

	/*random_shuffle*/
	cout << endl << "random_shuffle" << endl;
	//random_shuffle(ls.begin(), ls.end());//list��֧��random_shuffle,������˫������֧�������ȡ�Ĺ�
	int a1[] = { 10,20,30,40,50,60,70,80,90,100 };
	for (int k = 0; k < 10; k++)
		cout << a1[k] << " ";
	cout << endl;
	vector<int> v(a1, a1 + 10);
	random_shuffle(v.begin(), v.end());//vector��deque������
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)//���
	{cout << *it << " ";}
	cout << endl << "****" << endl;
	random_shuffle(a1, a1 + 10);//����Ҳ����
	for (int k = 0; k < 10; k++)
		cout << a1[k]<<" ";

	return 0;
}