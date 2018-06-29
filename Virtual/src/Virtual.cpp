//============================================================================
// Name        : Virtual.cpp
// Author      : David Gilkeson
// Version     :
// Copyright   : CS264
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class C{
public:
C(){ cout << " C "; };
virtual ~C() { cout << " ~C "; };
};
class D{
public:
D(){ cout << " D "; };
virtual ~D() { cout << " ~D "; };
};
class A{
public:
A(){ cout << " A "; };
virtual ~A() { cout << " ~A "; };
protected:
C c;
};
class E{
public:
E(){ cout << " E "; };
virtual ~E(){ cout << " ~E "; };
protected:
C c;
};
class B: public A{
public:
B(){ cout << " B "; };
virtual ~B(){ cout << " ~B "; };
protected:
D d;
E e;
};
int main(){
B b;
}
