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
	{ 1, "Новикова Ада Макаровна"      , true, true, true},
	{ 2, "Наумова Мартина Валерьяновна"        , true, true, true},
	{ 3, "Нестеров Иннокентий Адольфович"      , true, true, true},
	{ 4, "Киселёв Владлен Никитевич", false, true, false},
	{ 5, "Григорьева Малика Львовна"    , false, true, true},
	{ 6, "Гришина Верона Матвеевна"        , true, false, true},
	{ 7, "Гущина Изольда Протасьевна"    , true, true, true},
	{ 8, "Морозова Ивона Лукьевна"   , true, true, true},
	{ 9, "Тимофеева Томила Оскаровна"  , true, true, true},
	{10, "Денисова Августина Данииловна"      , true, true, true},
	{11, "Мясникова Вида Вячеславовна"         , true, true, false},
	{12, "Кононов Андрей Авдеевич"   , true, false, false},
	{13, "Ершова Евдокия Еремеевна" , true, true, true},
	{14, "Елисеева Диана Ивановна" , true, true, true},
	{15, "Молчанов Осип Еремеевич", false, true, true},
	{16, "Никитина Эмма Тимофеевна", false, true, false},
	{17, "Исаев Власий Дмитрьевич"   , true, true, true},
	{18, "Белозёров Владимир Вениаминович"      , true, true, true},
	{19, "Константинова Залина Натановна"      , true, true, true},
	{20, "Полякова Сима Никитевна"     , false, true, true},
	{21, "Матвеев Ибрагил Федосеевич"  , false, false, true},
	{22, "Миронов Вячеслав Матвеевич", true, false, false},
	{23, "Сорокина Дарья Петровна" , true, true, true},
	{24, "Юдина Дарья Куприяновна" , false, true, true},
	{25, "Ларионова Милда Альвиановна"        , true, true, true}
	};
	setlocale(LC_ALL, "Rus");
    cout << "№" << "\tIм'я                         \tМат.\tФiз.\tАнгл.\n";
	for (j = 0; j < m; j++)
		cout << a[j].number << "\t" << a[j].name << "\t" << a[j].math << "\t" << a[j].physic << "\t" << a[j].english << "\n";
	cout << "-------------------------------------" << endl;
	cout << "Ученики, которые не смогли выполнить более чем один предмет:\n";
	cout << "№" << "\tIм'я\tМат.\tФiз.\tАнгл.\n";
	for (j = 0; j < m; j++)
		if (!((int)a[j].math + (int)a[j].physic + (int)a[j].english > 1))
			cout << a[j].number << "\t" << a[j].name << "\t" << a[j].math << "\t" << a[j].physic << "\t" << a[j].english << "\n";
    cout << "-------------------------------------" << endl;
    return 0;
}



