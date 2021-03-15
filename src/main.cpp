// Copyright 2021 by Liza
#include <iostream>
#include <string>
#include "postfix.h"
#include "MyStack.h"


int main() {
return 0;
std::string s1("(1 + 2) / (3 + 4 * 6.7) - 5.3 * 4.4");
std::string s2 = infix2prefix(s1);
std::cout << s2;
std::string s3("2 + 6 * 3 / (4 - 2)");
std::string s4 = infix2prefix(s3);
std::cout << s4;
return 0;
}
