//
// Created by karroum on 07/06/2022.
//

#include <iostream>
#include <fstream>

#include "Interpreter.h"
#include "scanner.h"

using namespace std;

void runSourceFile(const string &source_filename) {
    ifstream source_file{source_filename};

    string line;

    if (source_file.is_open()) {
        while (getline(source_file, line))
            runLine(line);
    } else {
        cerr << "Unable to open file :" << source_filename << endl;
    }
}

void runPrompt() {
    string line;

    cout << ">> ";

    while (getline(cin, line)) {
        runLine(line);
        cout << ">> ";
    }
}

void runLine(const string& line){
    // Scaning
    auto tokens = scanTokens(line);
}