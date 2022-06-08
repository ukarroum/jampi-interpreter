//
// Created by karroum on 07/06/2022.
//
#include <iostream>

#include "Interpreter.h"

using namespace std;

int main(int argc, char *argv[]) {
    if (argc > 2) {
        cout << "JAMPI interpretter:" << endl;
        cout << "===================" << endl;
        cout << "Usage :" << endl;
        cout << "       jampi [source file]" << endl;

        return -1;
    }

    if (argc == 2)
        runSourceFile(argv[1]);
    else if (argc == 1)
        runPrompt();
}