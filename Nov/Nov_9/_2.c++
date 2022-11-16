//다중 상속 multiple inheritance

class A{
    public:
    int x;
};

class B{
    public:
    int x;
};

class C: public A, public B{

};

int main(){
    C cc;
    
    cc.A::x=10;
    cc.B::x=20;

}