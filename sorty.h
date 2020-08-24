typedef int Item;
#define key(A) (A)
#define less(A, B) (A < B)
#define exch(A, B) {Item T = A; A = B; B = T;}


void selection_sort_r(Item *v, int l, int r){
    /* Recursive Solution */
    if(l == r) return;
    int min = l;
    for (int i = l + 1; i <= r; i++){
        if(less(v[i], v[min])) {
            min = i;
        }
    }
    exch(v[min], v[l]);
    selection_sort_r(v, l + 1, r);
}

void selection_sort(Item *v, int l, int r){
    /* Iterative Solution */
    while (l != r) {
        int min = l;
        for (int i = l + 1; i <= r; i++){
            if(less(v[i], v[min])) {
                min = i;
            }
        }
        exch(v[min], v[l]);
        l++;
    }
}