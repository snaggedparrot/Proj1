//Grant Makin
//C3206106


#include<stdio.h>
//This program uses the Rotation Cipher Method of encription and decription 

//Function propotype rotation cipher

void rotationCipherE (char *Plaintext, int key);                //declaring the encrytion rotation cipher
void decryptionCipher (char *Ciphertext, int key);              //declaring the decryption rotation cipher
void selectedkey(int key);
 
main () 
{
  
int key = 1;                // The key is set to 1
char Plaintext[100];                                            // Declaring the Plaintext array to a size of 100
char Ciphertext[100];                                           // Declaring the Cipher text array

 
//selectedkey(key);                                             // calling the function that determines the users key
printf ("enter message :");                                     // Prompts the user to enter the message they need encrypted
  
gets (Plaintext);                                               // Reads a line at a time from the stdin and stores it in Plaintext, this goes on until a blank space is found.
  
printf ("\nyou entered: ");                                     // Prints users message
  
puts (Plaintext);                                               // writes a line at the time from the stdout untill a 0 is found, IE it will write out the whole word .

printf ("\nCipher Text Result: ");                              //
rotationCipherE (Plaintext, key);                           	//calling the function for encryption, which then prints the rotated cipher.





printf ("\nenter cipher text :");                               
gets(Ciphertext);
 
printf ("\nyou entered: ");
  
puts (Ciphertext);

printf ("\nDecryption cipher Result: ");

decryptionCipher(Ciphertext, key);                        //calling the function for ecryption 

  
return 0;

 
}


 
//rotation encryption function for producing cipher -----------------------------------------------------------------------------------------------------------------
  
rotationCipherE (char *Plaintext, int key)                  //function header
{
  
int i = 0;                                                  //i is used as a counter, is set to 0 originally
  
int ciphervalue;                                            //Declaring
    
char cipher;                                                //Declaring
  
 
while (Plaintext[i] != '\0' && 15 > i)                      //while loop will run if both conditions are met, once the array has an zero or reaches 15.
    {
      
ciphervalue = ((int) Plaintext[i] - 65 + key) % 26 + 65;    //65 represents A, from ASCII. the remainder of 26 is used as it represents the letters of the alphabet.
                                                            //MATHS
cipher = (char) (ciphervalue);                              
      
 
printf ("%c", cipher);                                      //prints the new cipher value (word)
      
i++;                                                        //increments i by 1 each time

} 
}
 //Rotation decryption cipher---------------------------------------------------------------------------------------------------------------------------------
decryptionCipher (char *Ciphertext, int key)
{
int j = 0;

int messagevalue;

char message;

while (Ciphertext[j]  != '\0' && 15 > j)
{
    messagevalue = ((int) Ciphertext[j] - 65 - key) % 26 + 65;
    
    message = (char) (messagevalue);
    
    printf ("%c", message);
    
    j++;
    
}
}
//key function------------------------------------------------------------------------------------------------------------------------------------------------
//selectedkey(int key)
//{
 //   printf("Enter the key value: ");                          //user prompted for the key value they are using.
 //   scanf("the key is: %d", &key);                            //stores the entered value into 'key.'

//}
//printf("\n");

//Note, code not working in CHE, does work in OnlineGDB and i will demonstrate in GDB. 




 
