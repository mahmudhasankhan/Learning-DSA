class Node:
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next


class LinkedList:
    def __init__(self):
        self.head = None
    def print_list(self):
        current_node = self.head
        llist = ''
        while current_node:
            llist = llist + current_node.data + '->'
            current_node = current_node.next
            print(llist)
            
    def append(self, data):
        new_node = Node(data)
        # upend the list
        if self.head is None:
            self.head = new_node
            return
        last_node = self.head
        # travers the linkedlist while last_node is not null
        while last_node.next:
            last_node = last_node.next
        # insert the node at the end
        last_node.next = new_node
        
    def prepend(self, data):
        new_node = Node(data)
        # upend the list
        if self.head is None:
            self.head = new_node
            return
        
        new_node.next = self.head
        self.head = new_node
    
    def insert_after_node(self,prev_node, data):
        
        if not prev_node:
            print("Previous node is not in the list")
            return
        new_node = Node(data)
        new_node.next = prev_node.next
        prev_node.next = new_node
        
        
if __name__ == '__main__':
    llist = LinkedList()
    llist.append('A')
    llist.append('B')
    llist.append('C')
    llist.append('D')
    llist.prepend('E')
    
    # I can choose which node I want before
    current_node = llist.head
    while True:
        if current_node.data == 'B':
            llist.insert_after_node(current_node, 'F')
            llist.print_list()
            break
        else:
            current_node = current_node.next
    
