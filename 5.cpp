#include<bits/stdc++.h>
using namespace std;

char str[100];
bool isOther()
{
    for(int i=0;str[i];i++){
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')||(str[i]>='0'&&str[i]<='9')||str[i]=='.'){
            continue;
        }
        else return 1;
    }
    return 0;

}
bool isFloat()
{
    int i,cn=0;
    for(i=0;str[i]!='.';i++){
     if(str[i]=='.')continue;
     if(str[i]<'0'&&str[i]>'9')return 0;
    }
    for(i++;str[i];i++){
        if(str[i]<'0'&&str[i]>'9')return 0;
        cn++;
    }
    return cn;
}

int main()
{
    cin>>str;
    int ln=strlen(str);

    if(isOther()){
        puts("Undefined");
    }
    else if((str[0]>'a'&&str[0]<'h')||(str[0]>'A'&&str[0]<'H')||(str[0]>'o'&&str[0]<'z')||(str[0]>'O'&&str[0]<'Z')){
        puts("Float variable");
    }
    else if((isFloat()==2||isFloat()==1)&&((str[0]>='1'&&str[0]<='9')||str[0]=='.')){
        puts("Float Number");
    }
    else if(isFloat()>2&&((str[0]>='1'&&str[0]<='9')||str[0]=='.')){
        puts("Double Number");
    }
    else{
        puts("Undefined");
    }

    return 0;
}
