//Matthew Julio
//9-7-2020
//This is a file to create a file with no capitalization, punctuation, and capialization and punctuation from the files.

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
	ofstream fout;
	ifstream fin;
	ifstream fina;
	fout.open ("nocaps.txt",ios::app);
	
	if(!fin)
        {
                cout << "Sorry, could not open " << fileName << " for reading." << endl;
                return 0;
        }
        while(fin)
        {
                fin >> stringArray[i];
                i++;
        }
        fin.close();
        return i-1;

	
}
void capialization (string input)
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
}
void punctuation (string input)
{
	char temp;
	for(int i=0; input[i]!='\0'; i++)
	{
		temp=input[i];
                if((temp<='a'&&temp>='z')&&(temp<='A'&&temp>='Z'))
		{
			for(int j=1, input[i+j]!='\0' , j++)
			{
				input[i+j-1]=input[i+j];
			}
		}
	}
}
