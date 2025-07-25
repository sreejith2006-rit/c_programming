p=float(input("enter"))
r=float(input("enter the rate of interst"))
t=int(input("enter the no of years"))
n=int(input("enter the cs scheme"))
ci=p*((1+r/(100*n))**(t*n))-p
print(ci)