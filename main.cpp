#include <iostream>
#include <fstream>

#define wordSerchFile "/workspaces/crossWord/wordSearch.txt"

int currentFrameX;
int currentFrameY;
std::string getWord(){
    std::string word;
    
    std::cout<<"what word do you wanna fine?\n";

    std::cin>>word;

    return word;
}

int main(){
    std::string testWord = getWord();

    std::fstream wordSerch(wordSerchFile);

    std::string line;

    getline(wordSerch, line);

    std::cout<<line<<"\n";
}