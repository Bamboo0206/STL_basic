#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
class MyLess {
public:
	bool operator()(int n1, int n2) {
		return (n1 % 10) < (n2 % 10);
	}
};
int main() 
{
	int a[20] = { 14,2,9,111,78 };
	int i;

	cout << endl << "�������У�ʹ���Զ���Ƚ���greater����\n";
	sort(a, a + 5, greater<int>());
	for (i = 0; i < 5; i++)
		cout << a[i] << " ";

	cout << endl << "stable_sort�����������У�\n";
	stable_sort(a, a + 5);
	for (i = 0; i < 5; i++)
		cout << a[i] << " ";

	cout << endl << "Myless����λ��������\n";
	sort(a, a + 5, MyLess());
	for (i = 0; i < 5; i++)
		cout << a[i] << " ";

	/*****************��********************/

	cout << endl << "make_heap��\n";
	make_heap(a, a + 5);//Ĭ�����ɴ󶥶�
	for (i = 0; i < 5; i++)
		cout << a[i] << " ";

	cout << endl << "make_heap(С����)��\n";
	make_heap(a, a + 5,greater<int>());
	for (i = 0; i < 5; i++)
		cout << a[i] << " ";

	/*����push_heap֮ǰ�������make_heap����һ����
��������push_back����Ԫ�أ�Ȼ���ٵ���push_heap������ʹ���һ��Ԫ�ز嵽����λ��
ע�⣬push_heap�е�_Compare��make_heap�е�_Compare����������һ�µģ���Ȼ������ʧ�ܣ����һ��Ԫ�ػ��������λ�ã����²���ʧ��*/
	cout << endl << "����push_heap��\n";
	a[5] = 55;
	push_heap(a, a + 6, greater<int>());    //�¼���Ԫ��û�е��ɶ� ��Ҳ��֪��Ϊʲô ��ѧ
	for (i = 0; i < 6; i++)
		cout << a[i] << " ";

	/**********����vector�ܲ���push_heap*******/
	vector<int> v(a, a + 5);
	cout << endl << "��vector��make_heap��\n";
	make_heap(v.begin(), v.end() );
	for (i = 0; i < 5; i++)
		cout << v[i] << " ";

	cout << endl << "push_heap��\n";      //�����̫�� �����ʺ�
	v.push_back(55);//���Ԫ��
	push_heap(v.begin(), v.end());			//��ô�鷳 ֱ��make_heap����һ������ ��ѧ
	make_heap(v.begin(), v.end());
	for (i = 0; i < 6; i++)
		cout << v[i] << " ";

	cout << endl << "make_heap��\n";
	make_heap(v.begin(), v.end(), greater<int>());          //��䲻���� ��ѧ //�ݣ�˫�
	for (i = 0; i < 6; i++)
		cout << v[i] << " ";

	return 0;
}