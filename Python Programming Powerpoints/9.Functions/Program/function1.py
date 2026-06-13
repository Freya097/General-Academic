def fibonacci( n ):
    a, b = 0, 1
    while b < n:
        print( b )
        a, b = b, a+b

# Now call the function we just defined...

fibonacci( 2000 )

input( '\n\nPress Enter to exit...' )
