# This is a sketch meant to test the algorithm in a language I am more comfortable in.

import time

flist = [1, 1, 2]

for i in range(5):
    flist.append(flist[(i+1)+1] + flist[i+1])
    print(flist[i])
    for j in range(flist[i]):
        time.sleep(0.5)
        print("BLINK")
    time.sleep(2.5)
print(flist)