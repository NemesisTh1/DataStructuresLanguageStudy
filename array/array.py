import numpy as np
i = 0;
array = []
for i in range(10):
    array.append(np.random.randint(100, size=1))
    print("This is the " + str(i) + " element of the array: " + str(array[i]))
    i = i + 1