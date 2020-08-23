for i in range (1000,10000) :
    m = i
    sum = 0
    for j in range (4) :
        sum += pow ((m % 10), 4)
        m = m // 10
    if sum == i :
        print (sum)
