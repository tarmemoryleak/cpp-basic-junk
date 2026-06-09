#include <iostream>
#include <string>
#include <vector>
#include <utility>

class TARDatabase{
private:
    std::vector<std::pair<std::string, std::string>> data;

public:
    void data_insert(const std::string& key, const std::string& value){
        data.push_back(std::make_pair(key, value));
    }
    std::string get_data(const std::string& key){
        for (size_t i = 0; i < data.size(); ++i) {
            if(data[i].first == key) {
                return data[i].second;

            }
        }
        return "Not Found";
    }


    void delete_data(const std::string& key, const std::string& value){
       
    }

    std::string remove_data(const std::string& key){
        for (size_t i = 0; i < data.size(); ++i){
            if(data[i].first == key){ 
                for(size_t j = i + 1; j < data.size(); ++j){
                    data[j - 1] = data[j];
                }
                data.pop_back();
                return "Data Deleted";
            }
        }
        return "Not Found";
    }
};

    
    
int main()
{
    TARDatabase database;
    std::string delete_key;
    database.data_insert("TAR-01", "AI");
    database.data_insert("PROJECTS", "LEARNING");
    database.data_insert("TAR-OS", "TESTING");
    database.data_insert("CODING", "BAD");
    std::cout<<"Searching for TAR-01: " << database.get_data("TAR-01")<<std::endl;
    std::cout<<"Searching for PROJECTS: " << database.get_data("PROJECTS")<<std::endl;
    std::cout<<"Searching for GOOD AT CODING?: " << database.get_data("CODING")<<std::endl;
    std::cout<<"Wanna remove data?: " <<std::endl;
    std::cin >> delete_key;
    std::cout<< "Result: " << database.remove_data(delete_key) << std::endl;
    return 0;

}
