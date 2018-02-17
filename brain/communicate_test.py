import serial
import time as t

serial_test = serial.Serial('/dev/cu.usbmodem14111', 9600) #use local port for testing purposes


# test writing data to arduino
# i = 0
# while i < 5:
#     serial_test.write('s'.encode())
#     i += 1
#     t.sleep(5)

# test reading data from arduino
while True:
    print serial_test.readline()
