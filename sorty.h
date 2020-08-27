typedef int Item;
int BUBBLE_COUNT = 0;

#define key(A) (A)
#define less(A, B) (A < B)
#define exch(A, B) {Item T = A; A = B; B = T; BUBBLE_COUNT = BUBBLE_COUNT + 1;}
#define cmpexch(A, B) {if(B < A) exch(A, B);}

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

void bubble_sort(Item *v, int l, int r){
    BUBBLE_COUNT = 0;
    int i = 0;
    while(i < r){
        for(int j = l; j < r; j++){
            cmpexch(v[j], v[j + 1]);
        }
        if (BUBBLE_COUNT == 0){
            return;
        }
        i++;
    }
}

void insertion_sort(Item *v, int l, int r){

    for(int i = l + 1; i <= r; i++){
        for(int j = i; j > l; j--){
            cmpexch(v[j - 1], v[j]);
        }
    }
}
void insertion_sort_v2(Item *v, int l, int r){
    // Reordenate the array so the first element is the minor one.
    for(int i = r; i > l; i--){
        cmpexch(v[i - 1], v[i]);
    }
    
    for(int i = l + 2; i <= r; i++){
        int j = i;
        Item tmp = v[j];
        while(less(tmp, v[j - 1])){
            v[j] = v[j - 1];
            j--;
        }
        v[j] = tmp;
    }

}