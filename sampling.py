import random
import matplotlib
import numpy as np
import matplotlib.pyplot as plt
counter = 0
N = 300
sum = 0
sum2 = 0
ave = []
data = []
sample_list =[]
population = []
for i in range(1,300+1):
    for j in range(1,1000+1):
        population.append(j)
    sample_list = random.sample(population,1000)
    counter = 0
    sum = 0
    for k in range(1,N+1):
        if(sample_list[k] <= 627):
            counter = counter +1
        else:
            pass
    sum = sum + counter
    sum2 = sum2 + sum
    ave.append(sum / N)
    data.append(counter)
print(data)
print(ave)
counter / N

print(sum2 / 300 /N)
plt.show(counter/N,data)
