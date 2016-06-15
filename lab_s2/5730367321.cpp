#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <assert.h>

using namespace std;

namespace CP {
template <typename T>
class queue {
protected:
  vector<T> mVect;

public:
T front(){
    return mVect[0];

}
bool empty(){
    return mVect.empty();
}
void pop(){
    mVect.erase(mVect.begin());


}
void push(const T& x){
    mVect.push_back(x);

}
T back(){
    return mVect[mVect.size()-1];
}
size_t size(){
    return mVect.size();
}
};
}

/*void test1(){

    CP::queue<int> q;
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);
    assert(q.front()==10);
    assert(q.back()==13);
    q.pop();
    q.pop();
    assert(q.size()==2);
    assert(q.front()==12);
    assert(q.back()==13);
    q.pop();
    q.pop();
    assert(q.empty());

}

void test2(){
    CP::queue<int> q;
    CP::queue<int> q2;

    for(int i=0;i<10000;i++){
        q.push(i);
    }
    assert(q.size()==10000);
    for(int i=10000 ; i< 11000 ;i++){
        q2.push(i);
        q.pop();
    }
    assert(q2.size()==1000);
    assert(q.size()==9000);
    for(int i=0;i<1000;i++){
        q2.push(i);
        q2.pop();
        q2.pop();
    }
    assert(q2.empty());
    q2=q;
    assert(q2.size()==9000);
    assert(q2.front()==1000);
    assert(q2.back()==9999);

}
void test3(){
    CP::queue<int> q;


}
void test4(){

}
void test5(){}
void test6(){}*/

void test1(){
  CP::queue<int> q;
  assert(q.empty() == true);
  q.push(1);
  q.push(2);
  q.push(3);
  assert(q.size() == 3);
  assert(q.size() != 4);
  assert(q.front() == 1);
  assert(q.back() == 3);
  q.pop();
  assert(q.front() == 2);
  assert(q.size() == 2);
  assert(q.back() == 3);
  q.push(27);
  assert(q.back() == 27);
  assert(q.size() == 3);

  CP::queue<int> q1;
  q1 = q;
  assert(q1.size() == 3);
  assert(q1.front() == 2);
  assert(q1.back() == 27);
}

void test2(){

  CP::queue<vector<int>> q;
  vector<int> v1;
  vector<int> v2;
  for(int i = 1 ; i <= 10 ; i++){
    v1.push_back(i*10);
  }
  q.push(v1);
  q.push(v2);
  assert(q.size() == 2);
  assert(q.front()[0] == 10);
  assert(q.back().empty() == true);
}

void test3(){
  CP::queue<string> q;
  size_t n = 1e5;
  for(size_t i = 0 ; i < n ; i++){
    string a = "a";
    q.push(a);
  }

  assert(q.size() == n);
  assert(q.front() == "a");
  assert(q.back() == "a");

  for (size_t i = q.size(); i > 1 ; i --){
    q.pop();
  }
  assert(q.size() == 1);
  assert(q.front() == "a");
}

int main()
{

  test1(); cout << "test1 OK " << endl;
  test2(); cout << "test2 OK " << endl;
  test3(); cout << "test3 OK " << endl;



    /*int x;
    int y;

    x=10;
    y=20;

     int &r=y;

     r=30;

     r = y;
     r=40;

     cout<<" x = "<<x<<endl;
     cout<<" y = "<<y<<endl;
     cout<<" r = "<<r<<endl;*/

    /* map<int,vector<pair<float,bool>>> www;
     pair<float,bool> x = {0.22,true};
     www[3].push_back(x);*/

    return 0;
}
