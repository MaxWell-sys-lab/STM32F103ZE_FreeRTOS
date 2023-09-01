# Import("env")
# from time import sleep
# from serial import Serial

# def Serial_Download_Reset(target, source, env):
#     s = Serial(env.subst("$UPLOAD_PORT"))
#     s.flushInput()
#     s.setDTR(False)
#     s.setRTS(True)
#     sleep(0.1)
#     s.setDTR(True)
#     s.setRTS(True)

# env.AddPreAction("upload", Serial_Download_Reset)



Import("env")
from time import sleep
from serial import Serial

def Serial_Download_Reset(target, source, env):
    s = Serial(env.subst("$UPLOAD_PORT"))
    
    # 清除串口缓冲区
    # s.flushInput()

    # 重置操作顺序和延时微调
    s.setDTR(False)
    s.setRTS(True)
    sleep(0.1)
    s.setRTS(True)
    s.setDTR(True)
    sleep(0.1)
    
    # 增加一些额外的延时
    sleep(0.5)  # 可能需要根据实际情况微调
    
    # 清除串口缓冲区
    s.flushInput()

env.AddPreAction("upload", Serial_Download_Reset)
