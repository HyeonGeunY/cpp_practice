#include <iostream>
#include <climits>

int main()
{
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int�� " << sizeof(int) << " ����Ʈ�̴�." << endl;
    cout << "short�� " << sizeof n_short << " ����Ʈ�̴�." << endl
         << endl;
    cout << "long �� " << sizeof n_long << " ����Ʈ�̴�." << endl;
    cout << endl;

    cout << "�ִ�:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl
         << endl;
    cout << "long long: " << n_llong << endl
         << endl;
    cout << "int �ּڰ� = " << INT_MIN << endl;
    cout << "����Ʈ �� ��Ʈ �� = " << CHAR_BIT << endl;
    return 0;
}