Import("env")

# from time import sleep
# from serial import Serial

env.AddPostAction(
    "$BUILD_DIR/${PROGNAME}.elf",
    env.VerboseAction(" ".join([
        "$OBJCOPY", "-O", "ihex", "-R", ".eeprom",
        "$BUILD_DIR/${PROGNAME}.elf", "$BUILD_DIR/${PROGNAME}.hex"
    ]), "Building $BUILD_DIR/${PROGNAME}.hex")
)


# def Serial_Download_Reset(target, source, env):
#     s = Serial(env.subst("$UPLOAD_PORT"))
#     s.flushInput()
#     s.setDTR(False)
#     s.setRTS(True)
#     sleep(0.1)
#     s.setDTR(True)
#     s.setRTS(True)

# env.AddPreAction("upload", Serial_Download_Reset)




