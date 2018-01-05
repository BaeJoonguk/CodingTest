#include <stdio.h>

#define MAX_NODE 100

typedef struct ListNode
{
  int data;
  struct listNode* prev;
  struct listNode* next;
} ListNode;

typedef struct
{
  int use;
  ListNode node;
} ListNodeHeap;

ListNodeHeap heap[MAX_NODE];

void initHeap(void)
{
  int i;
  for (i = 0; i < MAX_NODE; i++)
  {
    heap[i].use = 0;
  }
}

void initListNode(ListNode* node)
{
  node->data = 0;
  node->prev = node;
  node->next = node;
}

ListNode* getListNode(void)
{
  int i;
  for (i = 0; i < MAX_NODE; i++)
  {
    if (!heap[i].use)
    {
      heap[i].use = 1;
      initListNode (&heap[i].node);
      return &heap[i].node;
    }
  }
  return NULL;
}

ListNode* appendListNode(ListNode* list, int data)
{
  ListNode* node = getListNode();
  node->data = data;
  if (list == NULL)
  {
    return node;
  }
  else
  {
    ListNode* last = list->prev;
    last->next = node;
    list->prev = node;
    node->prev = last;
    node->next = list;
    return list;
  }
}

ListNode* removeListNode(ListNode* list, ListNode* node)
{
  if (list == list->next)
  {
    destoryListNode(node);
    return NULL;
  }
  else
  {
    ListNode* prev = node->prev;
    ListNode* next = node->next;
    prev->next = next;
    next->prev = prev;
    destoryListNode(node);
    return (list == node) ? next : list;
  }
}

int main(int argc, char* argv[])
{
  int T, N;

  setbuf(stdout, NULL);
  scanf("%d", &T);

  for (int test_case = 1; test_case <= T; ++test_case)
  {
    ListNode* list = NULL;
    ListNode* node;
    int i;

    initHeap();

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
      int data;
      scanf("%d", &data);
      list = appendListNode(list, data);
    }

    node = list;
    while (list != list->next)
    {
      ListNoe* nextNode = node->next;
      list = removeListNode(list, node);
      node = nextNode->next->next;
    }
    printf("#%d %d\n", test_case, list->data);
  }
  return 0;
}
