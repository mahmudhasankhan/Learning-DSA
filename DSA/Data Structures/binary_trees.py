"""Binary Tree, Python Implementation.
DFS traversals using recursion, with different order variations"""

from collections import deque


class Queue(object):
    def __init__(self):
        self.items = []

    def enqueue(self, item):
        self.items.insert(0, item)

    def dequeue(self):
        if not self.is_empty():
            return self.items.pop()

    def is_empty(self):
        return len(self.items) == 0

    def peek(self):
        if not self.is_empty():
            return self.items[-1].value

    def __len__(self):
        return self.size()

    def size(self):
        return len(self.items)


class Node(object):
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None


class BinaryTree(object):
    def __init__(self, root):
        self.root = Node(root)

    # Helper Function
    def print_tree(self, traversal_type: str) -> str:
        if traversal_type == "preorder":
            return self.pre_order_print(self.root, "")
        elif traversal_type == "inorder":
            return self.in_order_print(self.root, "")
        elif traversal_type == "postorder":
            return self.post_order_print(self.root, "")
        elif traversal_type == "levelorder":
            return self.level_order_print(self.root)
        elif traversal_type == "levelorder-deque":
            return self.level_order_print_with_deque(self.root)
        else:
            return f"Traversal Type {traversal_type} is not supported"

    # DFS: Preorder
    def pre_order_print(self, root: Node, traversal: str) -> str:
        """Root->Left->Right"""
        if root:
            traversal += str(root.value) + "->"
            traversal = self.pre_order_print(root.left, traversal)
            traversal = self.pre_order_print(root.right, traversal)
        return traversal

    # DFS: Inorder
    def in_order_print(self, root: Node, traversal: str) -> str:
        """Left->Root->Right"""
        if root:
            traversal = self.in_order_print(root.left, traversal)
            traversal += str(root.value) + "->"
            traversal = self.in_order_print(root.right, traversal)
        return traversal

    # DFS: Postorder
    def post_order_print(self, root, traversal) -> str:
        """Left->Right->Root"""
        if root:
            traversal = self.post_order_print(root.left, traversal)
            traversal = self.post_order_print(root.right, traversal)
            traversal += str(root.value) + "->"
        return traversal

    def level_order_print(self, root: Node) -> str:
        if root is None:
            return
        queue = Queue()
        queue.enqueue(root)
        traversal = ""

        while queue:
            traversal += str(queue.peek()) + "->"
            node = queue.dequeue()
            if node.left:
                queue.enqueue(node.left)
            if node.right:
                queue.enqueue(node.right)
        return traversal

    def level_order_print_with_deque(self, root: Node) -> str:
        if root is None:
            return
        queue = deque([root])
        traversal = ""
        while queue:
            traversal += str(queue[-1].value) + "->"
            node = queue.pop()
            if node.left:
                queue.appendleft(node.left)
            if node.right:
                queue.appendleft(node.right)
        return traversal

    def maximum_depth_with_recursive_dfs(self, root: Node) -> int:
        if root is None:
            return 0
        return 1 + max(self.maximum_depth(root.left),
                       self.maximum_depth(root.right))

    def maximum_depth_with_bfs(self, root: Node) -> int:
        if root is None:
            return 0
        queue = deque([root])
        count = 0
        while queue:

            #           Tree
            #
            #            10
            #           /  \
            #          2    3
            #         / \  / \
            #        4  10 10 20


def main():
    tree = BinaryTree(10)
    tree.root.left = Node(2)
    tree.root.right = Node(3)
    tree.root.left.left = Node(4)
    tree.root.left.right = Node(10)
    tree.root.right.left = Node(10)
    tree.root.right.right = Node(20)

    print(f" Pre-order: {tree.print_tree('preorder')}")
    print(f" In-order: {tree.print_tree('inorder')}")
    print(f" Post-order: {tree.print_tree('postorder')}")
    print(f" Level-order: {tree.print_tree('levelorder')}")
    print(f" Level-order-deque: {tree.print_tree('levelorder-deque')}")
    print(f"Maximum Depth of a tree: {tree.maximum_depth(tree.root)}")


if __name__ == "__main__":
    main()
