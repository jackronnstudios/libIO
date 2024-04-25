#ifndef FILE_MAKER_HPP
#pragma FILE_MAKER_HPP
#include <vector>
#include <fstream>
#include<iostream>

int create_file(std::string name, std::vector<std::string> text);
std::string read_file(std::string name);
void add_text_to_file(std::string name, std::vector<std::string> text);


#endif