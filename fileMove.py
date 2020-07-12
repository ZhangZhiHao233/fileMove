import os, shutil
srcDir = "I:\\trigger0701\\12cheTrigger"
dstDir = "I:\\trigger0701\\12che"
lst = os.listdir(srcDir)
for i in range(0, len(lst)):
    fileName = lst[i]
    filePath = os.path.join(srcDir, fileName)
    if os.path.isdir(filePath):
        subLst = os.listdir(filePath)
        for j in range(0, len(subLst)):
            subfileName = subLst[j]
            subfilePath = os.path.join(srcDir, fileName, subfileName)
            if os.path.isfile(subfilePath):
                newFilePath = os.path.join(dstDir, subfileName)
                if os.path.exists(newFilePath):
                    print(" ")
                else:
                   shutil.move(subfilePath, newFilePath)

