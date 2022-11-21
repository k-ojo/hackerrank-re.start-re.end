import re
s = input()
k = input()
m = re.search(rf'{k}',s)
l= m.start()
while True:
    ls = list(s)
    if not m:
        break
    else:
        print((m.start(),m.end()-1))
        l = m.start()
        ls[l] = ' '
        s = ''.join(ls)
        m = re.search(rf'{k}',s)
