#include <iostream>

int main(){

 std::string words;
 std::getline(std::cin, words);

 std::cout << words << std::endl;

 for(int i = 0; i < words.length(); i++){
  if(words[i] == ' ')
	words[i] = '\n';
	//std::cout << "Space in index: " << i << std::endl;
 }
 std::cout << words << std::endl;
 return 0;
}
