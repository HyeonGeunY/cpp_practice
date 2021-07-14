#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void convert_angle(int, int, int);

int main()
{

    int h, m, s;

    cout << "위도를 도, 분, 초 단위로 입력하시오:" << endl;
    cout << "먼저, 도각을 입력하시오: ";
    cin >> h;

    cout << "다음에, 분각을 입력하시오: ";
    cin >> m;

    cout << "끝으로, 초각을 입력하시오: ";
    cin >> s;

    convert_angle(h, m, s);

    return 0;
}

void convert_angle(int h, int m, int s)
{
    const double m_to_h = 1. / 60.;
    const double s_to_m = 1. / 60.;

    double m_h, s_h;

    m_h = m * m_to_h;
    s_h = s * s_to_m * m_to_h;

    cout << h << "도, " << m << "분, " << s << "초 = " << h + m_h + s_h << "도" << endl;
}