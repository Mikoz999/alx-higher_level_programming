#!/usr/bin/python3
import dis


def print_names(module):
    for name in dir(module):
        if not name.startswith("__"):
            print(name)


if __name__ == "__main__":
    import hidden_4
    print_names(hidden_4)
