### attomic
Decompiled source of attomic malware

### Usage
As you please :)

### Note
If you're going to decompile malware like attomic which targets Windows, for the MBR part you shouldn't rely on your decompiler (if you use one)! In most cases bytes won't be aligned perfectly and usually, it'd skip a few bytes. Preferably, create a Windows VM and run the malware (and if you're sure that it'd instantly overwrite the MBR, terminate it) and read the usual 512 bytes from "\\.\PhysicalDrive0" and save the values (if necessary). Now you can port that MBR data to that decompiled malware.

(i). If that particular malware has watchdog processes, it's recommended to bulk kill all those processes before they terminate Windows.

(ii). If Windows crashes before you can do anything, you may still however grab the newly written MBR. Usually, you can boot a Linux ISO on that system, and using the `dd` command you can write that out. However, it's theoretical and I haven't yet tested it out.

### Fun fact
attomic was created by Lukonix in a malware competition that was held back in 2021 in "No_Name".
