
#include "des.h"

#include "md5.h"

#include "sha1.h"
#include "ripemd160.h"
#include <QString>
#include <fstream>

using namespace std;

#define size_max 1024



void MD5( const QString filename_i, const QString filename_o )
{
    FILE *file_i, *file_o;

    file_i = fopen( filename_i.toUtf8().constData(), "rb" );
    file_o = fopen( filename_o.toUtf8().constData(), "wb" );

    MD5_CTX c;
    unsigned char i[size_max] = {0};
    unsigned char o[16];

    unsigned int size = fread(i, 1, size_max, file_i);

    MD5_Init(&c);
    MD5_Update(&c, i, size);
    MD5_Final(o, &c);

    fwrite( o, 1, 16, file_o);

    fclose(file_i);
    fclose(file_o);
}



void SHA1( const QString filename_i, const QString filename_o )
{
    FILE *file_i, *file_o;

    file_i = fopen( filename_i.toUtf8().constData(), "rb" );
    file_o = fopen( filename_o.toUtf8().constData(), "wb" );

    //SHA_CTX c;
    unsigned char i[size_max] = {0};
    unsigned char o[40];


    unsigned int size = fread(i, 1, size_max, file_i);

    string in_str = reinterpret_cast<char*> (i);


    unsigned int j;
    for ( j = 0; j < size; j++ )
    {
        in_str[j] = i[j];
    }


    string out_str = SHA1_MAIN(in_str);

     for (int i=0; i<out_str.size(); i++)
        o[i] = out_str[i];





    fwrite( o, 1, 40, file_o);

    fclose(file_i);
    fclose(file_o);
}

void RIPEMD( const QString filename_i, const QString filename_o )
{
    FILE *file_i, *file_o;

    file_i = fopen( filename_i.toUtf8().constData(), "rb" );
    file_o = fopen( filename_o.toUtf8().constData(), "wb" );

    unsigned char i[size_max] = {0};
    unsigned int size = fread(i, 1, size_max, file_i);

    RIPEMD160 ripemd160;
    ripemd160.compress(i, size);

    fwrite( ripemd160.hash, 1, 20, file_o);

    fclose(file_i);
    fclose(file_o);
}

