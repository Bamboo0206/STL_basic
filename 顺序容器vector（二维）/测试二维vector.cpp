#include<iostream>
#include<vector>
#define count  3 
using namespace std;

int main(void)
{
	/*二维vector每行元素个数可以不一样*/
	vector<vector<int>> vec1 (count); //二维数组的 vector 定义//count为行数
	//初始化一个3x3的矩阵，数值为 333
	for (int i = 0; i < vec1.size(); ++i) {
		for (int j = 0; j < count; ++j) {
			vec1[i].push_back(3);
		}
	}

	//增加一行,4 4 4  
	vector<int> temp;/*ATTENTION：必须这么做*/
	vec1.push_back(temp);
	//vec1.push_back(vector<int> temp);//error
	int pos = vec1.size() - 1;//注意减一
	vec1[pos].push_back(4);
	vec1[pos].push_back(4);
	vec1[pos].push_back(4);


	////增加一行,5 5 5 5 5  
	vec1.push_back(temp);//前面声明过vector<int> temp;push_back是将其拷贝，所以这里不用再声明了
	for (int i = 0; i < 5; i++)
	{
		pos = vec1.size() - 1;//注意减一
		vec1[pos].push_back(5);
	}

	//增加一列，在每行后面push_back
	pos = vec1.size();/*行数*/
	for (int i = 0; i < pos; ++i)
		vec1[i].push_back(6);

	//打印“二维vector”
	for (int i = 0; i < vec1.size()/*行数*/; ++i) {
		for (int j = 0; j < vec1[i].size(); ++j) {
			cout << vec1[i][j] << "  ";
		}
		cout << endl;
	}
	return 0;
}