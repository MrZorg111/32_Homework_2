#include <iostream>
#include <string>
#include <map>
#include <nlohmann/json.hpp>
#include "function.h"

/*
��������� ������ ������ �� ������ �1, �������� JSON-��������, �� ������ ��� ��� ���� ��������� ��������. 
����� � ���� JSON-���� ������ ������ ���� ���������� �������, � ���������� ������� ��� ������� � ����������� � ��������.

��������� ���� ������ � C++-��������� ��� ������������ �������. 
������������� ��������� ����������: ����� ����� �� ����� (��� �������) � ����� � ������� �������� ��������, 
� ������� �������� ����, � ����, ������� �� ��������.
*/

int main() {
    nlohmann::json auto_dict;
    std::map<std::string, nlohmann::json> auto_data_base;
    iteration_dict(auto_dict);
    iteration_data(auto_data_base, auto_dict);

    std::cout << auto_data_base.size();    

    
  return 0;  
}




//##########################################################################

/*

for(std::map<std::string, nlohmann::json> :: iterator it = auto_data_base.begin(); it != auto_data_base.end(); it++) {
        std::cout << it->first << "\t\t" << it->second << std::endl;
    }
*/