/*
Given a pointer to the head node of a linked list, print its elements in forward and backward order, separated by hyphen. If the head pointer is null (indicating the list is empty), don’t print anything.

The functions void forwardPrint() & void backwardPrint() takes the head node of a linked list as a parameter.

Note: Do not read any input from stdin/console. Each test case calls the forwardPrint & backwardPrint method individually and passes it the head of a list.

Input Format

First line contains the number of test cases.
Each test case contains an integer denoting the number of elements in list, followed by the numbers in new lines.
Output Format

Print the integer data for each element of the linked list separated by hyphen.
Sample Input

1
3
1
2
3
Sample Output

1-2-3-
3-2-1-
*/

/* struct Node
{
    int data;
    struct Node* next;
};

Above structure is used to define the linked list, You have to complete the below functions only */

// iterative solution
void forwardPrint(struct Node* head) {
  	// base case
  	struct Node* ptr = head;
	while(ptr) {
      cout << ptr->data << "-";
      ptr = ptr->next;
    }
}

// simple recursive solution
void backwardPrint(struct Node* head) {
	// base case
  	if(head == NULL)
      return;
  	// recursive call
  	backwardPrint(head->next);
  	cout << head->data << "-";
}