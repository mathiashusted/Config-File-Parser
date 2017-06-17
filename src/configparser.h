//  Config file parser
//  Mathias Husted 2017

#include <map>
#include <string>

class ConfigParser {
public:
	ConfigParser(char* path);

	std::map<std::string, std::string> ConfigParser::Read();

	std::string ReturnPath();

private:
	std::string configPath;
};
