#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void convert_time(long);

int main()
{

    cout << "�� ���� �Է��Ͻÿ�: ";
    long s = 0;
    cin >> s;

    convert_time(s);

    return 0;
}

void convert_time(long s)
{
    const long MToS = 60;
    const long HToM = 60;
    const long DToH = 24;

    long min = s / MToS;
    long second = s % MToS;
    long hour = min / HToM;
    min = min % HToM;
    long day = hour / DToH;
    hour = hour % DToH;

    cout << s << "�� = " << day << "��, " << hour << "�ð�, " << min << "��, " << second << "��" << endl;
}
