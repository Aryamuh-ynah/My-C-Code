
#include <stdio.h>


int count(char *c, char c2, int start);
int max(int *a);

int main()
 {

    char k[50];
    scanf("%s", k);

    int a[26], n = 0;

    for(int i=0; i<26; ++i)
        a[i] = 0;

    while(k[n]!='\0') {
        int cnt = count(k, k[n], n);
        int i = k[n]-'a';
        a[i] = (a[i]<cnt)? cnt:a[i];
        ++n;
    }

    int m_i = max(a);

    printf("%c\n", (m_i)+'a');

    return 0;

}

int count(char *c, char c2, int start) {
    int cnt = 0;
    while(c[start]!='\0') {
        if(c2==c[start])
            ++cnt;
        else
            break;
        ++start;
    }
    return cnt;
}

int max(int *a) {
    int m = a[0], pos = 0;
    for(int i=0; i<26; ++i) {
        if(m<a[i])  {
            m = a[i];
            pos = i;
        }
    }
    return pos;
}
