#include<bits/stdc++.h>
using namespace std;

int is_char(char ch){
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))return 1;
    return 0;
}
int is_vowel(char ch){
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')return 1;
    return 0;
}

    int i,x,j=0,k=0,v=0,c=0,markv[100],markc[100];
    char vowel[200],cons[200];
void count(string str){

    for(i=0;str[i];i++){
            x=(int)str[i];
        if(is_char(str[i])){
        if(is_vowel(str[i])){
                v++;
                if(!markv[x]){  // ei x char ta vowel mark kora naki ta check
                    vowel[j++]=str[i];
                    markv[x]=1;
                }
        }
        else {
                c++;
                if(!markc[x]){
                    cons[k++]=str[i];
                    markc[x]=1;
                }
       }
    }
  }
    cout<<"Number of Vowels:"<<v<<endl;
    cout<<"Number of Consonants:"<<c<<endl;
    cout<<"Vowels:"<<vowel<<endl;
    cout<<"Consonants:"<<cons<<endl;
}

void separate(string str){
    int i,j=0,k=0;
    char strV[200],strCns[200];
    for(i=0;str[i];i++){
        if(is_char(str[i])){  //str[i] char kina check
         if(is_vowel(str[i])){  //str[i] vowel hole eta te dhukbe
            while(str[i]!=' '&&str[i]!='\0'){
                strV[j++]=str[i++];
            }
            i--;
            strV[j++]=' ';
        }
        else {
            while(str[i]!=' '&&str[i]!='\0'){
                strCns[k++]=str[i++];
            }
            i--;
            strCns[k++]=' ';
          }
        }
    }
        strV[j++]='\0';
        strCns[k++]='\0';
    cout<<"Started with vowel:"<<strV<<endl;
    cout<<"Started with consonats:"<<strCns<<endl;
}

int main()
{
    freopen("in2.txt","r",stdin);
    freopen("out2.txt","w",stdout);

    string str;
    getline(cin,str);

    cout<<str<<endl;
    count(str);
    separate(str);

    return 0;
}
