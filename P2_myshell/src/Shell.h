#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "Command.h"
#include "Utility.h"

std::string parse_input(const std::string&);

struct Shell {

	bool running;
	std::vector<Command*> cmdList;

	//Environment variables
	std::string ps = "myshell> ";

	std::string root = "/";
	std::vector<std::string> paths = {"/bin/","/usr/bin/"};

	void prompt_input(std::string &input,bool read_from_file) {
		if(!read_from_file) std::cout << this->ps << std::flush;
		std::getline(std::cin,input);
	}

	void parse_input(const std::string&);

	//return command by name or nullptr
	Command* find_command(const std::string&);

	Shell();

	~Shell() {
		for(int i=0;i<this->cmdList.size();i++) {
			delete this->cmdList.at(i);
		}
	}

};
