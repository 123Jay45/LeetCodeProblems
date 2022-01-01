#include "pch.h"
#include "ClassPalindrom.h"
#include <iostream>

ClassPalindrom::ClassPalindrom() : m_target(0)
{
}

bool ClassPalindrom::isPalindrom()
{
	int remainder = this->getTarget();
	int buf[40];
	if (remainder > 0)
	{
		int index = 0;
		do
		{
			buf[index] = remainder % 10;
			remainder /= 10;
			index++;
		}
		while (remainder > 0);
		for (int i = 0; i < index / 2; i++)
		{
			if (buf[i] != buf[index - i-1])
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

void ClassPalindrom::setTarget(int target)
{
	this->m_target = target;
}

int ClassPalindrom::getTarget()
{
	return m_target;
}
