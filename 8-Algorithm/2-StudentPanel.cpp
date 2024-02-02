#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<string> ID;
    vector<string> name;
    vector<double> grade;

    int n;
    cout<<"How many student do you have";
    cin>>n;

    for (int i =0 ; i <n ; i++)
    {
        string name_tmp , id_tmp;
        double grade_tmp;
        cout<<"ID["<<i+1<<"] = ";
        cin>>id_tmp;
        cout<<"name["<<i+1<<"] = ";
        cin>>name_tmp;
        cout<<"grade["<<i+1<<"] = ";
        cin>>grade_tmp;
        ID.push_back(id_tmp);
        name.push_back(name_tmp);
        grade.push_back(grade_tmp);

    }
    for(int i =0 ; i< n ; i ++)
    {
        if (grade[i]<10)
        {
            grade.erase(grade.begin() + i );
            name.erase(name.begin() + i);
            ID.erase(ID.begin() + i);
            n -=1;
        }
    }
    for (int i = 0 ; i < n ; i++)
    {
        cout<<name[i]<<" - ID = "<<ID[i]<<" - Grade = "<<grade[i]<<endl;
    }
}