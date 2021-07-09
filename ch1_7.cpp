#include <iostream>

void print_time(int, int);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    cout << "시간 값을 입력하시오: ";
    int time;
    cin >> time;
    cout << endl;
    cout << "분 값을 입력하시오 ";
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

    cout << "시각 " << time << ":" << minute << endl;
}
