#include <iostream>
#include <fstream>			  
#include <chrono>		      
#include <thread>	
#include <string>	
#ifdef _WIN32
#include <Windows.h>
									#else
							#include <unistd.h>
									#endif
							using namespace std;
								 int main() {
								int treeNum = 1;
							string lyricsText = "";
							int ornamentsCount = 25;
						ifstream songOneLyrics("MDYK.txt");
					  string songOne = "Mary Did You Know?";
								int loopIndex = 0;
				   while (getline (songOneLyrics, lyricsText)) {
				 std::cout << lyricsText << std::endl; sleep(500);}
				   while (loopIndex < ornamentsCount) { loopIndex++;
				std::cout <<  "Ornaments Hung: " + to_string(loopIndex) 
								<< std::endl;} 
			   ifstream songTwoLyrics("God Rest Ye Merry Gentlemen.txt");
		  string songNumberTwo = "God Rest Ye, Merry Gentlemen"; string lyrTxt2 
	 = ""; while (getline (songTwoLyrics, lyrTxt2)) {std::cout << lyrTxt2 << std::endl; 
   sleep(500);} auto hangTheLights= [] (int numLights, string colorLights) { std::cout << 
	 "Hanging " + colorLights + " lights on the tree!" << std::endl; std::cout << "" + 
							to_string(numLights) + " "
+ colorLights + " lights hung!" << std::endl; std::cout << "Merry Christmas!" << std::endl;};
						  hangTheLights(500, "Soft Red"); 
						  hangTheLights(500, "Soft White");
	string presOne = "PresentOne"; 					string presTwo = "Present2";
	std::cout << "Wrapping " + presOne				<< std::endl; std::cout << 
	"Wrapping " + presTwo + " with a bow."			<< std::endl; std::cout <<  
	"Placing " + presOne + " and " + presTwo + 		" under the tree!" << std ::endl;} 