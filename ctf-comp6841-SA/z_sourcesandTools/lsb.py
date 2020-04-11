from PIL import Image

i=0
data = "01000110010011000100000101000111011110110011000101110101011100100110111000100100010111110011000001110101011101000101111100110001010111110111011100110100001001000101111101110011001100010110011101101110001100010110011000110001011000110011010001101110011101000101111100110100011001100111010000110011011100100101111100110100001100010011000101111101"
with Image.open("landscape1.png") as img:
    width, height = img.size
    for x in range(0, width):
        for y in range(0, height):
            pixel = list(img.getpixel((x, y)))
            for n in range(0,3):
                if(i < len(data)):
                    pixel[n] = pixel[n] & ~1 | int(data[i])
                    i+=1
            img.putpixel((x,y), tuple(pixel))
    img.save("source_secret1.png", "PNG")
print(len(data))

# source: https://itnext.io/steganography-101-lsb-introduction-with-python-4c4803e08041