#include <iostream>

void convert_to_month(int);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    int year;

    cout << "Enter your age : ";
    cin >> year;

    convert_to_month(year);

    return 0;
}

void convert_to_month(int year)
{
    using std::cout;
    using std::endl;

    cout << "�̋� ����� ���̸� ������ ��Ÿ�� ��� " << year * 12 << "�Դϴ�." << endl;
}
