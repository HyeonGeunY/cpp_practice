#include <iostream>

void convert(int);

using std::cin;
using std::cout;
using std::endl;

int main()
{

    cout << "��Ƽ���͸� �Է��ϼ��� : ______\b\b\b\b\b\b";
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

    cout << key << "��Ƽ���ʹ� " << miter << "���� " << centi << "��ġ �Դϴ�.";
}