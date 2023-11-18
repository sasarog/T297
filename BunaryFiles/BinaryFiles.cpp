#include <iostream>
#include <fstream>
#include "BinaryFiles.h"


BinaryFiles::BinaryFiles()
{
}

BinaryFiles::BinaryFiles(const std::string& s)
{
	this->path = s;
}

void BinaryFiles::setPath(const std::string& s)
{
	this->path = s;
}

std::string BinaryFiles::getPath()
{
	return this->path;
}

void BinaryFiles::sbrosPos()
{
	this->readpos = 0;
}

