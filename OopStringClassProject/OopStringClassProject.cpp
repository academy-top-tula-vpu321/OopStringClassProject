#include <iostream>
#include "String.h"

int main()
{
    String s1;
    String s2("Hello world");
    String s3(s2);
    String s4('$');
    String s5("*", 5);

    std::cout << s1 << "\n";
    std::cout << s2 << "\n";
    std::cout << s3 << "\n";
    std::cout << s4 << "\n";
    std::cout << s5 << "\n";
}
