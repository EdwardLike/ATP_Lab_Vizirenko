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
	{ 1, "����� ���i� �i���i����"      , true, true, true},
	{ 2, "�i�� ���i� ���������i���   "        , true, true, true},
	{ 3, "��i�i� ������ ����������"      , true, true, true},
	{ 4, "�i������� ��������� ����������", false, true, false},
	{ 5, "�����i�� �����i� ����i����   "    , false, true, true},
	{ 6, "������� I��� ���������    "        , true, false, true},
	{ 7, "����� �����i�� ������i����"    , true, true, true},
	{ 8, "���������� ����i� ���������"   , true, true, true},
	{ 9, "������ ��������� �����i�����"  , true, true, true},
	{10, "�������� ���� ����i����"      , true, true, true},
	{11, "������ ��������� ����i�����"         , true, true, false},
	{12, "I���� I��� ����i�����"   , true, false, false},
	{13, "����� �������i� ���������i���" , true, true, true},
	{14, "��������� ���i� ���������i���" , true, true, true},
	{15, "����������� ��������� ��i�����", false, true, true},
	{16, "���������� �����i�� ������i���", false, true, false},
	{17, "�������� ���i�� �������i���"   , true, true, true},
	{18, "���i��� ������ ���������"      , true, true, true},
	{19, "��������� ���i� ����i����"      , true, true, true},
	{20, "��������� ����� ����i���"     , false, true, true},
	{21, "�������� �i��� ���������i���"  , false, false, true},
	{22, "����������� �������� ����i����", true, false, false},
	{23, "�i���� ������� ���������i���" , true, true, true},
	{24, "��������� ���i� ���������i���" , false, true, true},
	{25, "������ �i�� ������i���    "        , true, true, true}
	};
	setlocale(LC_ALL, "Rus");
    cout << "�" << "\tI�'�                         \t���.\t�i�.\t����.\n";
	for (j = 0; j < m; j++)
		cout << a[j].number << "\t" << a[j].name << "\t" << a[j].math << "\t" << a[j].physic << "\t" << a[j].english << "\n";
	cout << "-------------------------------------" << endl;
	cout << "���i, ��i �� ������ �������� �i��� �i� ���� �������:\n";
	cout << "�" << "\tI�'�\t���.\t�i�.\t����.\n";
	for (j = 0; j < m; j++)
		if (!((int)a[j].math + (int)a[j].physic + (int)a[j].english > 1))
			cout << a[j].number << "\t" << a[j].name << "\t" << a[j].math << "\t" << a[j].physic << "\t" << a[j].english << "\n";
    cout << "-------------------------------------" << endl;
    return 0;
}



