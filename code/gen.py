import re

with open("test.txt",'r') as file:
    lines = file.readlines()

file = open("out.txt",'w')

ask = ""
ans = ""
i = 0
while i < len(lines):
    if re.search(r"Задание",lines[i], re.M|re.I):
        print("mas.push_back(Task(\"{0}\",\"{1}\"));".format(ask.replace("\n",' ').replace("\"","'"), ans.replace("\n",'/n').replace("\"","'")),file=file)
        ask = lines[i+1] + " " + lines[i+2]
        i += 3
        ans = ""
        continue
    ans += lines[i]
    i += 1
print("mas.push_back(Task(\"{0}\",\"{1}\"));".format(ask.replace("\n", ' ').replace("\"", "'"),
                                             ans.replace("\n", '/n').replace("\"", "'")), file=file)
