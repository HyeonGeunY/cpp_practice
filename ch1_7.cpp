#include <iostream>

void print_time(int, int);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    cout << "�ð� ���� �Է��Ͻÿ�: ";
    int time;
    cin >> time;
    cout << endl;
    cout << "�� ���� �Է��Ͻÿ� ";
    int minute;
    cin >> minute;
    cout << endl;

    print_time(time, minute);

    return 0;
}

void print_time(int time, int minute)
{
    using std::cout;
    using std::endl;

    cout << "�ð� " << time << ":" << minute << endl;
}
