//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};


// } Driver Code Ends
//User function Template for C++

/*Link list node 
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* reverseBetween(Node* head, int left, int right)
    {
        //code here
        Node* dummy = new Node(-1);
        Node* leftPrev = dummy;
        dummy->next = head;
        
        Node* curr = head;
        for(int i=0;i<left-1;i++){
            leftPrev = leftPrev->next;
            curr = curr->next;
        }
        
        Node* subListHead = curr;
        Node* prev = NULL;
        //reverse a subList in the LinkedList 
        for(int i=0;i<=right-left;i++){
            Node* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        
        leftPrev->next = prev;
        subListHead->next = curr;
        
        return dummy->next;
        
    }
};

//{ Driver Code Starts.

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int N, m, n;
		cin >> N>>m>>n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		

        Solution ob;

		Node* newhead = ob.reverseBetween(head, m, n);
		printList(newhead);

		cout << "\n";



	}
	return 0;
}

// } Driver Code Ends