#include <iostream>

double convert(double);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    cout << "���� ���� �Է��ϰ� Enter Ű�� �����ʽÿ� : ";

    double year;
    cin >> year;

    cout << year << "������ " << convert(year) << " õ�� �����Դϴ�.";

    return 0;
}

double convert(double year)
{
    return year * 63240;
}