//type_trait example
#include <iostream>
struct t{};//true class
struct f{};//false class
template<class l>
struct m{
  typedef f p;
}
template<T>
struct m<T*>{
  typedef f p;
}
template<>
struct m<int>{
  typedef t p;
}
template<>
struct m<char>{
  typedef t p;
}
//...
void r(f){std::cout<<"false"<<std::endl;}
void r(t){std::cout<<"true"<<std::endl;}
template<class n>
void l(){
  r(typename m<T>::p());
}
int main(){
  l<int>();
  l<string>();
  l<f>();
  return 0;
}
