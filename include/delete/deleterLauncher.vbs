Set WshShell = CreateObject("WScript.Shell") 
WshShell.Run chr(34) & "..\\include\\delete\\deleter.bat" & Chr(34), 0
Set WshShell = Nothing


' The code is from the internet - https://www.winhelponline.com/blog/run-bat-files-invisibly-without-displaying-command-prompt/