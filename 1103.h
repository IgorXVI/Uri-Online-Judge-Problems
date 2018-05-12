#include <stdlib.h>

using namespace std;

int main() {


    int h1, h2, m1, m2, mt;
    cin >> h1 >> m1 >> h2 >> m2;

    while ( h1 !=0 or m1 !=0 or h2 !=0 or m2 !=0) {

        h1 = h1*60;
        h2 = h2*60;

        mt = abs((h1+m1)-(h2+m2));
        if(h2<h1) {
            mt = abs((h1+m1) - (1440 +(h2+m2)));
        }
        if(h2==h1 && m1>m2)
            mt = abs((h1+m1)- (1440+(h2+m2)));

        if(mt!=0) {
            cout << mt << endl;
        }

        cin >> h1 >> m1 >> h2 >> m2;
    }

}