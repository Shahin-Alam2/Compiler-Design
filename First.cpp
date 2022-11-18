#include<bits/stdc++.h>
using namespace std;

int is_char(char ch){
    if(ch>='A'&&ch<='Z')return 1;
    if(ch>='a'&&ch<='z')return 1;

    return 0;
}
int is_digit(char ch){
    if(ch>='0'&&ch<='9')return 1;
    return 0;
}

void count(string str){

    int word_cnt=1,letter_cnt=0,digit_cnt=0,others=0;
    for(int i=0;i<str.size();i++){
      if(str[i]==' '&&(is_char(str[i+1])||is_digit(str[i+1])))word_cnt++;
      if(is_char(str[i]))letter_cnt++;
      if(is_digit(str[i]))digit_cnt++;
      if(!is_char(str[i])&&!is_digit(str[i]))others++;
    }
    cout<<"Number of words: "<<word_cnt<<endl;
    cout<<"Number of letters: "<<letter_cnt<<endl;
    cout<<"Number of digits: "<<digit_cnt<<endl;
    cout<<"Number of others characters: "<<others<<endl;
}
void sep(string str){
    char sep_letter[200],sep_digit[200],sep_char[200];
    int l=0,d=0,c=0;

    for(int i=0;i<str.size();i++){
        if(is_char(str[i])){
            sep_letter[l++]=str[i];
        }
        if(is_digit(str[i])){
            sep_digit[d++]=str[i];
        }
        if((!is_char(str[i])&&!is_digit(str[i]))){
            sep_char[c++]=str[i];
        }
    }
    cout<<"All letters: "<<sep_letter<<endl;
    cout<<"All digits: "<<sep_digit<<endl;
    cout<<"Others: "<<sep_char<<endl;
}


int main(){

string str;
freopen("input1.txt","r",stdin);
freopen("output1.txt","w",stdout);

getline(cin,str);
cout<<str<<endl;
count(str);
sep(str);

return 0;
}
