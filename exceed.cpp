#include <iostream>
#define ZERO 0
#include <climits>

int main()
{
    using namespace std;
    short Dohee = SHRT_MAX;
    unsigned short Insuk = Dohee;

    cout << "������ ���¿��� " << Dohee << "���� ����ְ�, ";
    cout << "�μ����� ���¿��� " << Insuk << "���� ����ִ�." << endl;
    Dohee = Dohee + 1;
    Insuk = Insuk + 1;
    cout << "������ �ܰ�� " << Dohee << "���� �Ǿ��� ,";
    cout << "�μ����� �ܰ�� " << Insuk << "���� �Ǿ���." << endl;
    cout << "�̷�����! ���� �� ���� ������ �߳�?" << endl;
    Dohee = ZERO;
    Insuk = ZERO;
    cout << "������ ���¿��� " << Dohee << "���� ��� �ְ�. ";
    cout << "�μ����� ���¿��� " << Insuk << "���� ��� �ִ�." << endl;
    cout << "������ ���¿��� 1���� �����Ѵ�." << endl
         << "���� ";
    Dohee = Dohee - 1;
    Insuk = Insuk - 1;
    cout << "������ �ܰ�� " << Dohee << "���� �Ǿ���. ";
    cout << "�μ����� �ܰ��" << Insuk << "���� �Ǿ���." << endl;
    cout << "�̷� ����! �μ��̰� ���ǿ� ��÷�Ǿ���?" << endl;
    return 0;
}