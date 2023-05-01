/**
 * get_nodeint_at_index - returns node t index in a linked list
 * @head: pointer to the first node in the linked list
 * @index: index of node to return
 *
 * Return: Null or pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;

while (temp && i < index)
{
temp = temp->next;
i++;
}

return (temp? temp : NULL);
}
