struct node
{
    int data;
    struct node *next;
}*v[10];

int i,j,n;
struct node *p=NULL,*temp=NULL;

void create(int a[][n],int n)
{
    int i,j,x;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n ; j++)
        {
            printf("Enter the values between %d and %d vertices\n",i,j);
            scanf("%d",&a[i][j]);
            if (i!=j)
            {
                if (a[i][j]!=0 && a[i][j]!=1)
                {
                    a[i][j]=1;
                }
            }
            else
            {
                a[i][j]=0;
            }
        }
        
    }
    
}

void display(int a[][n],int n)
{
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

void createlist(int a[][n],int n)
{
    int i,j;
    for ( i = 0; i < n; i++)
    {
        v[i]=NULL;
        for ( j = 1; j <=n; j++)
        {
            if (a[i][j]!=0)
            {
                p=(struct node *)malloc(sizeof(struct node));
                p->data=j;
                p->next=NULL;
                if(v[i]==NULL)
                v[i]=temp=p;
                else
                temp->next=p;
                temp=p;
            }
        }
    }
}

void display_list(int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        temp=v[i];
        printf("\n%d\t",i);
        while (temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }   
    } 
}