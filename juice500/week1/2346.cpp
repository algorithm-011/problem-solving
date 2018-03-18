#include <cstdio>

struct node {
    struct node *next, *prev;
    int dat, idx;
};

int main(void) {
    int n;
    struct node pool[1001] = {{NULL, NULL, 0, 0}, };

    scanf("%d", &n);
    for(int i=1; i<=n; ++i) {
        scanf("%d", &pool[i].dat);
        pool[i].idx = i;
        pool[i].next = i<n ? &pool[i+1] : &pool[0];
        pool[i].prev = &pool[i-1];
    }
    pool[0].next = &pool[1];
    pool[0].prev = &pool[n];

    struct node *curr = &pool[1];
    while(curr->idx) {
        printf("%d ", curr->idx, curr->dat);
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
  
        int tmp = curr->dat;
        if(tmp > 0) {
            while(tmp--) {
                curr = curr->next;
                if((curr->idx) == 0) curr = curr->next;
            }
        }
        else {
            while(tmp++) {
                curr = curr->prev;
                if((curr->idx) == 0) curr = curr->prev;
            }
        }
    }


    return 0;
}
