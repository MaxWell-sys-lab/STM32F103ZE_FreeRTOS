Import("env")
from time import sleep
from serial import Serial

def Serial_Download_Reset(target, source, env):
    s = Serial(env.subst("$UPLOAD_PORT"))
    s.flushInput()
    s.setDTR(False)
    s.setRTS(True)
    sleep(0.1)
    s.setDTR(True)
    s.setRTS(True)

env.AddPreAction("upload", Serial_Download_Reset)

