#pragma once
#include <fstream>
#include "Automobile.h"

class FileManager
{
public:
	FileManager();
	virtual ~FileManager();

	void Read();
	void Write();
	void Save();
	void Load();

private:

};

