// Copyright 2021 by Liza
#include <iostream>
#include "postfix.h"
#include "MyStack.h"
int priori(char z) {
if (z == '(') return 0;
else if (z == ')') return 1;
else if ((z == '+') || (z == '-')) return 2;
else if ((z == '/') || (z == '*')) return 3;
if (((z >= '0') && (z <= '9')) || (z == '.')) return 4;
else
return 10;}
std::string infix2prefix(std::string infix) {
MyStack<char> operand(infix.size());
const char* prefix = "";
for (char i : infix) {
if (priori(i) == 5) {
prefix = prefix + i;
} else
if ((i == '(') || ((priori(i) != 10) && (operand.isEmpty()))) {
operand.push(i);
} else
if (i == ')') {
while ((operand.get() != '(') && (!operand.isEmpty())) {
prefix = prefix + operand.pop();}
operand.pop();
} else
if (priori(i) == 10) {
i = i;
} else
{
if (priori(operand.get()) < priori(i)) {
operand.push(i);}
else {
while (priori(operand.get()) >= priori(i)) {
if (operand.isEmpty()) break;
prefix = prefix + operand.pop();}
operand.push(i);}}}
while (!operand.isEmpty())
prefix = prefix + operand.pop();
return prefix;}
