#include <iostream>

void convert(int);

using std::cin;
using std::cout;
using std::endl;

int main()
{

    cout << "센티미터를 입력하세요 : ______\b\b\b\b\b\b";
    int key = 0;

    cin >> key;

    convert(key);

    return 0;
}

void convert(int key)
{

    const int centi_to_miter = 100;

    int miter = 0;
    int centi = 0;

    miter = key / centi_to_miter;
    centi = key % centi_to_miter;

    cout << key << "센티미터는 " << miter << "미터 " << centi << "센치 입니다.";
}