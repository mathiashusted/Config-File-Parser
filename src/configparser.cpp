//  Config file parser
//  Mathias Husted 2017

#include <iostream>
#include <fstream>
#include <map>
#include "configparser.h"


ConfigParser::ConfigParser(std::string path) {
	configPath = path;
}

std::string ConfigParser::ReturnPath() {
	return configPath;
}

std::map<std::string, std::string> ConfigParser::Read() {
	std::map<std::string, std::string> cfgStream;

	std::ifstream cfgFile(configPath);

	while (cfgFile) {
		std::string key;
		std::string value;
		
		std::getline(cfgFile, key, ':');
		std::getline(cfgFile, value, '\n');

		cfgStream[key] = value;
	}

	cfgFile.close();

	return cfgStream;
}
