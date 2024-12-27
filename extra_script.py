Import('env')
from os.path import join, realpath, exists

# We need the equivalent of build.mcu in Arduino board definitions. 
# For ESP this is BOARD_MCU
cpu = env.get("BOARD_MCU")

# For ARM cores, BOARD_MCU is the chip (e.g. rp2040), not the cpu (e.g. cortex-m0plus).
# To find the correct binary, we check the linkflags.
linkflags = env.get("LINKFLAGS", [])
for flag in linkflags:
    if flag.startswith("-mcpu="):
        prefix, divider, cpu = flag.partition("=")
        continue

path = realpath(join("src/ezlopi-components/Bosch_BSEC2/precompiled_binaries", cpu))
if exists(path):
    env.Append(
        LIBPATH=[realpath(join("srcezlopi-components/Bosch_BSEC2/precompiled_binaries", cpu))],
        LIBS=["algobsec"]
        print(f"BSEC2 is supported for CPU '{cpu}', path '{path}' exist")
    )
else:
    print(f"BSEC2 is not supported for CPU '{cpu}', path '{path}' doesn't exist")
    exit(1)
