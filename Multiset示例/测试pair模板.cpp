//pair�Ǹ��ṹ ��ϸ��onenote-��c++-��STL-��006
//https://docs.microsoft.com/zh-cn/cpp/standard-library/pair-structure?view=vs-2019
#include <iostream>
#include <set> //ʹ��multiset��������ļ�
using namespace std;
int fun()
{
	pair<int, float> object(pair<double, char*>(2.33, "hello world"));//char*����ת����float

	pair < string, int > k1(pair < char*, double >("this", 4.5));//Ϊʲô����������ֱ��ѧ    �ѵ�char*����תstring��
	pair < char*, int > k2(pair < string, double >("this", 4.5));//????
	pair < string, int > k3(pair < string, double >("this", 4.5));//string���ǲ���û��this�ַ������ڳ����������Բ����������ǣ�����
	pair < char*, int > k4(pair < char*, double >("this", 4.5));

	char s[5];
	s[0] = 'a'; s[1] = 'b'; s[2] = '\0';//һ���ǳ����ַ���
	pair < char*, int > k5(pair < char*, double >(s, 4.5));// ��֪���ˣ���Ӧ���ǳ����ַ����Ĺ�
	pair < string, int > k6(pair < char*, double >(s, 4.5));//���� ����

	pair<int, int> p(pair<double, double>(5.5, 4.6));
	pair < string, int > x(pair < double, int > b(3.4, 100));//����дb������double����ת����int
	pair<int, int> obj(pair<char, float>('c', 2.33));
}