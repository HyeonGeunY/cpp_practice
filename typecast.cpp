#include <iostream>

int main()
{
    using namespace std;

    int auks, bats, coots;

    auks = 19.99 + 11.99;

    bats = (int)19.99 + (int)11.99;
    coots = int(19.99) + int(11.99);

    cout << "�ٴٿ��� = " << auks << ", ���� = " << bats;
    cout << ", �˵տ��� = " << coots << endl;

    char ch = 'Z';
    cout << "�ڵ� " << coots << " �� ���� ";
    cout << int(ch) << endl;
    cout << "�� , �ڵ� Z�� ���� ";
    cout << static_cast<int>(ch) << endl;
    return 0;
}