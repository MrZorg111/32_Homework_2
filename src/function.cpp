#include <function.h>

void iteration_dict(nlohmann::json &_dict) {
    AutoIterationMovie autoiterationmovie;
    _dict = {{"Country", autoiterationmovie.country},
            {"Date", autoiterationmovie.date},
            {"Studio", autoiterationmovie.studio},
            {"Name Director", autoiterationmovie.nameDirector},
            {"Name Produce", autoiterationmovie.nameProducer},
            {"Name Written", autoiterationmovie.nameWritten},
            {"Name ActorsCharacter", autoiterationmovie.nameCharActors}};
}

void iteration_data(std::map<std::string, nlohmann::json> &_data, nlohmann::json &_dict) {
    std::string name_movie;
    for(int d = 0; d < 5; d++) {
        std::cout << "Input name movie: " << std::endl;
        std::cin >> name_movie;
        _data.insert(std::pair<std::string, nlohmann::json> (name_movie, _dict));
    }

}
