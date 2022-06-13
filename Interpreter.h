//
// Created by karroum on 07/06/2022.
//

#ifndef JAMPI_INTERPRETER_INTERPRETER_H
#define JAMPI_INTERPRETER_INTERPRETER_H

#include <string>

using namespace std;

class Interpreter {

};

void runSourceFile(const string& source_filename);
void runPrompt();
void runLine(const string& line);

#endif //JAMPI_INTERPRETER_INTERPRETER_H
