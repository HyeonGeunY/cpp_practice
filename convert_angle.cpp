#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void convert_angle(int, int, int);

int main()
{

    int h, m, s;

    cout << "������ ��, ��, �� ������ �Է��Ͻÿ�:" << endl;
    cout << "����, ������ �Է��Ͻÿ�: ";
    cin >> h;

    cout << "������, �а��� �Է��Ͻÿ�: ";
    cin >> m;

    cout << "������, �ʰ��� �Է��Ͻÿ�: ";
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

    cout << h << "��, " << m << "��, " << s << "�� = " << h + m_h + s_h << "��" << endl;
}