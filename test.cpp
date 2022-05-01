//
// Created by violin on 2022/5/1.
//

#include <iostream>
#include <fstream>
#include "esminiLib.hpp"
#include "esminiRMLib.hpp"

using namespace std;

int main() {
    std::ifstream t("../resources/xosc/cut-in.xosc");
    std::string str((std::istreambuf_iterator<char>(t)), std::istreambuf_iterator<char>());
    SE_InitWithString(str.c_str(), 0, 1, 0, 0); /* if disable display, it won't raise error */
    int time = 10;
    while (time--) {
        SE_StepDT(0.01f);
    }
    SE_Close(); /* if you comment this line, it won't raise error */
}


/* if you comment this class, everything is OK */
class Foo {
public:
    Foo();
//    ~Foo();

private:
    int posHandle;
};


Foo::Foo() {
    posHandle = RM_CreatePosition();
}

//Foo::~Foo() {
//    RM_DeletePosition(posHandle);
//}