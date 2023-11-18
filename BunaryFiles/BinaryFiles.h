#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class BinaryFiles
{
	std::string path;
	rsize_t readpos = 0;
public:
	BinaryFiles();
	BinaryFiles(const std::string& s);
	void setPath(const std::string& s);
	std::string getPath();
	template<class T>
	void write(T& object);
	template<class T>
	void read(T& object);
	template<class T>
	void writeApp(T& object);
	void sbrosPos();
	
};

/// <summary>
/// Перезапись файла, создание нового
/// </summary>
/// <typeparam name="T">Автоматическое определение типа</typeparam>
/// <param name="object">Объект для записи</param>
template<class T>
inline void BinaryFiles::write(T& object)
{
	fstream fs(this->path, ios::out | ios::binary);
	fs.write((char*)&object, sizeof(object));
	fs.close();
}

/// <summary>
/// Чтение элемента
/// </summary>
/// <typeparam name="T">Автоматическое определение типа</typeparam>
/// <param name="object">Объект, в который записывается считанное</param>
template<class T>
inline void BinaryFiles::read(T& object)
{
	
	fstream fs(this->path, ios::in | ios::binary);
	//Смещаемся на количество байт, которые уже считали в прошлый раз
	fs.seekg(this->readpos);
	fs.read((char*)&object, sizeof(object));
	fs.close();
	readpos += sizeof(object);
}

template<class T>
inline void BinaryFiles::writeApp(T& object)
{

	fstream fs(this->path, ios::app| ios::out |ios::binary);
	fs.write((char*)&object, sizeof(object));
	
	fs.close();
}

