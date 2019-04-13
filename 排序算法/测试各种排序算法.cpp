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

	cout << endl << "降序排列（使用自定义比较器greater）：\n";
	sort(a, a + 5, greater<int>());
	for (i = 0; i < 5; i++)
		cout << a[i] << " ";

	cout << endl << "stable_sort（）升序排列：\n";
	stable_sort(a, a + 5);
	for (i = 0; i < 5; i++)
		cout << a[i] << " ";

	cout << endl << "Myless按个位升序排序：\n";
	sort(a, a + 5, MyLess());
	for (i = 0; i < 5; i++)
		cout << a[i] << " ";

	/*****************堆********************/

	cout << endl << "make_heap：\n";
	make_heap(a, a + 5);//默认生成大顶堆
	for (i = 0; i < 5; i++)
		cout << a[i] << " ";

	cout << endl << "make_heap(小顶堆)：\n";
	make_heap(a, a + 5,greater<int>());
	for (i = 0; i < 5; i++)
		cout << a[i] << " ";

	/*调用push_heap之前必须调用make_heap创建一个堆
首先容器push_back插入元素，然后再调用push_heap，它会使最后一个元素插到合适位置
注意，push_heap中的_Compare和make_heap中的_Compare参数必须是一致的，不然会插入堆失败，最后一个元素还是在最后位置，导致插入失败*/
	cout << endl << "数组push_heap：\n";
	a[5] = 55;
	push_heap(a, a + 6, greater<int>());    //新加入元素没有调成堆 我也不知道为什么 玄学
	for (i = 0; i < 6; i++)
		cout << a[i] << " ";

	/**********尝试vector能不能push_heap*******/
	vector<int> v(a, a + 5);
	cout << endl << "（vector）make_heap：\n";
	make_heap(v.begin(), v.end() );
	for (i = 0; i < 5; i++)
		cout << v[i] << " ";

	cout << endl << "push_heap：\n";      //结果不太对 黑人问号
	v.push_back(55);//添加元素
	push_heap(v.begin(), v.end());			//这么麻烦 直接make_heap不是一样的吗 玄学
	make_heap(v.begin(), v.end());
	for (i = 0; i < 6; i++)
		cout << v[i] << " ";

	cout << endl << "make_heap：\n";
	make_heap(v.begin(), v.end(), greater<int>());          //这句不对了 玄学 //草（双语）
	for (i = 0; i < 6; i++)
		cout << v[i] << " ";

	return 0;
}