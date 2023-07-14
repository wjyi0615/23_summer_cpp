// 얕은 복사와 깊은 복사
#include <iostream>
#include <cstring>
using namespace std;
class Person{
private:
    char* name;
    int id;
public:
    Person(int id, const char * name):id(id){
        int len = strlen(name); // 널문자는 제외함
        this->name= new char[len+1];
        strcpy(this->name, name); //생성자
    }
    ~Person(){ if(name) delete [] name; }
    void changeName(const char* name){ strcpy(this->name, name); }
    void show(){ cout<<id<<','<<name<<endl; }

    Person(const Person &c){
        this->id = c.id;
        int len = strlen(c.name); 
        this->name= new char[len+1];
        strcpy(this->name, c.name); 
    }
};
int main(){
    Person f(1, "John");
    Person daughter(father);
    cout << "-----------------" << endl;
    father.show();
    daughter.show();

    daughter.changeId(2);
    daughter.changeName("KATE");
    cout << "-----------------" << endl;
    father.show(
    daughter.show()
    )
}   