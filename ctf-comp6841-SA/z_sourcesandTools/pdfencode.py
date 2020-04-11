# ENCODE
data = ""
with open("binary") as f:
  data = f.readlines()

data = "".join(data)
data = list(data)

while " " in data:
  data.remove(" ")
data = "".join(data)
print(data)

secret = ""
for x in data:
  if x == '1':
    secret += "&#8203;"
  elif x == '0':
    secret += "&#8204;"

print(secret)

# DECODE
# data = ""
# with open("binary") as f:
#   data = f.readlines()

# data = "".join(data)
# print(data)
# data = data.split(";")
# print(data)

# a = ""
# b = ""
# for x in data:
#   if x == "&#8204":
#     b += "1"
#     a += "0"
#   else:
#     b += "0"
#     a += "1"

# print(a)
# print("-------------------")
# print(b)