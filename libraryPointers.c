#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct library{
  char BookName[20];
  char AuthorName[20];
  int  pages;
  int price;
};



int main()
{

   struct library* l;
   int i =0,count =0;
   char author[20],book[20];
   int a;

  l =(struct library *)malloc(sizeof(struct library));

  while(a!=6)
  {
  printf("\n\n");
  printf("1.Add book information\n");
  printf("2.Display book information\n");
  printf("3.List all books of given author\n");
  printf("4.list the title of the specified book\n");
  printf("5.list the count of books in the library\n");
  printf("6.Exit\n");

  printf("Enter choice: ");
  scanf("%d",&a);

  switch(a)
  {
    case 1:

    i = i +1;
    printf("Enter Book name: ");
    scanf("%s",(l+i)->BookName);
    printf("Enter Author name: ");
    scanf("%s",(l+i)->AuthorName);
    printf("Enter the total pages: ");
    scanf("%d",&(l+i)->pages);
    printf("Enter the price: ");
    scanf("%d",&(l+i)->price);

    count =count + 1;
    break;


    case 2:
    for(i=1;i<=count;i++)
    {
      printf("\n");
      printf("The Book name of %d is: %s\n ",i,(l+i)->BookName);
      printf("The author name of %d is: %s\n",i,(l+i)->AuthorName);
      printf("The total pages of %d book is: %d\n",i,(l+i)->pages);
      printf("The price of the %d book is: %d\n",i,(l+i)->price);
    }
    break;


    case 3:
    printf("Enter the name of the author whose info you want: ");
    scanf("%s",author);
    for(i=1;i<=count;i++)
    {
    if(strcmp(author,(l+i)->AuthorName)==0)
    {
      printf("\n");
      printf("Book: %s\n pages: %d\n price: %d\n",(l+i)->BookName,(l+i)->pages,(l+i)->price);
      printf("\n");

    }
    }
    break;


    case 4:
    printf("Enter the title of the book whose info you want: ");
    scanf("%s",book);
    for(i=1;i<=count;i++)
    {
    if(strcmp(book,(l+i)->BookName)==0)
    {
    printf("\n");  
    printf("Author: %s\n pages: %d\n price: %d\n",(l+i)->AuthorName,(l+i)->pages,(l+i)->price);
    printf("\n");
    }
    }
    break;



    case 5:
    printf("The total books registered in the library are: %d\n",count);
    break;
  }

  }

}
