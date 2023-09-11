#include "Sed.hpp"

Sed::Sed(std::string filename, std::string string1, std::string string2)
	: filename(filename), string1(string1), string2(string2) {};

Sed::~Sed(){};

int Sed::replace()
{
	std::ofstream output;
	std::ifstream input;

	if(filename.empty() || string1.empty() || string2.empty())
	{
		std::cerr << "Error: empty argument" << std::endl;
		return (1);
	}

	input.open(filename.c_str(), std::fstream::in);
	if (input.is_open() == false) {
		std::cerr << "Error: could not open \"" << filename << std::endl;
		return 1;
	}

	output.open((filename + ".replace").c_str(), std::fstream::out);
	if (input.is_open() == false) {
		std::cerr << "Error: could not open \"" << filename << ".replace" << std::endl;
		return 1;
	}
	output << strReplace(input);
	
	input.close();
	output.close();
	return (0);
}

std::string Sed::strReplace(std::ifstream& input)
{
	std::string inText;
	std::string outText;
	std::string s1 = getString1();
	std::string s2 = getString2();
	size_t start = 0;
	size_t end = 0;
	char  buff = 0;

	while(input.read(&buff, 1))
		inText += buff;
	while(true)
	{
		start = inText.find(s1, end);
		if(start == std::string::npos)
			break;
		outText += inText.substr(end, start - end);
		end = start + s1.size();
		outText += s2;
	}

	if(outText.empty())
		outText = inText;
		
	return (outText);
}

std::string Sed::getString1()
{
	return (string1);
}

std::string Sed::getString2()
{
	return (string2);
}

std::string Sed::getFilename()
{
	return (filename);
}

void Sed::setString1(std::string string)
{
	string1 = string;
}

void Sed::setString2(std::string string)
{
	string2 = string;

}
void Sed::setFilename(std::string filename)
{
	this->filename = filename;
}