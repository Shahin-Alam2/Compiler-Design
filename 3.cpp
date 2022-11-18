#include<bits/stdc++.h>
using namespace std;

map<string,string>dept;
map<string,string>year;
map<string,string>semester;
map<string,string>course;
map<string,string>courseType;

void abbreviate(string str)
{
    dept["CSE"]="Computer Science & Engineering";
    dept["ICE"]="Information & Communication Engineering";
    year["1"]="1st Year";
    year["2"]="2nd Year";
    year["3"]="3rd Year";
    year["4"]="4th Year";
    semester["1"]="1st Semester";
    semester["2"]="2nd semester";
    course["1"] = "System Analysis and Design";
	course["2"] = "Database Management System";
	course["3"] = "Digital Signal Processing";
	course["4"] = "Compiler Design";
	course["5"] = "Computer Networks";

	courseType["1"] = "Theory";
	courseType["2"] = "Lab";

	int i=0;
	string temp;
	while(str[i]!='-'){
        temp=temp+str[i];
        i++;
	}
	cout<<dept[temp]<<",";
	i++;
	temp=str[i];
	cout<<year[temp]<<",";
	i++;
	temp=str[i];
	cout<<semester[temp]<<",";
	i++;
	temp=str[i];
	cout<<course[temp]<<",";
	i++;
	temp=str[i];
	cout<<courseType[temp]<<".";
}


int main()
{
    string str;
    cout<<"Enter a string:"<<endl;

    getline(cin,str);
    abbreviate(str);

    return 0;
}
