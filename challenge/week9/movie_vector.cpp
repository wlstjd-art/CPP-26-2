#include <iostream>
#include <string>
#include <vector>
using namespace std;

 class Movie
 {
    private:
        string title;
        double rating;
    public:
        Movie(string t = "",double r = 0.0){
            title = t;
            rating = r;
        }
        void printmovie(){
            cout << title << ": " << rating << endl;
        }
 };
 int main(){

    vector<Movie>movies;

    movies.push_back(Movie("Titanic",9.9));
    movies.push_back(Movie("gone with the wind",9.6));
    movies.push_back(Movie("terminator",9.7));

    for(auto& e : movies)
        e.printmovie();
    return 0;
 }