#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
}NODE;

NODE* add(NODE*, int);
void disp(NODE*);
//int search(NODE*, int);

int main()
{
	//Create an empty warehouse
	NODE *head=NULL;
	int opt, item;
	while(1)
	{
		printf(&quot;\n1: Add item 2: Display &quot;);
		printf(&quot;3: exit&quot;);
		printf(&quot;\nEnter your option: &quot;);
		scanf(&quot;%d&quot;, &amp;opt);

		switch(opt)
		{
			case 1: printf(&quot;\nEnter item to add to list: &quot;);
			scanf(&quot;%d&quot;, &amp;item);
			head=add(head, item);
			break;
			case 2: disp(head);
			break;
			case 3: exit(0);
		}
	}
	return 0;
}

NODE* add(NODE* head, int item)
{
	NODE *start, *curr;
	NODE *newnode=(NODE*)malloc(sizeof(NODE));
	if(newnode==NULL)
	{
		printf(&quot;\nMalloc failure&quot;);
		exit(1);
	}
	newnode-&gt;data=item;

	newnode-&gt;next=NULL;
	newnode-&gt;prev=NULL;
	// Case i - List is empty
	if(head==NULL)
		head=newnode;
	else // Case ii - adding the smallest item
		if(item &lt; head-&gt;data)
		{
			newnode-&gt;next = head;
			head = newnode;
		}
		else // Case iii
		{
			start=head;
			curr=head-&gt;next;
			while(curr &amp;&amp; item &gt; curr-&gt;data)
			{
				start=start-&gt;next;
				curr=curr-&gt;next;
			}//end of while
			newnode-&gt;next=curr;
			newnode-&gt;prev=start;
			start-&gt;next=newnode;

		}//end of else

	return head;
}

void disp(NODE *head)
{
if(head==NULL)
{
printf(&quot;\nlist is empty&quot;);
return;
}
printf(&quot;\nThe list items are: &quot;);
while(head)
{
printf(&quot;%d &quot;, head-&gt;data);
head=head-&gt;next;
}
}