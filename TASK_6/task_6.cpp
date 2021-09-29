/*
I want my Personal data, Professional data, & Academic data to be separated in different classes and 4th class called biodata.
If I create object of biodata class then using that object I can get all my professional, personal and academic data.
Take data members in classes as follows:
personal class - Name, Surname, address, mobile_no, dob.
professional class - name_of_organization, job_profile, project.
Academic - year_of_passing, cgpa, college_name, branch
member functions
All class includes default constructor(if data members are present), and one function to get data from user for its data member.
Note :- define all data members as protected so that you can access this members in its derived class directly
*/
//code
#include<iostream>
using namespace std;

class personal_data{
    protected:
    string fname,lname,address,mobile,dob;
    personal_data(){
        this->fname="Abhishek";
        this->lname="Ikhar";
        this->address="Rohana,Ta:Arvi,Dist:Wardha";
        this->mobile="909672*8**";
        this->dob="17-07-2002";
    }
    void setdata(string f,string l,string a,string m,string d){
        this->fname=f;
        this->lname=l;
        this->address=a;
        this->mobile=m;
        this->dob=d;
    }
};
class professional_data{
    protected:
    string org, profile, project;
    professional_data(){
        this->org="VIT,Pune";
        this->profile="student";
        this->project="project-1";
    }
    void setdata1(string o, string s1, string s2){
        this->org=o;
        this->profile=s1;
        this->project=s2;
    }
};
class academic_data{
    protected:
    string college, branch;
    int passyr;
    float cgpa;
    academic_data(){
        this->college="VIT_Pune";
        this->branch="CSE";
        this->passyr=2024;
        this->cgpa=9.0;
    }
    void setadata(string c, string b, int p, float cgpa){
        this->college=c;
        this->branch=b;
        this->passyr=p;
        this->cgpa=cgpa;
    }
};

class Biodata : protected personal_data, protected professional_data, protected academic_data
{
    public:
    void print(){
    cout<<"Name : "<<fname<<endl;
    cout<<"Surname : "<<lname<<endl;
    cout<<"Address : "<<address<<endl;
    cout<<"Mobile No. : "<<mobile<<endl;
    cout<<"Date of Birth : "<<dob<<endl;
    cout<<"Name of Organization : "<<org<<endl;
    cout<<"Job Profile : "<<profile<<endl;
    cout<<"Project : "<<project<<endl;
    cout<<"College Name : "<<college<<endl;
    cout<<"Branch : "<<branch<<endl;
    cout<<"Year of Passing : "<<passyr<<endl;
    cout<<"CGPA : "<<cgpa<<endl;
    return;
    }
    void perdata(string n, string s, string a, string m, string d){
        setdata(n, s, a, m, d);
    }
    void prodata(string o, string s1, string s2){
        setdata1(o, s1, s2);
    }
    void accdata(string c, string b, int p, float cgpa){
        setadata(c, b, p, cgpa);
    }
};

int main(){
    string n,s,a,m,d,o,s1,s2,c,b;
    int p;
    float cgpa;

    Biodata b1;
    cout<<"Before getting data from user : "<<endl;
    b1.print();

    cout<<endl<<"Enter data "<<endl<<"Enter First Name : ";
    getline(cin, n);
    cout<<"Enter Surname : ";
    getline(cin, s);
    cout<<"Enter Address : ";
    getline(cin, a);
    cout<<"Enter Mobile No. : ";
    getline(cin, m);
    cout<<"Enter Date of Birth : ";
    getline(cin, d);
    b1.perdata(n,s,a,m,d);
    cout<<"Enter Organization : ";
    getline(cin, o);
    cout<<"Enter Job Profile : ";
    getline(cin, s1);
    cout<<"Enter Project : ";
    getline(cin, s2);
    b1.prodata(o,s1,s2);
    cout<<"Enter College Name : ";
    getline(cin, c);
    cout<<"Enter Branch : ";
    getline(cin, b);
    cout<<"Enter Year of Passing : ";
    cin>>p;
    cout<<"Enter CGPA : ";
    cin>>cgpa;
    b1.accdata(c,b,p,cgpa);
    cout<<endl<<"After getting data from user : "<<endl;
    b1.print();
}
//code by Abhishek Ikhar