#include <iostream>

double convert_to_f(double);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    double temp_c;
    double temp_f;

    cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오.: ";
    cin >> temp_c;
    temp_f = convert_to_f(temp_c);
    cout << "섭씨 " << temp_c << "도는 화씨로 " << temp_f << "도입니다." << endl;

    return 0;
}

double convert_to_f(double temp)
{
    return 1.8 * temp + 32.0;
}