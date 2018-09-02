/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 *
 * @Output Integer
 */
 struct stack
{
    int *arr;
    int top;
};

void initial(struct stack *mem,int size)
{
    mem->arr=(int *)malloc(size*sizeof(int));
    mem->top=-1;
}
int isFull(struct stack *mem,int x)
{
    if(mem->top==(x-1))
    return 1;
    return 0;
}
void push(struct stack *mem,int element,int size)
{
    if(isFull(mem,size))
        printf("Stack is full");
    else
        {
           mem->top++;
            mem->arr[mem->top]=element;
        }
}

int isEmpty(struct stack *mem)
{
    if(mem->top==-1)
    return 1;
    return 0;
}

int pop(struct stack *mem)
{
    int element;
    if(isEmpty(mem))
        printf("Stack is underflow");
    else
        {
            element=mem->arr[mem->top];
            mem->top--;
        }
        return element;
}
int trap(const int* arr, int size) {
    struct stack *mem=(struct stack *)malloc(sizeof(struct stack));
    int i,j,water=0,distance,hight;
    initial(mem,size);
    push(mem,0,size);
    for(i=1;i<size;i++)
    {
        if(arr[i]<=arr[mem->arr[mem->top]])
            push(mem,i,size);
        else
        {
            while(mem->top!=-1 && arr[i]>arr[mem->arr[mem->top]])
            {
                distance=0;
                hight=0;
                j=pop(mem);
                if(mem->top!=-1)
                {
                    distance=i-mem->arr[mem->top]-1;
                    if(arr[mem->arr[mem->top]]<=arr[i])
                        hight=arr[mem->arr[mem->top]]-arr[j];
                    else
                        hight=arr[i]-arr[j];
                }
                water=water+(distance*hight);
            }
            push(mem,i,size);
        }
    }

    return water;
}
