# Luhn-Algorithm
Credit card validation using Luhn algorithm

**Introduction:**


              The Luhn algorithm, commonly referred to as the modulus 10 or mod 10 algorithm, is a straightforward checksum technique used to validate a 
              multitude of identification numbers,including Canadian Social Insurance Numbers, IMEI numbers, and credit card numbers.
              A team of mathematicians invented the LUHN formula in the late 1960s. 
              Credit card firms quickly accepted it after that. Anyone can use the algorithm because it is freely available in the public domain. 
              The technique is a common way to distinguish between legitimate numbers and numbers that have been inputted incorrectly or in another way on 
              most credit cards and many government identification numbers. It was created to defend against unintentional mistakes rather than deliberate attacks.
              
              
**Steps Involved In Luhn Algorithm:**


              Step.1: Starting from the rightmost digit, double the value of every second digit
              Step.2: If doubling of a number results in a two digit number i.e greater than 9(e.g., 6 × 2 = 12), then add the digits of the product 
                       (e.g., 12: 1 + 2 = 3, 15: 1 + 5 = 6), to get a single digit number.
              Step.3: Now take the sum of all the digits.
              Step.4: If the total modulo 10 is equal to 0 (if the total ends in zero) then the number is valid according to the Luhn formula; else it is not valid.
              
**Example:**

 ![luhn](https://user-images.githubusercontent.com/91528427/195816888-54092e15-5c90-4997-9929-6fd736195a50.png)
