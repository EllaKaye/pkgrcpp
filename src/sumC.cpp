#include <Rcpp.h>
using namespace Rcpp;

//' Add the Numbers in a Vector
//'
//' Return the sum of a vector of numbers.
//' @param x A numeric vector
//' @export
// [[Rcpp::export]]
double sumC(NumericVector x) {
  int n = x.size();
  double total = 0;
  for(int i = 0; i < n; ++i) {
    total += x[i];
  }
  return total;
}
