#include <iostream>
#include <cstdlib>
#include <string>
#include <string.h>
//#include <stdlib.h>
using namespace std;
struct Program	//�������� ��������� Program
{
string name;	// �������� ���������
string path;	//���� � ���������
int size;		//������ ���������
};
int main() 
{
int metka=0;
string ProgName;	
int n=2;
int tmp = 0;
Program SoftWare[4];	//������ �� 15 ��������� ���� Program
//���������� ���������� � ����������
int i=0;
for(i = 0; i<n; i++)
{
cout<<"\n VVedite nazvanie "<<i+1<<" programm: \n";
cin>>SoftWare[i].name;
cout<<"\n Vvedite put k programme: \n ";
cin>>SoftWare[i].path;
SoftWare[i].size = rand()%10000;
cout<<"\n File size = "<<SoftWare[i].size<<"Kb"<<endl;
}
//����� �� ������ ���������� �� ����������
for(i=0; i<n; i++)
{
cout<<'\n'<<SoftWare[i].name<<'\t'<<SoftWare[i].path<<'\t'<<SoftWare[i].size<<'\n';
}
//���������� �������� �� �������
cout<<"Sorted Files is: "<<endl;
for(i = 0; i<n; i++)
{
for(int j = (n-1); j>=(i+1); j--)
{
	if(SoftWare[j].size<SoftWare[j-1].size)
	{
		tmp = SoftWare[j].size;
		SoftWare[j].size = SoftWare[j-1].size;
		SoftWare[j-1].size = tmp;
	}
}
cout<<SoftWare[i].name<<" "<<SoftWare[i].size<<"Kb"<<endl;
}

l1:
cout<<"Enter Name Program ";
cout<<"Enter "Ctrl+C" for Exit"<<'\n';
cin>>ProgName;
for(i=0; i<n; i++)
if (ProgName==SoftWare[i].name)
	{
	cout<<"Nazvanie program :"<<SoftWare[i].name<<"\n";
	cout<<"Put k program :"<<SoftWare[i].path<<"\n";
	cout<<"Size of Program :"<<SoftWare[i].size<<"Kb"<<"\n";
	cout<<endl;
    }  
    goto l1; 
	system("pause");
	return 0;

}
