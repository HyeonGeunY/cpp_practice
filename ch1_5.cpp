#include <iostream>

double convert_to_f(double);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    double temp_c;
    double temp_f;

    cout << "���� �µ��� �Է��ϰ� Enter Ű�� �����ʽÿ�.: ";
    cin >> temp_c;
    temp_f = convert_to_f(temp_c);
    cout << "���� " << temp_c << "���� ȭ���� " << temp_f << "���Դϴ�." << endl;

    return 0;
}

double convert_to_f(double temp)
{
    return 1.8 * temp + 32.0;
}