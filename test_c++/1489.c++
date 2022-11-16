#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string _name,int _age){
        name=_name;
        age=_age;
    }
};

class People{
    public:
    vector <Person> p;

    void addPerson(string _name,int _age){
        Person pe(_name,_age);
        p.push_back(pe);

    }

    int getCount(void){
        return p.size();
    }

    Person getPersonByName(string _name){
        int i;
        for(i=0;i<p.size();i++){
            if(p[i].name==_name){
                return p[i];
            }
        }
        return p[i];
    }

    Person getOldestPerson (void){
        Person old_p=p[0];

        for (int i = 0; i < p.size(); i++)
        {
            if(old_p.age<p[i].age){
                old_p=p[i];
            }
        }
        return old_p;
        
    }

    int howManyUnderAge(int _age){
        int cnt=0;
        for (int i = 0; i < p.size(); i++)
        {
            if(_age>p[i].age){
                cnt=cnt+1;
            }
        }
        return cnt;
        
    }

};

int main()
{
	string name;
	int age = 20;

	People p;

	while (true)
	{
		getline(cin, name);
		cin >> age;
		cin.ignore();

		if (age < 0)
		{
			break;
		}

		p.addPerson(name, age);

	}

	getline(cin, name);

	cout << p.getCount() << endl;
	Person _i = p.getPersonByName(name);
	cout << _i.name << " " << _i.age << endl;
    cout << p.getOldestPerson().name << endl;
    cout << p.howManyUnderAge(30) << endl;

	return 0;

}