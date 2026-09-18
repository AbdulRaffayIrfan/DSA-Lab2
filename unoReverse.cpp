#include"Lib.h"
using namespace std;


//cpp method
void stringcpp_reverse(){
    string* str= new string();

    cout<<"Enter a string: ";
    cin>>*str;

    for(int i=str->length()-1;i>=0;i--){
        cout<<(*str)[i];//*str is single string object
    }

    cout<<endl;

    delete str;
}

//c method
void stringc_reverse(){
    char* str= new char[100];

    printf("Enter a string: ");
    scanf("%s",str);

    for(int i=strlen(str)-1;i>=0;i--){
        printf("%c",str[i]);
    }

    printf("\n");

    delete[] str;
}

int main()
{
    stringcpp_reverse();

    stringc_reverse();

    return 0;
}
