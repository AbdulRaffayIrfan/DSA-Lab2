#include"Lib.h"
using namespace std;

void analyze_pointer(int *ptr) {
    printf("Memory Location of pointer: %p\n", ptr);
    std::print("Value at pointer: {}\n", *ptr);
}

int main()
{
    int val= 69420;
    analyze_pointer(&val);
    
    int* pt = new int(67789);
    analyze_pointer(pt);

    delete pt;

    return 0;
}