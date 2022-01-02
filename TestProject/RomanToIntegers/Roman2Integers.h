#pragma once
#include <string>
class Roman2Integers
{
public:
	Roman2Integers();
	static int convert(const std::string& val);
	static int calc(char val);
	static bool validateInput(const char target);
};

