import sys

def goOrNo( ableToSay, wantToSay ):
	if (ableToSay.__len__() < wantToSay.__len__()):
		return "no"
	else:
		return "go"
for line in sys.stdin:
	ab = line.split()
	a = ab[0]
	b = ab[1]
	print goOrNo(a, b)
