# include <iostream>
# include <fstream>
# include <string>

#ifndef SED_HPP
#define SED_HPP

class Sed
{
	public:
		Sed(std::string filename, std::string string1, std::string string2);
		~Sed();

		std::string getString1();
		std::string getString2();
		std::string getFilename();
		void setString1(std::string string);
		void setString2(std::string string);
		void setFilename(std::string filename);

		int replace();
	private:
		std::string filename;
		std::string string1;
		std::string string2;

		std::string strReplace(std::ifstream& input);
};

#endif