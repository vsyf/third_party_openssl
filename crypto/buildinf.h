/*
 * WARNING: do not edit!
 * Generated by util/mkbuildinf.pl
 *
 * Copyright 2014-2017 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifdef OPENSSL_ARM64_PLATFORM
#define PLATFORM "platform: android-arm64"
#define DATE "built on: Tue Aug  3 08:25:48 2021 UTC"

/*
 * Generate compiler_flags as an array of individual characters. This is a
 * workaround for the situation where CFLAGS gets too long for a C90 string
 * literal
 */
static const char compiler_flags[] = {
    'c','o','m','p','i','l','e','r',':',' ','a','a','r','c','h','6',
    '4','-','l','i','n','u','x','-','a','n','d','r','o','i','d','-',
    'c','l','a','n','g',' ','-','f','P','I','C',' ','-','p','t','h',
    'r','e','a','d',' ',' ','-','-','s','y','s','r','o','o','t','=',
    '/','h','o','m','e','/','h','u','a','n','g','j','u','n','/','o',
    'p','e','n','s','s','l','/','m','y','-','a','n','d','r','o','i',
    'd','6','4','-','t','o','o','l','c','h','a','i','n','/','s','y',
    's','r','o','o','t',' ','-','W','a',',','-','-','n','o','e','x',
    'e','c','s','t','a','c','k',' ','-','Q','u','n','u','s','e','d',
    '-','a','r','g','u','m','e','n','t','s',' ','-','W','a','l','l',
    ' ','-','O','3',' ','-','D','O','P','E','N','S','S','L','_','U',
    'S','E','_','N','O','D','E','L','E','T','E',' ','-','D','O','P',
    'E','N','S','S','L','_','P','I','C',' ','-','D','O','P','E','N',
    'S','S','L','_','C','P','U','I','D','_','O','B','J',' ','-','D',
    'O','P','E','N','S','S','L','_','B','N','_','A','S','M','_','M',
    'O','N','T',' ','-','D','S','H','A','1','_','A','S','M',' ','-',
    'D','S','H','A','2','5','6','_','A','S','M',' ','-','D','S','H',
    'A','5','1','2','_','A','S','M',' ','-','D','K','E','C','C','A',
    'K','1','6','0','0','_','A','S','M',' ','-','D','V','P','A','E',
    'S','_','A','S','M',' ','-','D','E','C','P','_','N','I','S','T',
    'Z','2','5','6','_','A','S','M',' ','-','D','P','O','L','Y','1',
    '3','0','5','_','A','S','M',' ','-','D','N','D','E','B','U','G','\0'
};
#endif // OPENSSL_ARM64_PLATFORM

#ifdef OPENSSL_ARM_PLATFORM
#define PLATFORM "platform: android-arm"
#define DATE "built on: Tue Aug  3 02:10:27 2021 UTC"

/*
 * Generate compiler_flags as an array of individual characters. This is a
 * workaround for the situation where CFLAGS gets too long for a C90 string
 * literal
 */
static const char compiler_flags[] = {
    'c','o','m','p','i','l','e','r',':',' ','a','r','m','-','l','i',
    'n','u','x','-','a','n','d','r','o','i','d','e','a','b','i','-',
    'c','l','a','n','g',' ','-','f','P','I','C',' ','-','p','t','h',
    'r','e','a','d',' ',' ','-','-','s','y','s','r','o','o','t','=',
    '/','h','o','m','e','/','h','u','a','n','g','j','u','n','/','o',
    'p','e','n','s','s','l','/','m','y','-','a','n','d','r','o','i',
    'd','-','t','o','o','l','c','h','a','i','n','/','s','y','s','r',
    'o','o','t',' ','-','W','a',',','-','-','n','o','e','x','e','c',
    's','t','a','c','k',' ','-','Q','u','n','u','s','e','d','-','a',
    'r','g','u','m','e','n','t','s',' ','-','W','a','l','l',' ','-',
    'O','3',' ','-','D','O','P','E','N','S','S','L','_','U','S','E',
    '_','N','O','D','E','L','E','T','E',' ','-','D','O','P','E','N',
    'S','S','L','_','P','I','C',' ','-','D','O','P','E','N','S','S',
    'L','_','C','P','U','I','D','_','O','B','J',' ','-','D','O','P',
    'E','N','S','S','L','_','B','N','_','A','S','M','_','M','O','N',
    'T',' ','-','D','O','P','E','N','S','S','L','_','B','N','_','A',
    'S','M','_','G','F','2','m',' ','-','D','S','H','A','1','_','A',
    'S','M',' ','-','D','S','H','A','2','5','6','_','A','S','M',' ',
    '-','D','S','H','A','5','1','2','_','A','S','M',' ','-','D','K',
    'E','C','C','A','K','1','6','0','0','_','A','S','M',' ','-','D',
    'A','E','S','_','A','S','M',' ','-','D','B','S','A','E','S','_',
    'A','S','M',' ','-','D','G','H','A','S','H','_','A','S','M',' ',
    '-','D','E','C','P','_','N','I','S','T','Z','2','5','6','_','A',
    'S','M',' ','-','D','P','O','L','Y','1','3','0','5','_','A','S',
    'M',' ','-','D','N','D','E','B','U','G','\0'
};
#endif // OPENSSL_ARM_PLATFORM

#ifdef WINDOWS_PLATFORM
#define PLATFORM "platform: mingw64"
#define DATE "built on: Mon Nov  9 09:38:38 2020 UTC"

/*
 * Generate compiler_flags as an array of individual characters. This is a
 * workaround for the situation where CFLAGS gets too long for a C90 string
 * literal
 */
static const char compiler_flags[] = {
    'c','o','m','p','i','l','e','r',':',' ','g','c','c',' ','-','m',
    '6','4',' ','-','W','a','l','l',' ','-','O','3',' ','-','D','L',
    '_','E','N','D','I','A','N',' ','-','D','O','P','E','N','S','S',
    'L','_','P','I','C',' ','-','D','U','N','I','C','O','D','E',' ',
    '-','D','_','U','N','I','C','O','D','E',' ','-','D','W','I','N',
    '3','2','_','L','E','A','N','_','A','N','D','_','M','E','A','N',
    ' ','-','D','_','M','T',' ','-','D','N','D','E','B','U','G','\0'
};
#endif // WINDOWS_PLATFORM

#ifdef MAC_PLATFORM
#define PLATFORM "platform: darwin64-x86_64-cc"
#define DATE "built on: Fri Nov 27 07:15:02 2020 UTC"

/*
 * Generate compiler_flags as an array of individual characters. This is a
 * workaround for the situation where CFLAGS gets too long for a C90 string
 * literal
 */
static const char compiler_flags[] = {
    'c','o','m','p','i','l','e','r',':',' ','c','c',' ','-','f','P',
    'I','C',' ','-','a','r','c','h',' ','x','8','6','_','6','4',' ',
    '-','O','3',' ','-','W','a','l','l',' ','-','D','L','_','E','N',
    'D','I','A','N',' ','-','D','O','P','E','N','S','S','L','_','P',
    'I','C',' ','-','D','_','R','E','E','N','T','R','A','N','T',' ',
    '-','D','N','D','E','B','U','G','\0'
};
#endif // MAC_PLATFORM

#ifdef OPENSSL_X86_64_PLATFORM
#define PLATFORM "platform: android-x86_64"
#define DATE "built on: Mon Jun 20 03:40:52 2022 UTC"

/*
 * Generate compiler_flags as an array of individual characters. This is a
 * workaround for the situation where CFLAGS gets too long for a C90 string
 * literal
 */
static const char compiler_flags[] = {
    'c','o','m','p','i','l','e','r',':',' ','x','8','6','_','6','4',
    '-','l','i','n','u','x','-','a','n','d','r','o','i','d','-','c',
    'l','a','n','g',' ','-','f','P','I','C',' ','-','p','t','h','r',
    'e','a','d',' ',' ','-','-','s','y','s','r','o','o','t','=','/',
    'h','o','m','e','/','z','h','a','o','z','h','e','n','z','h','o',
    'u','/','w','o','r','k','s','p','a','c','e','/','t','h','i','r',
    'd','_','p','a','r','t','y','_','o','p','e','n','s','s','l','/',
    'o','p','e','n','s','s','l','_','f','r','o','m','_','o','f','f',
    'i','c','a','l','/','n','d','k','/','n','d','k','_','t','o','o',
    'l','_','r','2','1','e','/','n','d','k','_','m','a','c','/','s',
    'y','s','r','o','o','t',' ','-','W','a',',','-','-','n','o','e',
    'x','e','c','s','t','a','c','k',' ','-','Q','u','n','u','s','e',
    'd','-','a','r','g','u','m','e','n','t','s',' ','-','W','a','l',
    'l',' ','-','O','3',' ','-','D','O','P','E','N','S','S','L','_',
    'U','S','E','_','N','O','D','E','L','E','T','E',' ','-','D','O',
    'P','E','N','S','S','L','_','P','I','C',' ','-','D','O','P','E',
    'N','S','S','L','_','C','P','U','I','D','_','O','B','J',' ','-',
    'D','O','P','E','N','S','S','L','_','I','A','3','2','_','S','S',
    'E','2',' ','-','D','O','P','E','N','S','S','L','_','B','N','_',
    'A','S','M','_','M','O','N','T',' ','-','D','O','P','E','N','S',
    'S','L','_','B','N','_','A','S','M','_','M','O','N','T','5',' ',
    '-','D','O','P','E','N','S','S','L','_','B','N','_','A','S','M',
    '_','G','F','2','m',' ','-','D','S','H','A','1','_','A','S','M',
    ' ','-','D','S','H','A','2','5','6','_','A','S','M',' ','-','D',
    'S','H','A','5','1','2','_','A','S','M',' ','-','D','K','E','C',
    'C','A','K','1','6','0','0','_','A','S','M',' ','-','D','R','C',
    '4','_','A','S','M',' ','-','D','M','D','5','_','A','S','M',' ',
    '-','D','A','E','S','N','I','_','A','S','M',' ','-','D','V','P',
    'A','E','S','_','A','S','M',' ','-','D','G','H','A','S','H','_',
    'A','S','M',' ','-','D','E','C','P','_','N','I','S','T','Z','2',
    '5','6','_','A','S','M',' ','-','D','X','2','5','5','1','9','_',
    'A','S','M',' ','-','D','P','O','L','Y','1','3','0','5','_','A',
    'S','M',' ','-','D','N','D','E','B','U','G','\0'
};
#endif // OPENSSL_X86_64_PLATFORM