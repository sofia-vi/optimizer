#include <iostream>
#include <nlohmann/json.hpp>
#include <fstream>



int main() {
    using json = nlohmann::json;

    std::ifstream i(R"(C:\Users\sofyv\CLionProjects\untitled1\JSON\q1.json)");
    json data = json::parse(i);
    std::cout << data.contains("name") << std::endl;
    std::cout<< "Hello, World!" << std::endl;
    return 0;

}
