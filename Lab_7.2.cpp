#include <iostream>
using namespace std;

struct student
{
	int number;
	const char* name;
	bool math;
	bool physic;
	bool english; 
};

int main()
{
	const int m = 25;
    int j;
	student a[m] = { 
	{ 1, "�������� ��� ���������"      , true, true, true},
	{ 2, "������� ������� ������������"        , true, true, true},
	{ 3, "�������� ���������� ����������"      , true, true, true},
	{ 4, "������ ������� ���������", false, true, false},
	{ 5, "���������� ������ �������"    , false, true, true},
	{ 6, "������� ������ ���������"        , true, false, true},
	{ 7, "������ ������� �����������"    , true, true, true},
	{ 8, "�������� ����� ��������"   , true, true, true},
	{ 9, "��������� ������ ���������"  , true, true, true},
	{10, "�������� ��������� ����������"      , true, true, true},
	{11, "��������� ���� ������������"         , true, true, false},
	{12, "������� ������ ��������"   , true, false, false},
	{13, "������ ������� ���������" , true, true, true},
	{14, "�������� ����� ��������" , true, true, true},
	{15, "�������� ���� ���������", false, true, true},
	{16, "�������� ���� ����������", false, true, false},
	{17, "����� ������ ����������"   , true, true, true},
	{18, "�������� �������� ������������"      , true, true, true},
	{19, "������������� ������ ���������"      , true, true, true},
	{20, "�������� ���� ���������"     , false, true, true},
	{21, "������� ������� ����������"  , false, false, true},
	{22, "������� �������� ���������", true, false, false},
	{23, "�������� ����� ��������" , true, true, true},
	{24, "����� ����� �����������" , false, true, true},
	{25, "��������� ����� �����������"        , true, true, true}
	};
	setlocale(LC_ALL, "Rus");
    cout << "�" << "\tI�'�                         \t���.\t�i�.\t����.\n";
	for (j = 0; j < m; j++)
		cout << a[j].number << "\t" << a[j].name << "\t" << a[j].math << "\t" << a[j].physic << "\t" << a[j].english << "\n";
	cout << "-------------------------------------" << endl;
	cout << "�������, ������� �� ������ ��������� ����� ��� ���� �������:\n";
	cout << "�" << "\tI�'�\t���.\t�i�.\t����.\n";
	for (j = 0; j < m; j++)
		if (!((int)a[j].math + (int)a[j].physic + (int)a[j].english > 1))
			cout << a[j].number << "\t" << a[j].name << "\t" << a[j].math << "\t" << a[j].physic << "\t" << a[j].english << "\n";
    cout << "-------------------------------------" << endl;
    return 0;
}



