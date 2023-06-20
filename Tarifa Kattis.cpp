/*

    Pero has negotiated a Very Good data plan with his internet provider. The provider will let Pero use up X
    megabytes to surf the internet per month. Each megabyte that he doesn’t spend in that month gets transferred 
    to the next month and can still be spent. Of course, Pero can only spend the megabytes he actually has.

    If we know how much megabytes Pero has spent in each of the first N months of using the plan, 
    determine how many megabytes Pero will have available in the N+1 month of using the plan.

*/

#include <iostream>
using namespace std;

int main() {
    int x, n, p;
    cin >> x;
    cin >> n;
    int next_month = x;

    for (int i = 0; i < n; i++) {
        cin >> p;
        if (p > x) {
            next_month -= (p - x);
        }
        else {
            next_month += (x - p);
        }
    }

    cout << next_month;
}