# this is my first code in python

print("hello github , this is my first code" '\n\n')
name="khulekani msizi ndlovu"
year="second year"
print(f"hello {name} you are doing your {year} in northwest university")

#this small code shows how variables work and how to print out you first code in python

numbers=4+5
print(numbers)
numbers=7+6
print(numbers)

#this part shows that variables can change and also maths is just normal in python
sum1=2/3
sum2=10*2
sum3=11%3
sum4=2+4*56
print(sum1 ,sum2,sum3,sum4)

#this part shows the maths operations and the order of precedence as well

message="my name is john"
print(message[5:7])
 # this part teaches about strings

mylist=['mercedes','audi','bmw']
mylist.append('toyota')
print(mylist)
mylist.insert(1,'honda')
print(mylist)

#boolen
israining=False
if israining:
    print(f"you should not go outside")
else:
    print(f"you can go outside")

student=False
print(f"are you a student: {student}")

#float
gravity=9.8
print(f"the force of gravity = {gravity}")

#type casting = a process of converting a value of one data type to another

student= True
number=23
years=2,5
name='msizi m'

number=float(number)
print(number)
print(type(number))
student=str(student)
print(type(student))

#here we are looking at the input variable

firstname=input("what is your name buddy: ")
num_of_years=int(input("enter your age: "))
num_of_years=num_of_years+1                             #this line shows an input variable with typecasting
print(f"your name is {firstname} and you are {num_of_years} years old")

igama1=input("igama1: ")
igama2=input("igama2: ")
igama3=input("igama3: ")
igama4=input("igama4: ")
igama5=input("igama5: "'\n')

print(f"izolo ngibone u {igama1} he is my favourite person. she was walking with {igama2} and it was my first time seeing her. \n later on i saw {igama3} he is a great person")
