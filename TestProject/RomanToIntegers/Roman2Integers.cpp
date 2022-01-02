#include "pch.h"
#include "Roman2Integers.h"

Roman2Integers::Roman2Integers()
{
	__noop;
}

int Roman2Integers::convert(const std::string& target)
{
	int store= 0;
	
	for (int i = 0; i < target.length();i++)
	{
		if((i >= 0) || (i < target.length()))
		{
			int prev = Roman2Integers::calc(target[i]);
			int next = Roman2Integers::calc(target[i+1]);
			store += (prev < next) ? (next - prev) : prev;
			if(prev < next)
			{
				i++;
			}
		}
	}
	return store;
}

int Roman2Integers::calc(char target)
{
	if(Roman2Integers::validateInput(target))
	{
		switch (target)
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
	}else{
		return -1;
	}
}

bool Roman2Integers::validateInput(const char target)
{
	switch (target)
	{
	case 'M':
		return true;
	case 'D':
		return true;
	case 'C':
		return true;
	case 'L':
		return true;
	case 'X':
		return true;
	case 'V':
		return true;
	case 'I':
		return true;
	default:
		return false;
	}
}
