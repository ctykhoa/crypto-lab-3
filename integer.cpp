//  Defines the entry point for the console application
/*ECC parameters p,a,b, P (or G), n, h where p=h.n*/

/* Source, Sink */
#include "cryptopp/filters.h"
using CryptoPP::StringSource;
using CryptoPP::StringSink;

#include <ctime>
#include <iostream>
#include <string>
using namespace std;

/* Randomly generator*/
#include "cryptopp/osrng.h"
using CryptoPP::AutoSeededRandomPool;

/* Integer arithmatics*/
#include <cryptopp/integer.h>
using CryptoPP::Integer;

#include <cryptopp/nbtheory.h>
using CryptoPP::ModularSquareRoot;

#include <cryptopp/modarith.h> // Z_p
using CryptoPP::ModularArithmetic;

#include <cryptopp/pubkey.h>
using CryptoPP::PublicKey;
using CryptoPP::PrivateKey;
// hex convert
#include <cryptopp/hex.h>
using CryptoPP::HexEncoder;
using CryptoPP::HexDecoder;
#include "cryptopp/osrng.h"
using CryptoPP::AutoSeededRandomPool; //random number generator

// File operation
#include <cryptopp/files.h>
#include <sstream>
using std::ostringstream;

// Set location
#include <locale>
using std::wstring_convert;
#include <codecvt>
using  std::codecvt_utf8;

/* Print large interger number */
string integer_to_string (const CryptoPP::Integer& t);
wstring integer_to_wstring (const CryptoPP::Integer& t);

int main(int argc, char* argv[])
{

}

wstring integer_to_wstring (const CryptoPP::Integer& t)
{
    std::ostringstream oss;
    oss.str("");
    oss.clear();
    oss << t;
    std::string encoded(oss.str());
    std::wstring_convert<codecvt_utf8<wchar_t>> towstring;
    return towstring.from_bytes(encoded);
}

string integer_to_string (const CryptoPP::Integer& t)
{
    std::ostringstream oss;
    oss.str("");
    oss.clear();
    oss << t;
    std::string encoded(oss.str());
    return encoded;
}