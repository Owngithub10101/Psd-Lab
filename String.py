# s = 'Navneet'
# ct = 0
# for i in s:
#     ct+=1
# print(ct) 
# Output: 7


# s = 'Rajat'
# ct = 0
# for i in range(len(s)):
#     print(s[i],s[-i-1])
# Output : 
# R t
# a a
# j j
# a a
# t R



# s = "Navneet"
# print(s.capitalize())
# print(s.count('e'))



# s = 'google'
# dct = {}
# for i in s:
#     dct[i] = s.count(i)
# print(dct)
#Output :
# {'g': 2, 'o': 2, 'l': 1, 'e': 1}


# s = input('Enter String : ') 
# if len(s)<2:print('Empty')
# else: print(s[0:2]+s[-2::])


# s = 'navneet'
# l = []
# for i in s:
#     if i not in l:
#         l.append(i)
#     else: l.append('&')
# for i in l:
#     print(i,end = '')


# s = 'navneet'
# st = ''
# for i in s:
#     if i not in st:st+=i
#     else:st+='$'
# print(st)
#Output : 
# nav$e$t



# s = 'navneet'
# for i in range(1,len(s)):
#     if s[i] == s[0]:
#         s = s[:i]+'$'+s[i+1:]
# print(s)
#Output : 
# nav$eet




# s = 'abc xyz'
# l = s.split(' ')
# for i in l:
#     print(i[::-1],end = ' ')


