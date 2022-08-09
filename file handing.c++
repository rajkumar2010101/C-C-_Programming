#include<fstream>
int main()
{
	fstream.open("file.txt",ios::out)
	if(!file)
	{
		cout<<"file creation failed";
	}
	else
	{
		cout<<"file creation successfully";
		file<<"This is writing a file";
		file.close()
	}
}