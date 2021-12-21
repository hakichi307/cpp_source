#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char sz[10]="kteam";
	puts(sz);
	cout << "do dai : "<< strlen(sz)<< endl;// dem so ki tu
	cout << "do dai : "<< sizeof(sz)<< endl;// do dai chuoi ki tu
	
	cout <<strlwr(sz)<< endl; // viet thuong lowercase
	cout <<strupr(sz)<< endl; // viet hoa uppercase
	char sz2[20]="ah";
	cout <<strcpy(sz2,sz)<< endl; // copy chuoi ki tu
	cout << strcat(sz,sz2)<<endl; // noi chuoi ki tu
	cout << strcmp(sz2,sz)<<endl; // so sanh 2 chuoi composite
	cout << strstr(sz,"k")<<endl;	// tim ki tu con trong chuoi ki tu, ko tim thay ko hien
	    fflush(stdin);
	char str[20];
	fgets(str,sizeof str,stdin);// kieu nhap moi
//	gets(str);	// kieu nhap cu
//	cin.getline(str,20);	// dung cho char
	puts(str);
//	string str2;
//	getline(cin,str2);	dung cho string

return 0;
}

