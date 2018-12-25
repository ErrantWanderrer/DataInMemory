#include <iostream>

using namespace std;

struct OrdStruct{
    int i;
    short s;
    char c;
};

struct NotOrdStruct{
    char c;
    int i;
    short s;
};

#pragma pack(push, 1)
struct PrStruct{
    char c;
    int i;
    short s;
};
#pragma pack(pop)

int main(){
    OrdStruct a;
    NotOrdStruct b;
    PrStruct ps;
    
    cout<<"Size of object fields in an ordered structure: "<<endl
    <<"Char: "<<sizeof(a.c)<<endl
    <<"Short: "<<sizeof(a.s)<<endl
    <<"Int: "<<sizeof(a.i)<<endl<<endl;
    
    cout<<"Size of object fields in an not ordered structure: "<<endl
    <<"Char: "<<sizeof(b.c)<<endl
    <<"Short: "<<sizeof(b.s)<<endl
    <<"Int: "<<sizeof(b.i)<<endl<<endl;
    
    cout<<"Size of object fields in pragma structure: "<<endl
    <<"Char: "<<sizeof(ps.c)<<endl
    <<"Short: "<<sizeof(ps.s)<<endl
    <<"Int: "<<sizeof(ps.i)<<endl<<endl;
    
    cout<<"Size of Char + Short + Int in ordered structure = " 
    <<sizeof(a.c) + sizeof(a.s) + sizeof(a.i)<<endl;
    
    cout<<"Size of Char + Short + Int in  not ordered structure = " 
    <<sizeof(b.c) + sizeof(b.s) + sizeof(b.i)<<endl;
    
    cout<<"Size of Char + Short + Int in pragma structure = " 
    <<sizeof(ps.c) + sizeof(ps.s) + sizeof(ps.i)<<endl;
    
    cout<<"Size of ordered structure: " << sizeof(a)<<endl
   <<"Size of not ordered struct: "<<sizeof(b)<<endl
   <<"Size of pragma structure " << sizeof(ps)<<endl;
}
