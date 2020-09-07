//Matthew Julio
//9-7-2020
//This will take the unputted series of letters and check to see if they are in a file

#include <iostream>
#include <string>

#define NUMBER_OF_WORDS 1000

using namespace std;

int scanwords.txt (string words, string input)
int scanwords_alpha.txt (string words, string input)

int main (int argc, char *argv[], char *envp[])
{
	string fromWords[NUMBER_OF_WORDS], fromAlpha[NUMBER_OF_WORDS], input;
	int numbWordsText, numbWordsAlpha;

	if(argc!=2)
	{
		cout << "unable to interprit" << endl << "Proper use:" << endl << "anogramChecker letters" << endl;
	}
	input=changeCase(argv[1]);
	numbWordsText=scanwords.txt (fromWords, );
	numbWordsAlpha=scanwords_alpha.txt (fromAlpha, argv[1], );
}

string changeCase (string input)
{
	char temp;
	for(int i=0; input[i]!='\0'; i++)
	{
		temp=input[i]
                if(temp>='a')
		{
			temp=temp-32;
			input[i]=temp;
		}
	}
	return input;
}

int scanwords.txt (string words, string input)
{
}

int scanwords_alpha.txt (string words, string input)
{
}
