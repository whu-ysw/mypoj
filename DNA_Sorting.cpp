#include<iostream>
#include<string>
#include<map>
using namespace std;

int DNA_Sortedness(string& str)
{
  int sortedness = 0;
  for(string::iterator beg=str.begin(); beg!=str.end(); ++beg)
  {
    for(string::iterator test=beg+1; test!=str.end(); ++test)
      if(*beg > *test) ++sortedness;
  }
  return sortedness;
}

int main()
{
  int num, len;
  cin >> len >> num;
  string str;
  multimap<int, string> ismap;
  for(int i=0; i<num; ++i)
  {
    cin >> str;
    ismap.insert(pair<int, string>(DNA_Sortedness(str), str));
  }
  for(multimap<int, string>::iterator it = ismap.begin(); it != ismap.end(); it++)
	  cout << it->second << endl;
  //c++ 11
  //for(pair<int, string> elem : ismap)
  //  cout << elem.second << endl;
  return 0;
}
