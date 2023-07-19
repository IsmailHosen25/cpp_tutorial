// documentation section start

// this is hasan
/*hello
     i started c++ from now , i  will be a best programmer in the world*/

// documentation section end



// Link section start

#include<iostream>
#include<string>

// Link section end

// definition section start

#define PI 3.145
// definition section end

// Global Declaration section start
 
int r = 2;
void area();

// Global Declaration section end

// Class definition section start

class my_class
{
    public:
    int a;
    void display (){
     std::cout<<"Allah"<<std::endl;
    }
};

// Class definition section end

// Function section start

int main(){
    my_class m;
    m.a=90;
    m.display();
    area();
    std::cout<<"Hello world from main function"<<std::endl;
    std::cout<<m.a<<std::endl;
    return 0;
};

// Function section end


// Program section start

void area(){
    float area;
    area=PI*r*r;
    std::cout<<area<<std::endl;
};

// Program section end