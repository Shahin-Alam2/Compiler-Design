#include<bits/stdc++.h>

char str[100];

int vowel(char c){
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        return 1;
    }
    return 0;
}
int count(){
    int i,v=0,cs=0;
    for(i=0;str[i];i++){
        if(vowel(str[i])){
            v++;
        }
        else{
            cs++;
        }
    }
    printf("Number of vowels:%d\n",v);
    printf("Consonants:%d\n",cs);
}

int main()
{
    printf("Enter string:\n");
    gets(str);

    printf("Your text:%s\n",str);

    count();

    return 0;
}
