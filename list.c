#include<stdio.h>
#include<malloc.h>
#include"list.h"

void main()
{
    int a[10][10],n;

    void create();
    void display();
    void createlist();
    void display_list();

    printf("\nHow many no of vertices\n");
    scanf("%d",&n);
    printf("\nCreate matrix");
    create(a,n);
    printf("\nThe adjacency matrix is\n");
    display(a,n);
    printf("\nThe adjacency list is\n");
    createlist(a,n);
    display_list(n);
}