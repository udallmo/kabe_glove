import serial
import vlc
import time

p = vlc.MediaPlayer("/home/udallmo/Documents/projects/kglove/bali.mp3")
p.play()

# data = serial.Serial('/dev/ttyACM0', 9600)

time.sleep(10)

# while(True):
    
#     if (data.inWaiting() > 0):
#         info = data.readline().decode('utf-8')
#         print(info)

#         if (info == 1) {
            
#         }
