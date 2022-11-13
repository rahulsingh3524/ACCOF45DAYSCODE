# WAP to check whether the last digit of a number entered by the user is divisible by 3. 

if __name__=="__main__":
  n=int(input("Enter a number")) 
  i=n%10 
  if(i%3==0): 
    print("Last digit is divisible by 3") 
  else: 
    print("Last digit is not divisible by 3") 
