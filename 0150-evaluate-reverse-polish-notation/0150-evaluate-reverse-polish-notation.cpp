#include<iostream>
#include<string>

class Solution {
    stack<string> s;
public:
    int evalRPN(vector<string>& tokens) {
        for (int i = 0;i<tokens.size();i++){
            if (tokens[i] == "+"||tokens[i] == "-"||tokens[i] == "/"||tokens[i] == "*"){
                int second = stoi(s.top());
                s.pop();
                int first = stoi(s.top());
                s.pop();
                if (tokens[i]== "+"){
                    s.push(to_string(first+second));
                } else if (tokens[i]== "-"){
                    s.push(to_string(first-second));
                } else if (tokens[i]== "/"){
                    s.push(to_string(first/second));
                } else if (tokens[i]== "*"){
                    s.push(to_string(first*second));
                }
            } else{
                s.push(tokens[i]);
            }
        }
        
        return stoi(s.top());
    }
};