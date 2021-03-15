// Copyright 2021 by Liza
#include "postfix.h"
#include "MyStack.h"

int main() {
return 0;
const char* s1 = ("(1 + 2) / (3 + 4 * 6.7) - 5.3 * 4.4");
const char* s2 = infix2prefix(s1);
std::cout << s2;
const char* s3 = ("2 + 6 * 3 / (4 - 2)");
const char* s4 = infix2prefix(s3);
std::cout << s4;
return 0;
}
