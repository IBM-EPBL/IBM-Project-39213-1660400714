import random #random function 
temp=random.randint(1,100)
humty=random.randint(1,100)
print(temp)#temperature value
print(humty)#hmidity value

if ((temp<30)&(humty<50)):
    print("temperature is normal :")
    print("humidity is normal:")
    print("alarm off")
elif((temp<30)&(humty>50)):
    print("temperature is low")
    print("humidity is high")
    print("alarm off")
elif((temp>30) & (humty<50)):
    print("temperature is high:")
    print("humidity is normal")
    print("alarm on")    
elif((temp>30) & (humty<60)):
    print("temperature is high")
    print("humidity is normal:")
    print("alarm on")
elif((temp>30) & (humty>60)):
    print("temperature is high")
    print("humidity is high")
    print("alarm on")