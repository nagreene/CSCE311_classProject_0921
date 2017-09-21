#include <string>
#include "file1.cpp"
using namespace std;
string fooA(string inpString)
{
	if(inpString == "")
		return "";
	return fooA(inpString.substr(0, inpString.length() - 1)) + inpString.substr(inpString.length() - 1) + "!";
}
int main()
{
	cout << fooZ("Foo Bar Zot") << endl;
}