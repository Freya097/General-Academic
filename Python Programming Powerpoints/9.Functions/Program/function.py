#def printme( str ):
#"This prints a passed string into this function";
#print str
#return

def PrintBlue():
    print("You Chose Blue!\r\n")

def PrintRed():
    print("You Chose Red!\r\n")

def PrintOrange():
    print("You Chose Orange!\r\n")

def PrintYellow():
    print("You Chose Yellow!\r\n")

    ColorSelect={0:PrintBlue,1:PrintRed,2:PrintOrange,3:PrintYellow}

    Selection=0

    while (Selection!=4):
        print("0.Blue")
         #print("1.Red")
          #print("2.Orange")
          # print("3.Yellow")
           # print("4.Quit")

            #Selection=int(input("Select a Color Option:"))
            #if(Selection>=0)and(Selection<4):
               # ColorSelect[Selection]()

