
#include <iostream>
#include<iomanip>
#include <string>
#include <vector>

using namespace std;
void showAndTell(vector <string> vec);
vector<string> genVec();
int main ()

{
 
// Insert code here:
    vector<string> newVec =  genVec();
    showAndTell(newVec);
    
    
    
    cout <<"Ordered Names: " << endl;
    //insert into the middle of a vector?
    int namePosition;
    namePosition= 0;
    string nameToInsert = "Adam";
    newVec.insert(newVec.begin() + namePosition, nameToInsert);
    namePosition=1;
    string name1 = "America";
    newVec.insert(newVec.begin() + namePosition, name1);
    namePosition=2;
    string name2 = "Ashley";
    newVec.insert(newVec.begin() + namePosition, name2);
    namePosition=3;
    string name3 = "Baker";
    newVec.insert(newVec.begin() + namePosition, name3);
    namePosition=4;
    string name4 = "Brandon";
    newVec.insert(newVec.begin() + namePosition, name4);
    namePosition=5;
    string name5 = "Cynthia";
    newVec.insert(newVec.begin() + namePosition, name5);
    namePosition=6;
    string name6 = "Elliot";
    newVec.insert(newVec.begin() + namePosition, name6);
    namePosition=7;
    string name7 = "Eric";
    newVec.insert(newVec.begin() + namePosition, name7);
    namePosition=8;
    string name8 = "George";
    newVec.insert(newVec.begin() + namePosition, name8);
    namePosition=9;
    string name9 = "George";
    newVec.insert(newVec.begin() + namePosition, name9);
    namePosition=10;
    string name10 = "Harvey";
    newVec.insert(newVec.begin() + namePosition, name10);
    namePosition=11;
    string name11 = "Jack";
    newVec.insert(newVec.begin() + namePosition, name11);
    namePosition=12;
    string name12 = "Jill";
    newVec.insert(newVec.begin() + namePosition, name12);
    namePosition=13;
    string name13 = "Jose";
    newVec.insert(newVec.begin() + namePosition, name13);
    namePosition=14;
    string name14 = "Katheryn";
    newVec.insert(newVec.begin() + namePosition, name14);
    namePosition=15;
    string name15 = "Luna";
    newVec.insert(newVec.begin() + namePosition, name15);
    namePosition=16;
    string name16 = "Mary";
    newVec.insert(newVec.begin() + namePosition, name16);
    namePosition=17;
    string name17 = "Miguel";
    newVec.insert(newVec.begin() + namePosition, name17);
    namePosition=18;
    string name18 = "Sylvia";
    newVec.insert(newVec.begin() + namePosition, name18);
    namePosition=19;
    string name19 = "Thien";
    newVec.insert(newVec.begin() + namePosition, name19);
    namePosition=20;
    string name20 = "Zack";
    newVec.insert(newVec.begin() + namePosition, name20);
    cout << endl;
    for (auto iter = newVec.begin(); iter != newVec.end();++iter)
    {
        cout <<" " << * iter <<endl;
    }

    cout << endl;
    cout << endl;
    
    cout <<"Best way to organize names alphabetic order: " <<endl;
    for (auto it = newVec.cbegin(); it != newVec.cend(); ++it)
        cout << setw(3) << ( (it - newVec.cbegin()) +1) << "  :  " << *it << "\n";
    cout << "\n";
    
    
    
    
    return 0;
    
}

void showAndTell(vector <string> vec)
{
    cout << vec.size() << " items in the vector \n" << "Unordered names : n/" <<endl;
    if (vec.size() == 0)
    {
        cout << " No items in the vector \n";
    }
    else
    {
     
        for (int i = 0; i < vec.size(); i++)
        {
            cout << setw(3) << (i + 1) << "  :  " << vec.at(i) << "\n";
        }
        cout << "\n";

        }
    

    
}
vector<string> genVec()
{
    vector <string> tempVec;
    tempVec.push_back("Jack");
    tempVec.push_back("Jill");
    tempVec.push_back("Adam");
    tempVec.push_back("Mary");
    tempVec.push_back("Zack");
    tempVec.push_back("Jose");
    tempVec.push_back("George");
    tempVec.push_back("Silvia");
    tempVec.push_back("Thien");
    tempVec.push_back("George");
    tempVec.push_back("Eric");
    tempVec.push_back("Miguel");
    tempVec.push_back("Luna");
    tempVec.push_back("Brandon");
    tempVec.push_back("Katheryn");
    tempVec.push_back("America");
    tempVec.push_back("Harvey");
    tempVec.push_back("Elliot");
    tempVec.push_back("Ashley");
    tempVec.push_back("Cinthia");
    
    return tempVec;
}


