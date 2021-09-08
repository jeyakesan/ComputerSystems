import sys
def endian_conv(value):
    left_most_byte = (value & 0x000000ff) >> 0
    left_mid_byte = (value & 0x0000ff00) >> 8
    right_mid_byte = (value & 0x00ff0000) >> 16
    right_most_byte= (value & 0xff000000) >> 24
    left_most_byte <<= 24
    left_mid_byte <<= 16
    right_mid_byte <<= 8
    right_most_byte <<= 0
    return (left_most_byte|left_mid_byte|right_mid_byte|right_most_byte)

value = int (input("Enter the Hexadecimal Value for the type int (eg:0x12345678): "), 16)
converted=(endian_conv(value))
if sys.byteorder == "little":
    print("your system is little Endian ")
    print("The Little endian Byte Order: ", hex(endian_conv(value)))
    choice =input("would you like to convert to Big Endian? (y/n):" )
    if (choice=='y' or choice=='Y' ):
        print("Converted Big endian Byteorder:", hex(endian_conv(converted)))
else:
    print("your system is Big Endian")
    print("The Big endian Byte Order: ", hex(endian_conv(converted)))
    choice = input("would you like to convert to Little Endian? (y/n):" )
    if (choice=='y' or choice=='Y' ):
        print("converted Little endian order", hex(endian_conv(value)))