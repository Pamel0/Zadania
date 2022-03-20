#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
char a,b;
cout<<"Wpisz dwa znak oddzielone spacja"<<endl;
cin>>a>>b;
for(int i=1; i<=10; i++)
{
cout<<a<<b;
}
cout<<endl;
system("PAUSE");
return EXIT_SUCCESS;
}
