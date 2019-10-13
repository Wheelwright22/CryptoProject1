#CS-GY 6903 Applied Cryptography Fall 2019 Project 1 Prof. Giovanni Di Crescenzo
#Team Members: Nour Daoud (nd1396@nyu.edu), Mo Satt (mcs835@nyu.edu), and Travis Wheelwright (tjw389@nyu.edu)
#@algorithm by Moshe (Mo) Satt 
#@author Travis Wheelwright and Mo Satt
#plaintext dictionary: plaintext_dictionary_test1.txt

print("CS-GY 6903 Applied Cryptography Fall 2019 Project 1 Prof. Giovanni Di Crescenzo")
print("Team Members: Nour Daoud (nd1396@nyu.edu), Mo Satt (mcs835@nyu.edu), and Travis Wheelwright (tjw389@nyu.edu)")
print("plaintext dictionary: plaintext_dictionary_test1.txt")
ciphertext = input ("Please enter cyphertext symbols seperated by commas:") 
ciphertext = ciphertext.split(",")
firstsymbol = ciphertext[0]
thirdsymbol = ciphertext[2]
fourthsymbol = ciphertext[3]
fifthsymbol = ciphertext[4]
# Where Index [0] = 0, [1] = 1, [2] = 2,.... [105] = 105
# The Array Contained In Array Index[Number] Will Hold The Indexes of The Duplicates.

index_for_duplicates = [[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[]]


# Where Index [0] = 0, [1] = 1, [2] = 2,.... [105] = 105
# The Array Contained In Array Index[Number] Will Hold The Valid Letters
index_for_letter_possibilites = [[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[]]

# Array to hold comparison values
#tempSet = set()

#####################################################
#####################################################
# Counting Variable
i = 0

# For Loop To Put Positions Into 2D Array
for eachNumber in ciphertext:
	index_for_duplicates[int(eachNumber)].append(i)
	i += 1
#####################################################
#####################################################

#print(index_for_duplicates)

#####################################################
#####################################################
# k Is Keeping Track of the First Index, The Arrays
# j Is Keeping Track of the Second Index, The Arrays Holding The Duplicate Index Positions

compare19_1 = 0
compare10_1 = 0
compare7_1 = 0
compare6_1 = 0
compare5_1 = 0
compare4_1 = 0
compare3_1 = 0
compare2_1 = 0
compare1_1 = 0

compare19_2 = 0
compare10_2 = 0
compare7_2 = 0
compare6_2 = 0
compare5_2 = 0
compare4_2 = 0
compare3_2 = 0
compare2_2 = 0
compare1_2 = 0

# For Loop To Compute Mods & Find What Letter Frequency Groups We Can Erase 
for k in range(106):
		
		tempSet = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","space"}
		if(len(index_for_duplicates[k]) >= 2):
			
			for j in range(len(index_for_duplicates[k])):
			
					compare19_1 = index_for_duplicates[k][j] % 19
					compare10_1 = index_for_duplicates[k][j] % 10
					compare7_1 = index_for_duplicates[k][j] % 7
					compare6_1 = index_for_duplicates[k][j] % 6
					compare5_1 = index_for_duplicates[k][j] % 5
					compare4_1 = index_for_duplicates[k][j] % 4
					compare3_1 = index_for_duplicates[k][j] % 3
					compare2_1 = index_for_duplicates[k][j] % 2
					compare1_1 = index_for_duplicates[k][j] % 1
						
					if (j < len(index_for_duplicates[k]) - 1):
				
							compare19_2 = index_for_duplicates[k][j + 1] % 19
							compare10_2 = index_for_duplicates[k][j + 1] % 10
							compare7_2 = index_for_duplicates[k][j + 1] % 7
							compare6_2 = index_for_duplicates[k][j + 1] % 6
							compare5_2 = index_for_duplicates[k][j + 1] % 5
							compare4_2 = index_for_duplicates[k][j + 1] % 4
							compare3_2 = index_for_duplicates[k][j + 1] % 3
							compare2_2 = index_for_duplicates[k][j + 1] % 2
							compare1_2 = index_for_duplicates[k][j + 1] % 1	
							
											
		
							if (compare19_1 != compare19_2):
								tempSet.discard("space")
							
							if (compare10_1 != compare10_2):
								tempSet.discard("e")
								
							if (compare7_1 != compare7_2):
								tempSet.discard("a")
								tempSet.discard("t")
					
							if (compare6_1 != compare6_2):
								tempSet.discard("i")
								tempSet.discard("n")
								tempSet.discard("o")
							
							if (compare5_1 != compare5_2):
								tempSet.discard("h")
								tempSet.discard("r")
								tempSet.discard("s")
							
							if (compare4_1 != compare4_2):
								tempSet.discard("d")
							
							if (compare3_1 != compare3_2):
								tempSet.discard("l")
						
							if (compare2_1 != compare2_2):
								tempSet.discard("c")
								tempSet.discard("f")
								tempSet.discard("g")
								tempSet.discard("m")
								tempSet.discard("p")
								tempSet.discard("u")
								tempSet.discard("w")
								tempSet.discard("y")
							
							if (compare1_1 != compare1_2):
								tempSet.discard("b")
								tempSet.discard("j")
								tempSet.discard("k")
								tempSet.discard("q")
								tempSet.discard("v")
								tempSet.discard("x")
								tempSet.discard("z")
			
		for letter in tempSet:
			index_for_letter_possibilites[k].append(letter)
			

		
				
		#print("Number ",k, " Possible Letters: ", index_for_letter_possibilites[k])

firstletter = ""
thirdletter = ""
fourthletter = ""
fifthletter = ""

for first in index_for_letter_possibilites[int(firstsymbol)]:
	if first == "a":	
		firstletter = "a"
		
for third in index_for_letter_possibilites[int(thirdsymbol)]:
	if third == "o":
		thirdletter = "o"
		

for third in index_for_letter_possibilites[int(thirdsymbol)]:
	if third == "s":
		thirdletter = "s"
		
for third in index_for_letter_possibilites[int(thirdsymbol)]:
	if third == "a":
		thirdletter = "a"
		
for fourth in index_for_letter_possibilites[int(fourthsymbol)]:
	if fourth == "r":
		fourthletter = "r"
		
for fourth in index_for_letter_possibilites[int(fourthsymbol)]:
	if fourth == "m":
		fourthletter = "m"
		
for fifth in index_for_letter_possibilites[int(fifthsymbol)]:
	if fifth == "p":
		fifthletter = "p"
		
		
if firstletter == "a" and firstletter != "m" and firstletter != "w" and firstletter != "o" and firstletter != "c" and fourthletter != "r": 
	print("autarky sartor terbium synapse herr eugenicists isthmian reembarks spinet dictaphone ecology carinae coeducational carburizing undulated twopenny subscriptions wrigglier scaliness enthrallingly carvers russified rejoice anaconda switzerland sallows devotedly pledgees incongruous miriest nonextraditable extrospection clipping souffle mimicry interrupts reputably reteaches quicksets bankroll hallucinated unzealous invocation winless yacking shinbone tonal vasoconstrictive manioc gourami purling ey")
	exit()

if thirdletter == "s":
	print("masterwork swept squanders grounders idolatries swapper pave croupier dramatists magnified hypnoses delivery tassels marquise entailments circuits crampon nationalism nictitation anticapitalists dancingly soothly patriarchs goodie whickers baggy omnipotent sadist ameba processions beggary rename nonassertively macerators lectureship shipwrights sadden backups rhymer offstage schistose ebbs restorer graecizes subjoining leathering smocks leukocyte waled temperer embroglios bolivar repines teletyp")
	exit()

if fourthletter == "r":
	print("wharves locoisms tearjerkers remiss chops duties prolonged inequities minnows itemized thematically scorecard deliverers jokingly semiosis claspers brazenness grateful collarbones stamping bittersweets habilitation endorsers decrepitly tambourine shadowboxes adopting ingenuous disquisitions quietist innovates mingles nationals disparaging exults realtor cockade rubberizing tubercled unremitting sloppiest algin knuckleball disengage domes doltishly encyclics spectroscopically debauched circumsola")
	exit()
	
if fifthletter == "p" and thirdletter != "o":
	print("championships iatrogenic maniacally antonym schoolboy shyly leafhoppers inturned sunbathing overrefined obliterations discus maintain cranked uniters twangled impairer wreakers forewings silesia occupance headroom foresting ornithologists shims lackaday benumbedness gloomy sententious fussing flagrant consonance profligately scutcheons honda swooned headworks zeins intermezzo adaptions elbow ocotillos denim japers thalamic corinthians restraightening kowtowed embarrasses latissimi impoverished s")
	exit()
if thirdletter == "o" and thirdletter != "a":
	print("ozonise creosotes disruption neighborly lunier shagging balancing adriatic dick guesstimate storminess jest soberer spun toolbox crochet firebreak parliamentary undismayed lintiest homoeroticism silverfishes cornstalk digest subtler ruck cairns wombat working synapsed diamonding association opalescence crenation bumblebees undetected sandwiching unpeoples polishes schoolwork familarity flaying slued soothers splenification dare hydrology gourami alligators varsity statuettes gainly feeding filme")
	exit()

