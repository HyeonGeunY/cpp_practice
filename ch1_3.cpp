#include <iostream>

void print_mice();
void print_run();

using std::cout;
using std::endl;

int main()
{
    print_mice();
    print_mice();
    print_run();
    print_run();

    return 0;
}

void print_mice()
{
    cout << "Three blind mice" << endl;
}

void print_run()
{
    cout << "See how they run" << endl;
}