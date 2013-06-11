#include <string>
using namespace std;
#ifndef HEADER_SHA_H
#define HEADER_SHA_H


string SHA1_MAIN(string text);
unsigned int SHA1CircularShift(unsigned int X, int s);
string SHA1IntToHex(unsigned int A);



#endif
