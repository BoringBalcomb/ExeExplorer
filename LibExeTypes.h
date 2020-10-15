#pragma once

#ifndef __LIBEXETYPES__
#define __LIBEXETYPES__

/*
Borland C++ Version 3.1 Programmer's Guide (1992)
Chapter 1: Lexical Elements
Page 19 (PDF Page 34)
Table 1.9: Data types, sizes, and ranges
Type			Size (bits)		Range								Sample applications
unsigned char	8				0 to 255							Small numbers and full PC character set
char			8				-128 to 127							Very small numbers and ASCII characters
enum			16				-32,768 to 32,767					Ordered sets of values
unsigned int	16				0 to 65,535							Larger numbers and loops
short int		16				-32,768 to 32,767					Counting, small numbers, loop control
int				16				-32,768 to 32,767					Counting, small numbers, loop control
unsigned long	32				0 to 4,294,967,295					Astronomical distances
long			32				-2,147,483,648 to 2,147,483,647		Large numbers, populations
float			32				3.4 x 10^-38 to 3.4 x 10^38			Scientific (7 -digit precision)
double			64				1.7 x 10^-308 to 1.7 x 10^308		Scientific (15-digit precision)
long double		80				3.4 x 10^-4932 to 1.1 x 10^4932		Financial (19-digit precision)
near pointer	16				Not applicable						Manipulating memory addresses
far pointer		32				Not applicable						Manipulating addresses outside current segment
*/

// typedef unsigned char		BOOL;   //  8 bit, 1 byte  [SEE: minwindef.h]
typedef unsigned char		BYTE;   //  8 bit, 1 byte
// typedef unsigned char		CHAR;   //  8 bit, 1 byte  [SEE: winnt.h]
typedef unsigned short int	WORD;   // 16 bit, 2 byte
typedef unsigned long int	DWORD;  // 32 bit, 2 byte
typedef signed long int		LONG;   // 32 bit, 2 byte

#endif  // __LIBEXETYPES__
