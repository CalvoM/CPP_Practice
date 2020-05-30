#include "Quaternion.h"
template <typename T_>
Quaternion<T_>::Quaternion(){

}
template <typename T_>
Quaternion<T_> Quaternion<T_>::operator +(const Quaternion<T_> &q){
    Quaternion temp = *this;
    temp.c += q.c;
    temp.i += q.i;
    temp.j += q.j;
    temp.k += q.k;
    return temp;
}
template <typename T_>
Quaternion<T_> Quaternion<T_>::operator+=(const Quaternion<T_> &q) {
  *this = operator+(q);
  return *this;
}
template <typename T_>
Quaternion<T_> Quaternion<T_>::operator *(const Quaternion<T_> &q){
    Quaternion temp = *this;
    temp.c = -((temp.i * q.i) + (temp.j * q.j) + (temp.k * q.k) - (temp.c * q.c));
    temp.i = (temp.j * q.k) - (temp.k * q.j) + (temp.i * q.c); 
    temp.j = (temp.k * q.i) - (temp.i * q.k) + (temp.j * q.c);
    temp.k = (temp.i * q.j) - (temp.j * q.i) + (temp.k * q.c);
    return temp;
}
template <typename T_>
Quaternion<T_> Quaternion<T_>::operator*=(const Quaternion<T_> &q) {
    *this = operator*(q);
    return *this;
}
template <typename T_>
Quaternion<T_> Quaternion<T_>::operator -(const Quaternion<T_> &q){
    Quaternion temp = *this;
    temp.c -= q.c;
    temp.i -= q.i;
    temp.j -= q.j;
    temp.k -= q.k;
    return temp;
}
template <typename T_>
Quaternion<T_> Quaternion<T_>::operator-=(const Quaternion<T_> &q) {
  *this = operator-(q);
  return *this;
}
template class Quaternion<int>;
template class Quaternion<float>;
template class Quaternion<double>;
