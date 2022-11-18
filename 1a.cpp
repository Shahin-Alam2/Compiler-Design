#include<bits/stdc++.h>

using namespace std;

int is_dig(char ch){
    if(ch>='0'&&ch<='9')return 1;
    return 0;
}
int is_char(char ch){
    if(ch>='A'&&ch<='Z')return 1;
    if(ch>='a'&&ch<='z')return 1;
    return 0;
}

void count(string str){
    int i,word=1,letter=0,digit=0,others=0;

    for(i=0;str[i];i++){
        if(str[i]==' '&&(is_dig(str[i+1])||is_char(str[i+1])))word++;
        if(is_dig(str[i]))digit++;
        if(is_char(str[i]))letter++;
        if(!is_dig(str[i])&&!is_char(str[i]))others++;

    }
    cout<<"Number of Words:"<<word<<endl;
    cout<<"Number of Digits:"<<digit<<endl;
    cout<<"Number of Characters:"<<letter<<endl;
    cout<<"Number of Other Characters:"<<others<<endl;

}

    char sep_ltr[100],sep_dig[100],sep_other[100];
    int markl[100],markd[100],marko[100];
    int i,x,l=0,d=0,o=0;

void separate(string str){



    for(i=0;str[i];i++){
         x=(int)str[i];
        if(is_char(str[i])&&!markl[x]){
            sep_ltr[l++]=str[i];
            markl[x]=1;
        }
        if(is_dig(str[i])&&!markd[x]){
            sep_dig[d++]=str[i];
            markd[x]=1;
        }
        if(!is_char(str[i])&&!is_dig(str[i])&&!marko[x]){
            sep_other[o++]=str[i];
            marko[x]=1;
        }
    }
        sep_ltr[l]='\0';
        sep_dig[d]='\0';
        sep_other[o]='\0';

        cout<<"Separated characters:"<<sep_ltr<<endl;
        cout<<"Separated digits:"<<sep_dig<<endl;
        cout<<"Separated others:"<<sep_other<<endl;
}

int main()
{
    freopen("in1.txt","r",stdin);
    freopen("out1.txt","w",stdout);

    string str;
    getline(cin,str);
    cout<<str<<endl;

    count(str);
    separate(str);

    return 0;
}
