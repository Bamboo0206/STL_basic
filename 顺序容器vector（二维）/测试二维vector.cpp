#include<iostream>
#include<vector>
#define count  3 
using namespace std;

int main(void)
{
	/*��άvectorÿ��Ԫ�ظ������Բ�һ��*/
	vector<vector<int>> vec1 (count); //��ά����� vector ����//countΪ����
	//��ʼ��һ��3x3�ľ�����ֵΪ 333
	for (int i = 0; i < vec1.size(); ++i) {
		for (int j = 0; j < count; ++j) {
			vec1[i].push_back(3);
		}
	}

	//����һ��,4 4 4  
	vector<int> temp;/*ATTENTION��������ô��*/
	vec1.push_back(temp);
	//vec1.push_back(vector<int> temp);//error
	int pos = vec1.size() - 1;//ע���һ
	vec1[pos].push_back(4);
	vec1[pos].push_back(4);
	vec1[pos].push_back(4);


	////����һ��,5 5 5 5 5  
	vec1.push_back(temp);//ǰ��������vector<int> temp;push_back�ǽ��俽�����������ﲻ����������
	for (int i = 0; i < 5; i++)
	{
		pos = vec1.size() - 1;//ע���һ
		vec1[pos].push_back(5);
	}

	//����һ�У���ÿ�к���push_back
	pos = vec1.size();/*����*/
	for (int i = 0; i < pos; ++i)
		vec1[i].push_back(6);

	//��ӡ����άvector��
	for (int i = 0; i < vec1.size()/*����*/; ++i) {
		for (int j = 0; j < vec1[i].size(); ++j) {
			cout << vec1[i][j] << "  ";
		}
		cout << endl;
	}
	return 0;
}