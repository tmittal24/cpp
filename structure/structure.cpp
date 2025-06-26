#include <iostream>
using namespace std;

struct movie{
    string title;
    int releaseDate;
    bool isPopular;
    string director;
};

int main (){
    movie movie1 = {"avengers",2012,true,"anthony russo"};
    movie movie2 = {"avengers",2012,true,"anthony russo"};
    if (movie1.title==movie2.title&&
        movie1.releaseDate==movie2.releaseDate&&
        movie1.isPopular==movie2.isPopular&&
        movie1.director==movie2.director);
    cout<<"both movies are same";
    struct movie arr[3];
    arr[0].isPopular=true;
    

}
