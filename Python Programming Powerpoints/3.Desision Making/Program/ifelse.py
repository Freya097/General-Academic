print( "Please enter a negative number" )

number = int( input( "> " ) )

if number >= 0:
    print( "That wasn't negative!" )
else:
    print( "Thank you!" )

# Our next example is a simple if/else if/else statement

print( "Which type of pet do you prefer?" )
print( " cats" )
print( " dogs" )

# Note how we use raw_input to get the input as a string
pet = input( "< " )

if pet == "cats":
    print( "You chose cats." )
elif pet == "dogs":
    print( "You chose dogs." )
else:
    print( "That's not one of the choices." )

input( '\n\nPress Enter to exit...' )
