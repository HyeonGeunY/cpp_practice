#include <iostream>

using namespace std;

int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "�մ� ���Ŵ� �Ѹ���� ���� �ݴϴ�!" << endl;
    cout << "�����ѷ� " << chest << " (10����)" << endl;
    cout << hex;
    cout << "�㸮�ѷ� " << waist << " (16����)" << endl;
    cout << oct;
    cout << "�νɱ��� " << inseam << " (8����)" << endl;
    return 0;
}