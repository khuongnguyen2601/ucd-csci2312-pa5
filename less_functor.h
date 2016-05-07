//
// Created by kai on 5/6/16.
//

#ifndef UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_LESS_FUNCTOR_H

#include <iostream>
#include <cstring>

using namespace std;

namespace W{
    template <typename T>
    class less{
    public:
        less(){ };
        bool operator() (const T &lhs, const T &rhs){
            return (lhs < rhs);
        };
    };

    template <>
    class less<const char*>{
    public:
        less(){};
        bool operator()(const char* lhs, const char* rhs){
            return (strcmp(lhs,rhs) < 0);
        };
    };
    template <>
    class less<string>{
    public:
        less(){};
        bool operator()(const string &lhs, const string &rhs){
            return (lhs < rhs);
        };
    };
}
#endif //UCD_CSCI2312_PA5_LESS_FUNCTOR_H
