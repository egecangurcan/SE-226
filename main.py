first = lambda n: (n-3)/n**2

userinput = int(input("Please enter a number as (n)"))
list = []
for i in range(1,userinput+1):
    list.append(first(i))

print(sum(list))



def rec(n):
    if(n == 1):
        return (n/(n+2)) - 10
    else:
        return rec(n-1) * (n/(n+2)- 10)
print(rec(2))

