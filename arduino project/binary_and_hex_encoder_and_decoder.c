//***********************************************************************************************************
//***************************INSTRUCTION********************************
//***********************************************************************************************************
//Instructions:Do not enter any of the slashes in the code and do not enter and lowercase letters. //If you want info on the binary and hex of a certain letter than enter the letter in UPPERCASE. //Enter every space and letters inside the slashes but NOT THE DASHES. Do not enter any //extra numbers or letter or the program will not work. I AM NOT RESPONSIBLE FOR ANY //KIND OF STORAGE PROBLEM WITH ARDUINO AFTER USING THIS PROGRAM! This //program was made for the arduino uno I am not sure if this will work for any other arduino //board such as the arduino mega or any other arduino boards.


//Example: /Number/Number/Number/ /Number
//Do not enter in any of the slashes so you would enter it like this:
//Number
//Number
//Number
//Space
//Number
//This is all the program will be able to decode and code in binary and Hex which is the 
//Code that I made……….HAVE FUN!
//When writing this code down on paper you must seperate the letters by slashes and the words by spaces.

//WARNING:I AM NOT RESPONISIBLE OFR USING SOME OF THE AUDRINOS MEMORY OR IF //YOU HAVE PROBLEMS AFTER USING THIS PROGRAM YOU HAVE BEEN WARNED BY //UPLOADING THIS PROGRAM YOU HAVE 
//AGREED TO THIS........YOU HAVE BEEN WARNED.
//Developed ON 2/3/2018 2/4/2018 and 2/5/2018
boolean gate1 = false;//These are just for security
boolean gate2 = false;
boolean gate3 = false;
boolean gate4 = false;
boolean gate5 = false;
boolean gate6 = false;
boolean gate7 = false;
boolean gate8 = false;
boolean gate9 = false;
boolean gate10 = false;
void setup() {
  Serial.begin(9600);
  gate1 = false;
  gate2 = false;
  gate3 = false;
  gate4 = false;
  gate5 = false;
    gate6 = false;
      gate7 = false;
        gate8 = false;
          gate9 = false;
            gate10 = false;
  Serial.println("What is the password?");

}
void 
loop() {
String input;
    input = Serial.readStringUntil('\n');
    if(input.equals("1234")){//You can change this to your own password
    Serial.println("PASSWORD EXCEPTED");
   
    gate1 = true;
    gate2 = true;
    gate3 = true;
    gate4 = true;
    gate5 = true;
    gate6 = true;
    gate7 = true;
    gate8 = true;
    gate9 = true;
    gate10 = true;}    
  while((gate1 == true)&&(gate2 == true) &&(gate3 == true) && (gate4 == true)&&(gate5 == true)&& (gate6 == true)&& (gate7 == true)&& (gate8 == true)&& (gate9 == true) && (gate10 == true)){
   if (input.equals("A")){
    Serial.println("Letter:A");
    delay(250);
    Serial.println("Binary:01000001");
     delay(250);
    Serial.println("HEX:886435"); }
    if (input.equals("01000001")){
    Serial.print("A");}
    if (input.equals("886435")){
    Serial.print("A");}
    
   if (input.equals("B")){
    Serial.println("Letter:B");
     delay(250);
    Serial.println("Binary:01000010");
     delay(250);
    Serial.println("HEX:576456");}
    if (input.equals("576456")){
      Serial.print("B");} 
       if (input.equals("01000010")){
      Serial.print("B");} 
   if (input.equals("C")){
    Serial.println("Letter:C");
     delay(250);
     Serial.println("Binary:01000011");
      delay(250);
    Serial.println("HEX:1107459"); }
    if(input.equals("1107459")){
      Serial.print("C");}
       if(input.equals("01000011")){
      Serial.print("C");}
   if (input.equals("D")){
    Serial.println("Letter:D");
     delay(250);
    Serial.println("Binary:01000100");
     delay(250);
    Serial.println("HEX:354524");}
    if(input.equals("354524")){
      Serial.print("D");}
      if(input.equals("01000100")){
      Serial.print("D");}
   if (input.equals("E")){
    Serial.println("Letter:E");
     delay(250);
    Serial.println("Binary:01000101");
     delay(250);
    Serial.println("HEX:1329837");}
     if(input.equals("1329837")){
      Serial.print("E");}
      if(input.equals("01000101")){
        Serial.print("E");}
     if (input.equals("F")){
      Serial.println("Letter:F");
       delay(250);
    Serial.println("Binary:01000110");
     delay(250);
    Serial.println("HEX:132327"); }
     if (input.equals("01000110")){
      Serial.print("F");}
        if (input.equals("132327")){
          Serial.print("F");}
     if (input.equals("G")){
       Serial.println("Letter:G");
        delay(250);
    Serial.println("Binary:01000111");
     delay(250);
    Serial.println("HEX:1552083"); }
      if (input.equals("01000111")){
        Serial.print("G");}
        if (input.equals("1552083")){
          Serial.print("G");}
    if (input.equals("H")){
      Serial.println("Letter:H");
       delay(250);
    Serial.println("Binary:01001000");
     delay(250);
    Serial.println("HEX:1664511"); }
    if (input.equals("01001000")){
      Serial.print("H"); }
    if (input.equals("1664511")){
      Serial.print("H");}
    if (input.equals("I")){
      Serial.println("Letter:I");
       delay(250);
      Serial.println("Binary:01001001");
       delay(250);
      Serial.println("HEX:1775625");}
      if(input.equals("01001001")){
        Serial.print("I");}
      if(input.equals("1775625")){
        Serial.print("I");}
      if (input.equals("J")){
         Serial.println("Letter:J");
          delay(250);
    Serial.println("Binary:01001010");
     delay(250);
    Serial.println("HEX:678116"); }
             if(input.equals("01001010")){
        Serial.print("J");}
           if(input.equals("678116")){
        Serial.print("J");}
      if(input.equals("K")){
    Serial.println("Letter:K");
    Serial.println("Binary:01001011");
    Serial.println("HEX:899093"); }
       // if(input.equals("01001011"));{//Solve this problem ounce done programming for some reson this line made the program just make the serial monitor display k a lot
         // Serial.print("K");}
          if(input.equals("899093")){
            Serial.print("K");}
       if (input.equals("L")){
        Serial.println("Letter:L");
    Serial.println("Binary:01001100");
    Serial.println("HEX:899093"); }
       if(input.equals("01001100")){
            Serial.print("L");}
            if(input.equals("899093")){
            Serial.print("L");}
       if (input.equals("M")){
        Serial.println("Letter:M");
    Serial.println("Binary:01001101");
    Serial.println("HEX:919374"); }
       if(input.equals("919374")){
            Serial.print("M");}
             if(input.equals("01001101")){
            Serial.print("M");}
      if(input.equals("N")){
         Serial.println("Letter:N");
    Serial.println("Binary:01001110");
    Serial.println("HEX:646872"); }
            if(input.equals("646872")){
            Serial.print("N");}
            if(input.equals("01001110")){
            Serial.print("N");}              
         if (input.equals("O")){
    Serial.println("Letter:O");
    Serial.println("Binary:01001111");
    Serial.println("HEX:646875"); }
                   if(input.equals("646875")){
            Serial.print("O");}
                   if(input.equals("01001111")){
            Serial.print("O");}
       if (input.equals("P")){
          Serial.println("Letter:P");
    Serial.println("Binary:01010000");
    Serial.println("HEX:950133"); }
                   if(input.equals("01010000")){
            Serial.print("P");}
            if(input.equals("950133")){
            Serial.print("P");}
       if (input.equals("Q")){
        Serial.println("Letter:Q");
    Serial.println("Binary:01010001");
    Serial.println("HEX:637209"); }
                if(input.equals("51")){
            Serial.print("Q");}
                if(input.equals("01010001")){
            Serial.print("Q");}
             if(input.equals("637209")){
            Serial.print("Q");}
       if (input.equals("R")){
         Serial.println("Letter:R");
    Serial.println("Binary:01010010");
    Serial.println("HEX:970359");} 
             if(input.equals("970359")){
            Serial.print("R");}
             if(input.equals("01010010")){
            Serial.print("R");}
       if (input.equals("S")){
         Serial.println("Letter:S");
    Serial.println("Binary:01010011");
    Serial.println("HEX:617031");} 
               if(input.equals("617031")){
            Serial.print("S");}
               if(input.equals("01010011")){
            Serial.print("S");}
     if (input.equals("T")){
       Serial.println("Letter:T");
    Serial.println("Binary:01010100");
    Serial.println("HEX:990729");} 
               if(input.equals("01010100")){
            Serial.print("T");}
             if(input.equals("990729")){
            Serial.print("T");}
      if (input.equals("U")){
         Serial.println("Letter:U");
    Serial.println("Binary:01010101");
    Serial.println("HEX:596997");} 
                 if(input.equals("01010101")){
            Serial.print("U");}
              if(input.equals("55")){
            Serial.print("U");}
              if(input.equals("596997")){
            Serial.print("U");}
      if (input.equals("V")){
        Serial.println("Letter:V");
    Serial.println("Binary:01010110");
    Serial.print("HEX:586917");}     
if(input.equals("01010110")){
Serial.print("V");}
if(input.equals("586917")){
Serial.print("V");}
if (input.equals("W")){
Serial.println("Letter:W");
Serial.println("Binary:01010111");
Serial.println("HEX:576819");}   
if(input.equals("01010111")){
Serial.print("W");}
if(input.equals("576819")){
Serial.print("W");}
if (input.equals("X")){
Serial.println("Letter:X");
Serial.println("Binary:01001001");
Serial.println("HEX:1032477");}
if (input.equals("01001001")){
Serial.print("X");}
if (input.equals("1032477")){
Serial.print("X");}
if (input.equals("Y")){
Serial.println("Letter:Y");
Serial.println("Binary:01011001");
Serial.println("HEX:557937");}
if (input.equals("557937")){
Serial.print("Y");} 
if (input.equals("01011001")){
Serial.print("Y");} 
if (input.equals("Z")){
Serial.println("Letter:Z");
Serial.println("Binary:01011010");
Serial.println("HEX:1052703");}
if (input.equals("1052703")){
Serial.print("Z");}
if (input.equals("01011010")){
Serial.print("Z");}
if(input.equals(" ")){
Serial.print(" ");}
if(input.equals("/")){
Serial.print("");}
if(input.equals("1830")){
Serial.print("?");}
if(input.equals("2951")){
Serial.print("!");}
if(input.equals("5215")){
Serial.println("");}
if(input.equals("10914")){
Serial.print("/");}
if(input.equals("5340")){
Serial.print(",");}
if(input.equals("8240")){
Serial.print("(");}
if(input.equals("7681")){
Serial.print(")");}
if(input.equals("6920")){
Serial.print(".");}
if(input.equals("3232")){
Serial.print("+");}
if(input.equals("2323")){
Serial.print("-");}
if(input.equals("5010")){
Serial.print("=");}
if(input.equals("3000")){
Serial.print("!");}
if(input.equals("9829")){
Serial.print("@");}
if(input.equals("2300")){
Serial.print("}");}
if(input.equals("6700")){
Serial.print("{");}
if(input.equals("5460")){
Serial.print("[");}
if(input.equals("1111")){
Serial.print("]");}
if(input.equals("2222")){
Serial.print("#");}
if(input.equals("3333")){
Serial.print("$");}
if(input.equals("4444")){
Serial.print("%");}
if(input.equals("5555")){
Serial.print("^");}
if(input.equals("6666")){
Serial.print("&");}
if(input.equals("7777")){
Serial.print("*");}
if(input.equals("8888")){
Serial.print("_");}
if(input.equals("9999")){
Serial.print(">");}
if(input.equals("3111")){
Serial.print("<");}
if(input.equals("4555")){
Serial.print("|");}
if(input.equals("1222")){
Serial.print("'");}
if(input.equals("3612")){
Serial.print("1");}
if(input.equals("000000")){
Serial.print("0");}
if(input.equals("9640")){
Serial.print("0");}
if(input.equals("000001")){
Serial.print("1");}
if(input.equals("7249")){
Serial.print("1");}
if(input.equals("000010")){
Serial.print("2");}
if(input.equals("3612")){
Serial.print("2");}
if(input.equals("000011")){
Serial.print("3");}
if(input.equals("4456")){
Serial.print("3");}
if(input.equals("000100")){
Serial.print("4");}
if(input.equals("6366")){
Serial.print("4");}
if(input.equals("000101")){
Serial.print("5");}
if(input.equals("9765")){
Serial.print("5");}
if(input.equals("000110")){
Serial.print("6");}
if(input.equals("1285")){
Serial.print("6");}
if(input.equals("000111")){
Serial.print("7");}
if(input.equals("2876")){
Serial.print("7");}
if(input.equals("001000")){
Serial.print("8");}
if(input.equals("9100")){
Serial.print("8");}
if(input.equals("001001")){
Serial.print("9");}
if(input.equals("1001")){
Serial.print("9");}
if(input.equals("001010")){
Serial.print("10");}
if(input.equals("9008")){
Serial.print("10");}
if(input.equals("Serial.end();")){
    Serial.println("COMMUNICATIONS WITH THE SERIAL MONITOR TERMANATED"); 
Serial.end();
  }
  if(input.equals("Sign Out")){
Serial.println("Signing out");
  gate1 = false;
  gate2 = false;
  gate3 = false;
  gate4 = false;
  gate5 = false;
    gate6 = false;
      gate7 = false;
        gate8 = false;
          gate9 = false;
            gate10 = false;
            Serial.println("Sign Out");
}return;}
} 