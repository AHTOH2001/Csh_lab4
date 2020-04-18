#ifndef STOD_H
#define STOD_H

#include <string>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <array>

using namespace std;

#ifdef __cplusplus
extern "C" {
#endif

#ifdef STOD
#define STOD __declspec(dllexport)
#else
#define STOD __declspec(dllimport)
#endif

#define true 1
#define false 0
#define err -2000123000
#define maxEl 2147483646
double stod(char s[10000]);


#ifdef __cplusplus
}
#endif

#endif