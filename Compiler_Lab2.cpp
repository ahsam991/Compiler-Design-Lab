#include<iostream>
#include<cstring>

using namespace std;
int main()
{
    int n, flag=0;
    char keyword[100][100]={ " break","case","auto","char","const","continue","default","do","double","int","float","loop"};
    char str[50];
    cout<<" Enter your keywords here : "<<endl;
    cin>>str;
    for(int i=0; i<50 ; i++ )
    {
        if (strcmp(str,keyword[i])==0 )
        {

            flag=1;
        }
    }
    if (flag)
    {

        cout<<str<<" This is the keyword of : ";
    }
    else
        cout<<"Sorry not Matched "<<endl;




}
