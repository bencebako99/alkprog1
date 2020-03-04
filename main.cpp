#include <iostream>
#include <cmath>
using namespace std;


double f(double x){
    return cos(x)*exp(-x*x);
}

double integrate(int n, double x0, double x1){
    //alkalmazzuk a Composite Trapezoidal Rule-t
    //a választott függvényünk a cos(x)*exp(-x^2)
    double h=(x1-x0)/n;
    double S=0;
    for(int i=1; i<n; ++i){
        S+=f(x0+i*(x1-x0)/n);
    }
    return h/2*(f(x0)+2*S+f(x1));
}
int main() {
    std::cout.precision(16);
    double x0, x1, n;
    cout << "integrálás alsó határa:";
    cin >> x0;
    cout << "integrálás felső határa:";
    cin >> x1;
    cout << "felosztási pontok száma:";
    cin >> n;
    cout << integrate(n, x0, x1) << endl;
    return 0;
}