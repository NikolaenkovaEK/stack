#include <iostream>
#include <stack>
using namespace std;
//������� �������
void main()
{
setlocale(LC_ALL,"Russian");
stack <int> S; //�������� ����� S ���� int
char number; int value;
do
{
cout<<"1. �������� �������"<<endl;
cout<<"2. ������� �������"<<endl;
cout<<"3. �������� ������� �������"<<endl;
cout<<"4. ������ ������ �����"<<endl;
cout<<"0. �����"<<endl;
cout<<"����� ������� > "; cin>>number;
switch (number)
{
case '1': //���������� ��������
cout<<"�������� > "; cin>>value;
S.push(value); cout<<endl<<"������� �������� � ����\n\n";
break;
//-----------------------------------------------
case '2': //�������� ��������
if (S.empty()==true) cout<<"\n���� ����\n\n";
else
{
S.pop(); cout<<endl<<"������� ������ �� �����\n\n";
} break;
//-----------------------------------------------
case '3': //����� �������� ��������
if (S.empty()==true) cout<<"\n���� ����\n\n";
else cout<<"\n������� ������� �����: "<<S.top()<<"\n\n";
break;
//-----------------------------------------------
case '4': //����� ������� �����
if (S.empty()==true) cout<<"\n���� ����\n\n";
else cout<<"\n������ �����: "<<S.size()<<"\n\n";
break;
//-----------------------------------------------
case '0': break; //�����
default: cout<<endl<<"������� �� ������������\n\n";
break;
}
} while(number!='0');

system("pause");
}