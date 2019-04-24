#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include<vector>//for vector
#include <iterator>
using namespace std;
int main() {
	/*string全排列*/
	string str = "bca";
	char szStr[] = "def";
	while (next_permutation(str.begin(), str.end())) //全排列
	{
		cout << str << endl;
	}
	cout << "****" << endl;
	while (next_permutation(szStr, szStr + 3)) 
	{
		cout << szStr << endl;
	}
	sort(str.begin(), str.end());//快速排序
	cout << "****" << endl;
	while (next_permutation(str.begin(), str.end()))
	{
		cout << str << endl;
	}

	/*int数组 全排列 list*/
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
	//random_shuffle(ls.begin(), ls.end());//list不支持random_shuffle,可能是双向链表不支持随机存取的锅
	int a1[] = { 10,20,30,40,50,60,70,80,90,100 };
	for (int k = 0; k < 10; k++)
		cout << a1[k] << " ";
	cout << endl;
	vector<int> v(a1, a1 + 10);
	random_shuffle(v.begin(), v.end());//vector或deque都可以
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)//输出
	{cout << *it << " ";}
	cout << endl << "****" << endl;
	random_shuffle(a1, a1 + 10);//数组也可以
	for (int k = 0; k < 10; k++)
		cout << a1[k]<<" ";

	return 0;
}