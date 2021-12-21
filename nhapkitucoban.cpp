#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
//int tuoi;
//char hoten[100];
//cout << "nhap tuoi ";
//cin >> tuoi;
//cout <<"nhap ho ten ";
//cin.ignore(32767, '\n');
//fflush(stdin);
//fgets(hoten,sizeof(hoten),stdin);
//cout << "ho ten la : "<< hoten;
//cout<<"tuoi la : "<< tuoi;

string str0("xin chao moi nguoi");
string str1{"Toi ten phsad"};
string str2= "cokk phsadstyle";
string str3= str0;

cout << str0 << " "  << str1<< endl;
cout << str3 <<  "  " << str2 << endl;
int tuoi;
cin >> tuoi;
cout << "tuoi la " << tuoi;
cin.ignore(32767,'\n');
cout << "\nEnter your name "<< endl;
string strName;
getline(cin,strName);
cout << "\nten la " << strName;


return 0;
}
