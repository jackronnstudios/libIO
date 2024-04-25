#include <iostream>
#include <vector>
#include "../Include/file_maker.hpp"


int create_file(std::string name, std::vector<std::string> text) {
    std::ofstream file(name);

    if (file.is_open()){
        for (std::string line : text) {
            file << line;
        }
        file.close();
        std::cout << "File '" << name << "' created succesfully!" << std::endl;
    } else {
        std::cerr << "Couldn't create file.\n";
        return 1;
    }
    return 0;
}


// Read file


std::string read_file(std::string name) {

    std::ifstream file(name);

    if (!file.is_open()) {
        std::cerr << "Couldn't open file" << std::endl;
        file.close();
        return NULL;
    }


    std::vector<std::string> lines;
    std::string line;

    while (std::getline(file, line)) {
        lines.push_back(line);
    }

    // Join the string

    std::string text;

    for (std::string l : lines){
        text += l + "\n";
    }

    return text;
}

void add_text_to_file(std::string name, std::vector<std::string> text) {
    std::ofstream file(name, std::ios::app);

    if (!file.is_open()){
        std::cerr << "Error opening file.\n";
        file.close();
        return;
    }

    for (std::string line : text) {
        file << line + "\n";
    }
    std::cout << "File edited succesfully!";
}
