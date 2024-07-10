#include <iostream>
#include "function.h"
#include <string>
#include <map>
#include <vector>
#include <nlohmann/json.hpp>

void iteration_dict(nlohmann::json& _dict, std::vector<Movie>& _movies){
  
   if (!_dict.empty()) {
      auto struct_t = Movie();
      for(auto it = _dict.begin(); it != _dict.end(); it++) {
         struct_t.film = it.key();
         struct_t.country = it.value()["Country"];
         struct_t.date  = it.value()["Date"];
         struct_t.studio = it.value()["Studio"];
         struct_t.director = it.value()["Name Director"];
         struct_t.writter = it.value()["Name Writter"];
         struct_t.producer = it.value()["Name Producer"];
         struct_t.actorsCharacter = it.value()["ActorsCharacters"];
          _movies.push_back(struct_t);
      }
   }
   else {
      std::cout << "Dict empty!" << std::endl;
   }
}


void finder(std::string find_name, Movie& _movies){
   bool check = "false";
   for(std::map<std::string, std::string> ::iterator it = _movies.actorsCharacter.begin(); it != _movies.actorsCharacter.end(); it++) {
      if(!_movies.actorsCharacter.empty()) {
         if (it->second == find_name) {
            std::cout << "\t--Actor " << it->second << " played a role " << it->first << " in the movie " << _movies.film << std::endl;
            check = "true";
         }
      }  
      else {
         std::cout << "Map empty!" << std::endl;
      }
   }
   if (!check) {
      std::cout << "\t--The desired actor has not been found, as well as such a character is not known!" << std::endl;
   }
}