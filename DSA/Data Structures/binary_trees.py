"""Binary Tree, Python Implementation.
DFS traversals using recursion, with different order variations"""


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
        else:
            return f"Traversal Type {traversal_type} is not supported"

    # DFS: Preorder
    def pre_order_print(self, start, traversal) -> str:
        """Root->Left->Right"""
        if start:
            traversal += str(start.value) + "->"
            traversal = self.pre_order_print(start.left, traversal)
            traversal = self.pre_order_print(start.right, traversal)
        return traversal

    # DFS: Inorder
    def in_order_print(self, start, traversal) -> str:
        """Left->Root->Right"""
        if start:
            traversal = self.in_order_print(start.left, traversal)
            traversal += str(start.value) + "->"
            traversal = self.in_order_print(start.right, traversal)
        return traversal

    # DFS: Postorder
    def post_order_print(self, start, traversal) -> str:
        """Left->Right->Root"""
        if start:
            traversal = self.post_order_print(start.left, traversal)
            traversal = self.post_order_print(start.right, traversal)
            traversal += str(start.value) + "->"
        return traversal

#           Binary Tree
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


if __name__ == "__main__":
    main()
