#include <iostream>

double convert(double);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    cout << "광년 수를 입력하고 Enter 키를 누르십시오 : ";

    double year;
    cin >> year;

    cout << year << "광년은 " << convert(year) << " 천문 단위입니다.";

    return 0;
}

double convert(double year)
{
    return year * 63240;
}