#include <iostream>
#include <vector>
#include "functions_to_implement.cpp"

int main(){
    //join test
    std::vector<std::string> stringVec = {"akj","jkb","jjc","dkk"};
    std::string luhGlue = "APPLE";
    std::string joinResult = Join(stringVec,luhGlue);
    std::cout << joinResult << std::endl;

    //remove 2s
    int numIn = 14;
    std::cout << RemoveTwos(numIn) << std::endl;

    //Even mask
    std::vector<int> intIn = {1,2,3,4,5,6};
    std::vector<bool> result = EvenMask(intIn);
    for(int i = 0; i < result.size(); i++){
        if(result.at(i)){
            std::cout << 1;
        } else {
            std::cout << 0;
        }
    }
    std::cout << std::endl;

}

