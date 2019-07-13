// 가장 작은 것을 선택해서 앞으로 보내는 것!

/* 1 10 5 8 7 6 4 3 2 9 */
/* 1 2 5 8 7 6 4 3 10 9 */
/* 1 2 5 8 7 6 4 3 10 9 */
/* 1 2 3 4 7 6 8 5 10 9 */
/* 1 2 3 4 5 6 8 7 10 9 */
// ...

#define ARRAY_SIZE 10

int main(int argc, char const *argv[])
{
    /* code */
    int idx,
        temp;

    int arr[ARRAY_SIZE] = {1,10, 5, 8, 7, 6, 4, 3, 2, 9};
    for (int i = 0; i < ARRAY_SIZE ; i++)
    {
        for (int j = 0; j < i ;j++){
            if(arr[i] < arr[j]){
                
            }
        }
    }
    
    return 0;
}
