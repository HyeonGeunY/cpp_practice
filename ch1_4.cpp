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

    cout << "이떄 당신의 나이를 월수로 나타낼 경우 " << year * 12 << "입니다." << endl;
}
