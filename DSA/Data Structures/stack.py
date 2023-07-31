from collections import deque
import random
import string


class Stack:
    def __init__(self):
        self.container = deque()

    def push(self, val):
        self.container.append(val)

    def pop(self):
        self.container.pop()

    def peek(self):
        return self.container[-1]

    def is_empty(self):
        return len(self.container) == 0

    def size(self):
        return len(self.container)

    def __str__(self):
        contents = ", ".join(map(str, self.container))
        return f"stack[{contents}]"


def main():
    stack = Stack()

    random_string = "".join(random.choices(
        string.ascii_uppercase + string.digits, k=7))

    for i in range(10):
        stack.push(str(random_string))

    print(stack)


if __name__ == "__main__":
    main()
