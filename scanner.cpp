//
// Created by karroum on 13/06/2022.
//
#include <sstream>
#include <vector>

#include "scanner.h"

using namespace std;

// I think it may be more efficient to take a vector as ref and add to it
// But for now I prefer not to think about perf
vector<string> scanTokens(string line){
    vector<string> tokens;
    istringstream ss(line);
    string tmp_token;

    while(ss >> tmp_token)
        tokens.push_back(tmp_token);

    return tokens;
}