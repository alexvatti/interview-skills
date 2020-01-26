#dict { key1:value, key2:value }
#keys, values , index by key
sample_dict = {'name':'john', 1:[2,3,4] }
print(sample_dict)
print(type(sample_dict))

print(sample_dict[1])
print(sample_dict['name'])
print(sample_dict["name"])

sample_dict2 = dict([(1,"apple"),(2,"ball")])
print(sample_dict2)
print(sample_dict2.keys())
print(sample_dict2.items())
print(sample_dict2.values())
