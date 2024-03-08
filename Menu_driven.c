///Q)write a menu driven C program to perform below operations.i)Add node at the end.ii)Add node at the beginning.iii)Delete the node at the beginning.iv)Delete the node at the end.v)Display the information of all the nodes. Assume that in a node you will store only one integer value.

#include<stdio.h>                              //Header file
#include<stdlib.h>                             //For library functions.
struct node                                    //structure for storing heterogeneous data.
{
    int data;                                  //Integer data.
    struct node *next;                         //To store next node address.
};
struct node * add_end(struct node *head)       //Function definition for adding a node at the end.
{
   struct node * cur,* newnode ;               //Variable declaration of cur to store present node address and newnode to store address of new node.
   newnode=(struct node *)malloc(sizeof(struct node) );    //Allocating memory to newnode using dynamic memory allocation.
   scanf("%d",&newnode->data);                 //Read the value of newnode using arrow as RHS is pointer.
   newnode->next=NULL;                         //Store next node address as NULL.
   if(head==NULL)                              //Check if the linked list is empty.
   {
       head=newnode;                           //If list is empty make the created newnode as first/head node.
       return head;                            //Return the starting address.
   }
   cur=head;                                   //if list is not empty store the starting head address in cur.
   while(cur->next!=NULL)                      //loop till cur->next (next node address) is NULL.
   {
       cur=cur->next;                          //Increment cur->next .
   }
   cur->next=newnode;                          //Once cur->next is NULL store newnode address in it.
   return head;                                //Return the starting address.
}
struct node * add_begin(struct node *head)                //Function definition for adding a node at beginning.
{
    struct node *newnode,*current;                        //Variable declaration of cur to store present node address and newnode to store address of new node.
    newnode=(struct node *)malloc(sizeof(struct node));   //Allocating memory to newnode using dynamic memory allocation.
    scanf("%d",&newnode->data);                           //Read the value of newnode using arrow as RHS is pointer.
    newnode->next=NULL;                                   //Store next node address as NULL.
    newnode->next=head;                                   //Store head address in next node address .
    head=newnode;                                         //store newnode address as head to make it first node.
    return head;                                          //Return the starting address.
}
void display(struct node *head)                           //Function definition to display the list.
{
    struct node *current;                                 //Variable declaration of cur to store present node address.
    current=head;                                         //Store head address in current.
    while(current!=NULL)                                  //Loop till current address is not equal to zero.
    {
        printf("%d",current->data);                       //display the data.
        current=current->next;                            //Increment current address to next node address.
    }
}
struct node * delete_end(struct node *head)               //Function definition for deleting a node at the end.
{
    struct node *pre,*current=head;                       //Initialize pre to store previous address and store the starting head address in current.
    while(current->next!=NULL)                            //Loop till we reach last but one node.
    {
        pre=current;                                      //Store the present address in pre.
        current=current->next;                            //Store the next node address in current.
    }
    if(pre!=NULL)                                         //Check if pre is NULL or not
    {
        pre->next=NULL;                                   //if pre is not NULL store NULL in pre->next.
    }
    else
    {
        head=NULL;                                        //if pre if NULL ,store starting address as NULL as there will be only one node in list.
    }
    printf("Deleted information is %d",current->data);    //Display the deleted data.
    free(current);                                        //free the current address.
    return head;                                          //Return the starting address.
}
struct node * delete_begin(struct node *head)             //Function definition for deleting a node at the beginning.
{
   struct node *current=head;                             //store the starting head address in current.
   head=head->next;                                       //Store next node address in head;
   printf("Deleted information is %d",current->data);     //Display the deleted data.
   free(current);                                         //free the current address.
   return head;                                           //Return the starting address.
}
main()
{
    struct node *head=NULL;                               //Store the initial address of head as NULL.
    int ch;                                               //Initialize the integer to store the choice.
    while(1)                                              //Continuous loop.
    {
        printf("Enter 1:To add the node at the end\nEnter 2:To add the node at the beginning\nEnter 3:To delete the node at the end\nEnter 4:To delete the node at the beginning\nEnter 5:To display all the node\n");
        scanf("%d",&ch);                                  //Read the choice.
        switch(ch)                                        //use switch condition to implement the choice.
        {
            case 1 : head=add_end(head);                  //Call add_end function and store the returned address in head.
                     break;
            case 2 : head=add_begin(head);                //Call add_begin function and store the returned address in head.
                    break;
            case 3: if(head==NULL)                        //Check if the list is empty.
                        printf("List is empty\n");
                    else
                        head=delete_end(head);            //Call delete_end function and store the returned address in head.
                    break;
            case 4: if(head==NULL)                        //Check if the list is empty.
                        printf("List is empty\n");
                    else
                        head=delete_begin(head);          //Call delete_begin function and store the returned address in head.
                    break;
            case 5 : display(head);                       //Display the list.
                    break;
            default :break;                               //if none of the above.
        }
    }
}
