//
// Created by karroum on 13/06/2022.
//
#include <sstream>
#include <vector>
#include <stdexcept>

#include "scanner.h"
#include "Token.h"

using namespace std;

// I think it may be more efficient to take a vector as ref and add to it
// But for now I prefer not to think about perf
vector<Token> scanTokens(string line){
    vector<Token> tokens;
    istringstream ss(line);
    string tmp_token;

    while(ss >> tmp_token){
        if(tmp_token == "+")
            tokens.emplace_back(TokenType::TOKEN_ADD);
        else if(tmp_token == "-")
            tokens.emplace_back(TokenType::TOKEN_SUB);
        else if(tmp_token == "*")
            tokens.emplace_back(TokenType::TOKEN_MUL);
        else if(tmp_token == "/")
            tokens.emplace_back(TokenType::TOKEN_DIV);
        else
            throw invalid_argument("bad token");
    }

    return tokens;
}