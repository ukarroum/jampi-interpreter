//
// Created by karroum on 14/06/2022.
//

#ifndef JAMPI_INTERPRETER_TOKEN_H
#define JAMPI_INTERPRETER_TOKEN_H

#include <string>

using namespace std;

enum class TokenType { TOKEN_ADD, TOKEN_SUB, TOKEN_MUL, TOKEN_DIV };

class Token {

public:
    Token(TokenType type): m_type(type) {};

    TokenType m_type;
};


#endif //JAMPI_INTERPRETER_TOKEN_H
