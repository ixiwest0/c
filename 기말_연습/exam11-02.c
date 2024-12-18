#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("정수 2개를 저장할 공간이 필요\n");
    int* list = (int*)malloc(sizeof(int) * 2);
    int i;
    int* list_new;

    if (list == NULL)
        return 1;

    list[0] = 10;
    list[1] = 20;

    printf("정수 3개를 저장할 공간으로 확장\n");

    list_new = (int*)realloc(list, sizeof(int) * 3);

    if (list_new == NULL) {
        free(list); 
        return 1;
    }

    list_new[2] = 30;

    for (i = 0; i < 3; i++) 
        printf("%d ", list_new[i]); //*(list_new + i)
    printf("\n");

    free(list_new); 

    return 0;
}
