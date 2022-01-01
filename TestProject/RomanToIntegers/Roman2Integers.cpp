#include "pch.h"
#include "Roman2Integers.h"

Roman2Integers::Roman2Integers()
{
	__noop;
}

int Roman2Integers::convert(const std::string& target)
{
	int store= 0;
	for (const char i : target)
	{
	store += Roman2Integers::calc(i);
	}
	return store;
}

int Roman2Integers::calc(char val)
{
	switch (val)
	{
	case 'M':
		return 1000;
	case 'D':
		return 500;
	case 'C':
		return 100;
	case 'L':
		return 50;
	case 'X':
		return 10;
	case 'V':
		return 5;
	case 'I':
		return 1;
	default:
		return 0;
	}
}