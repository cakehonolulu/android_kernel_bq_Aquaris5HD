import re, os, sys

pattern = [
	re.compile("^(CONFIG_.+)=(.+)$"),
	re.compile("# (CONFIG_.+) is not set")
]

config = {}
kconfig_file = sys.argv
kconfig_file.remove(sys.argv[0])
for f in kconfig_file:
		ff = open(f)
		for line in ff.readlines(): 
			result = ([x for x in [x.search(line) for x in pattern] if x] or [None])[0]
			if not result: continue
			name,value = None,None
			name = result.group(1)
			if len(result.groups())>1: value = result.group(2)
			config[name] = value
		ff.close()

		for item in sorted(config.keys()):
			if not config[item]: print(("# %s is not set"%item))
			else: print(("%s=%s"%(item,config[item])))

