#ifndef QUATERNION_H_
#define QUATERNION_H_
#include <iostream>
template<typename T_> class Quaternion;
template<typename T_> std::ostream& operator<<(std::ostream& out,const Quaternion<T_> &q);
template<typename T_> std::istream& operator>>(std::istream& in, Quaternion<T_> &q);

template <typename T_>
class Quaternion{
    public:
        Quaternion();
        Quaternion(T_ c,T_ i, T_ j, T_ k):i(i),j(j),k(k),c(c){}
        Quaternion operator +(const Quaternion<T_> &q);
        Quaternion operator+=(const Quaternion<T_> &q);
        Quaternion operator -(const Quaternion<T_> &q);
        Quaternion operator-=(const Quaternion<T_> &q);
        Quaternion operator *(const Quaternion<T_> &q);
        Quaternion operator *=(const Quaternion<T_> &q);
        Quaternion operator /(const Quaternion<T_> &q);
        friend std::ostream& operator << <>(std::ostream& out,const Quaternion<T_> &q);
        friend std::istream& operator >> <>(std::istream& in, Quaternion<T_> &q);
    private:
        T_ c;
        T_ i;
        T_ j;
        T_ k;
};
template <typename T_>
std::ostream &operator<<(std::ostream &out, const Quaternion<T_> &q) {
  if (q.c != 0) {
    out << q.c;
    out << "+";
  }
  if (q.i != 0) {
    out << q.i;
    out << "i";
  }
  if (q.j != 0) {
    out << "+";
    out << q.j;
    out << "j";
  }
  if (q.k != 0) {
    out << "+";
    out << q.k;
    out << "k";
  }
  out << std::endl;
  return out;
}
template <typename T_>
std::istream &operator>>(std::istream &in, Quaternion<T_> &q) {
  std::cout << "Quaternion definition:" << std::endl;
  char c[10];
  char i[10];
  char j[10];
  char k[10];
  std::cout << "Enter the constant:\t";
  in >> c;
  q.c = atof(c);
  std::cout << "Enter the i coefficient\t";
  in >> i;
  q.i = atof(i);
  std::cout << "Enter the j coefficient\t";
  in >> j;
  q.j = atof(j);
  std::cout << "Enter the k coefficient\t";
  in >> k;
  q.k = atof(k);
  std::cout << q;
  return in;
}
#endif
