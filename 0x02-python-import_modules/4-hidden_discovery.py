#!/usr/bin/python3
if __name__ == '__main__':
    import hidden_4
    hidden_list = dir(hidden_4)
    for i in hidden_list:
        if i[0:2] != '__':
            print(i)
