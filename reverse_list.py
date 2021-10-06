def reverse_list(lis):
    reversed_list = []
    n = len(lis) - 1
    while n >= 0:
        reversed_list.append(lis[n])
        n -= 1
    return reversed_list

def reverse_string(string):
    reversed_string = ""
    n = len(string) - 1
    while n >= 0:
        reversed_string += string[n]
        n -= 1
            
    return reversed_string

print(reverse_list([1,2,3,4,5,6]))
print(reverse_string("Test@hack"))
