// Copyright 2021 by Liza
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_
#include <iostream>

template <typename T>
class MyStack {
 private:
unsigned int size;
unsigned int head = 0;
T* value;

 public:
explicit MyStack(int size_) {
size = size_;
value = new T[size];}
MyStack(const MyStack& stack) {
size = stack.size;
value = new T[size];
for (int i = 0; i < size; ++i) {
value[i] = stack.value[i];}
head = stack.head;}
~MyStack() {
delete value;}
T& get() const {
int head_ = head - 1;
return value[head_];}
int getSize() {
return size;}
T& pop() {
head--;
return value[head];}
void push(double num) {
if (head < size) {
value[head] = num;
head++;}}
bool isEmpty() {
if (head == 0) {
return true;}
return false;}
bool isFull() {
if (head == size) {
return true;}
return false;}};
#endif  // INCLUDE_MYSTACK_H_
