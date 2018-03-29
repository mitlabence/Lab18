#from yeelight import discover_bulbs
#discover_bulbs()
OS = ["W","L"][1]
if OS:
    import pyscreenshot as ImageGrab
else:
    from PIL import ImageGrab
import time
time.clock()
image = ImageGrab.grab()
image.show()
for y in range(500, 600, 10):
    for x in range(500, 600, 10):
        color = image.getpixel((x, y))
        print(color)
print(time.clock())