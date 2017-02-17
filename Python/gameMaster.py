'''
Implement A Game GAME MASTER.
'''

import random

class gameMaster:
	guess = ''
	userInput = ''
	def __init__ (self):
		self.list = ['R','G','B','Y']
	def guessCheck(self,input):
		if (input == self.guess):
			return 0

		match = 0
		psuedoMatch = 0
		j=0
		check = 0
		for i in self.guess:
			if (i == self.userInput[j]):
				match+=1
				input = input.replace(i,'',1)
			elif(i in input):
				psuedoMatch+=1
				input = input.replace(i,'',1)
			j+=1
		print "Match = %d. Psuedorandom Match = %d." %(match,psuedoMatch)
		return 1

	def start(self):
		self.guess = random.choice(self.list) +random.choice(self.list)+ random.choice(self.list)+ random.choice(self.list) 
		print ("Computer Guessed....")
		self.userInput = raw_input(("Enter your guesses from R G B Y: "))

		while(self.guessCheck(self.userInput)):
			self.userInput = raw_input(("Enter your guesses from R G B Y: "))

		print "you won..."

game = gameMaster()
game.start()

