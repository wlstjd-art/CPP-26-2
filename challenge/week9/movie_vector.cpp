/*==========================================================
 [배울 점] 내 클래스를 vector에 담는 순간 — 진짜 데이터 관리의 시작
 --------------------------------------------------------
  - vector<Movie> — vector는 int뿐 아니라 내가 만든 어떤 타입도 담을 수 있다
  - Movie(string t="", double r=0.0) 기본값 생성자 하나로 Movie()와 Movie(t,r)을 다 커버 — 설계의 여유
  - push_back(Movie("Titanic",9.9)) 임시 객체를 만들어 바로 보관 — 리스트 관리 UI의 원형
  - private 필드 + public 인터페이스로 감싼 작은 클래스가 정보의 묶음으로 기능하는 모습
==========================================================*/
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
        // 학습: 기본값 있는 생성자 하나로 두 가지 만드는 법을 동시에 제공하는 설계
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

    // 학습: 임시 객체를 만들어 바로 보관 — vector가 클래스도 수용한다
    movies.push_back(Movie("Titanic",9.9));
    movies.push_back(Movie("gone with the wind",9.6));
    movies.push_back(Movie("terminator",9.7));

    // 학습: 사용자 타입에서도 참조 순회는 동일 패턴 — e.printmovie()로 출력
    for(auto& e : movies)
        e.printmovie();
    return 0;
 }