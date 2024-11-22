#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;


//Problem Solving #1
void HeaderMulti() {
	cout << "\t\t\tMultiplication Table From 1 to 2" << endl;
	for (int i = 1; i <= 10; i++) {
		cout << "\t" << i;
	}
	cout << "\t\n-----------------------------------------------------------------------------------\n";
}

string column(int i) {
	if (i < 10)
		return "   |";
	else
		return "  |";
}


void content(){
	HeaderMulti();
	for (int i = 1; i <= 10; i++) {
		cout << i << column(i) << "\t";
		for (int j= 1; j <= 10; j++) {
			cout << i * j << "\t";
		}
		cout << endl;
	}
}

//Problem Solving #2

int Number() {
	int Number = 0;
	cout << "Enter The Number ";
	cin >> Number;
	return Number;
}

enum PrimeNotPrime {prime = 1 , notPrime = 2};
PrimeNotPrime CheckNumbers(int Number) {
	int Half = round(Number / 2);

	for (int i = 2; i <= Half; i++) {
		if (Number % i == 0) {
			return PrimeNotPrime::notPrime;
		}
	}
	return PrimeNotPrime::prime;
}

void PrimeNotPrimee(int Number) {
	for (int i = 1; i <= Number; i++) {
		if (CheckNumbers(i) == PrimeNotPrime::prime) {
			cout << i << endl;
		}
	}
}

//Problem Solving #3
int Number() {
	int Number = 0;
	cout << "Enter The Number ";
	cin >> Number;
	return Number;
}

bool sumNumber(int Number) {
	int sum = 0;
	for (int i = 1; i < Number; i++) {
		if (Number % i == 0) {
			sum += i;
		}
	}
	return Number == sum;
}

void PrintPerfectNumber() {
	if (sumNumber(Number())) {
		cout << "its a Perfect NUmber";
	}
	else
	{
		cout << "Is NOT perfect Num";
	}
}

//Problem Solving #4
int Number() {
	int Number = 0;
	cout << "Enter The Number ";
	cin >> Number;
	return Number;
}

bool IsPerfetNumber(int Number) {
	int sum = 0;
	for (int i = 1; i < Number; i++) {
		if (Number % i == 0) {
			sum += i;
		}
	}
	return Number == sum;
}

void PrintPerfectNumber(int Number) {
	for (int i = 1; i <= Number; i++) {
		if (IsPerfetNumber(i)) {
			cout << i << endl;
		}
	}
}

//Problem Solving #5
int number() {
	int number = 0;
	cout << "enter the number ";
	cin >> number;
	return number;
}


void RevesredNumber(int Number) {
	int Reminder = 0;

	while (Number > 0) {
		Reminder = Number % 10;
		Number = Number / 10;
		cout << Reminder << endl;
	}

}

//Problem Solving #6
int Number(string Message) {

	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

int sumOfDigits(int Number) {
	int Remaindar = 0;
	int sum = 0;
	while (Number > 0) {
		Remaindar = Number % 10;
		Number = Number / 10;
		sum += Remaindar;

		
	}
	return sum;
}

//Problem Solving #7
int Number(string Message) {

	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

void ReversedNumber(int Number) {
	int Reminder = 0;
	int number2 = 0;
	while (Number > 0) {
		Reminder = Number % 10;
		Number = Number / 10;
		number2 = number2 * 10 + Reminder;


	}
		cout << "Number After reverse : " << number2 << endl;

}

//Problem Solving #8
int Number(string Message) {

	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

short CountFrequency(int Number  , int Frequency) {
	int Reminder = 0;
	int Frequenc = 0;
	while (Number > 0) {
		Reminder = Number % 10;
		Number = Number / 10;
		if (Frequency == Reminder) {
			Frequenc++;
		}
	}

	return Frequenc;
}

//Problem Solving #9
int Number(string Message) {

	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

short CountAllDigits(int Number, int Frequency) {
	int Remainder = 0, Counter = 0;

	while (Number > 0) {
		Remainder = Number % 10;
		Number = Number / 10;
		if (Frequency == Remainder) {
			Counter++;
		}

	}
	return Counter;
}


void printDigits(int Number) {
	for (int i = 1; i <= Number; i++) {

		short DigitFrequency = CountAllDigits(Number, i);
		if (DigitFrequency > 0) {
			cout << "Digit " << i << " Frequency is " << DigitFrequency << " Times" << endl;
		}
	}
}

//Problem Solving #10
int Number(string Message) {

	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

int reverse(int Number) {
	int Remainder = 0;
	int Number2 = 0;
	while (Number > 0) {
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;

	}
	return Number2;
}
void PrintDigits(int Number) {
	int Remainder = 0;

	while (Number > 0) {
		Remainder = Number % 10;
		Number = Number / 10;

		cout << Remainder << endl;;
	}
	
}

//Problem Solving #11
int Number(string Message) {

	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

int reverse(int Number) {
	int Remainder = 0;
	int Number2 = 0;
	while (Number > 0) {
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;

	}
	return Number2;
}

bool IsPalindrome(int Number) {
	return Number == reverse(Number);
}

////Problem Solving #12
int Number(string Message) {

	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

void InvertedPattern(short Number) {
	for (int i = Number; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
}

//Problem Solving #13
int Number(string Message) {

	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

void Pattern(short Number) {
	for (int i = 1; i <= Number; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
}

//Problem Solving #14
int Number(string Message) {

	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

void InvertedLetterPattern(short Number) {
	for (int i = 65 + Number - 1 ; i >= 65; i--) {
		for (int j = 1; j <= Number - (65 + Number - 1- i); j++) {
			cout << char(i);
		}
		cout << endl;
	}
}

//Problem Solving #15
int Number(string Message) {

	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

void InvertedLetterPattern(short Number) {
	for (int i = 65 ; i <= 65 + Number - 1; i++) {
		for (int j = Number - (65 + Number - 1 - i); j >= 1 ; j--) {
			cout << char(i);
		}
		cout << endl;
	}
}

//Problem Solving #16
void aToz() {
	string word = "";

	for (int i = 65; i <= 90; i++) {
		for (int j = 65; j <= 90; j++) {
			for (int k = 65; k <= 90; k++) {
				word += char(i);
				word += char(j);
				word += char(k);
				cout << word;
				cout << endl;
				word = "";
			}
		}
	}
}

//Problem Solving #17

string Password() {
	string pass = "";
	cout << "enter password " ;
	cin >> pass;
	return pass;
}
bool aToz(string pass) {
	string word = "";
	int counter = 1;
	for (int i = 65; i <= 90; i++) {
		for (int j = 65; j <= 90; j++) {
			for (int k = 65; k <= 90; k++) {
				counter++;
				word += char(i);
				word += char(j);
				word += char(k);
				cout << "Trial [" << counter << "] : " << word << endl;
				if (pass == word) {
					cout << "the Pass is : " << word << endl;
					cout << "Found after " << counter << "time" << endl;
					return 1;

				}
				cout << endl;
				word = "";
			}
		}
	}
}

//Problem Solving #18
string Name() {
	string Hash= "";
	cin >> Hash;
	return Hash;
}

string Encryption(string hash , int CryptionKey) {
	string Hash = "";
	for (int i = 0; i < hash.size(); i++) {
		Hash += char(hash[i] + CryptionKey);
	}

	return Hash;
}


string Decryption(string DeHash, int DecryptionKEY) {
	string Hash = "";
	for (int i = 0; i < DeHash.size(); i++) {
		Hash += char(DeHash[i] - DecryptionKEY);
	}
	return Hash;
}


//Problem Solving #20

enum enRamdon {SmallLetter = 1 , CapitalLetter = 2 , SpecialChar = 3 ,Digit = 4 };
int RandomNumber(int From, int To) {
	int Random = rand() % (To - From + 1) + From;
	return Random;
}
char GetRandomCharacter(enRamdon Type) {
	if (Type == enRamdon::CapitalLetter)
		return (char)RandomNumber(65, 90);
	else if (Type == enRamdon::SmallLetter)
		return RandomNumber(97, 122);
	else if (Type == enRamdon::SpecialChar)
		return RandomNumber(33, 47 );
	else
		return RandomNumber(48, 57);
}

//Problem Solving #21

enum enRamdon { SmallLetter = 1, CapitalLetter = 2, SpecialChar = 3, Digit = 4 };
int RandomNumber(int From, int To) {
	int Random = rand() % (To - From + 1) + From;
	return Random;
}
char GetRandomCharacter(enRamdon Type) {
	if (Type == enRamdon::CapitalLetter)
		return (char)RandomNumber(65, 90);
	else if (Type == enRamdon::SmallLetter)
		return RandomNumber(97, 122);
	else if (Type == enRamdon::SpecialChar)
		return RandomNumber(33, 47);
	else
		return RandomNumber(48, 57);
}

string GenerateWord() {
	string Word = "";
	for (int i = 1; i <= 4; i++) {
		Word += GetRandomCharacter(enRamdon::CapitalLetter);
	}
	return Word;
}

string GenerateKey() {
	string key = "";

	key = GenerateWord() + '-';
	key += GenerateWord() + '-';
	key += GenerateWord() + '-';
	key += GenerateWord() ;
	return key;
}

void GenerateKeys(int Number) {
	for (int i = 1; i <= Number; i++) {
		cout << "Key [" << i << "] : " << GenerateKey() << endl;
	}
}

//Problem Solving #22
int ReadNumber(string message) {
	int number = 0;
	cout << message << endl;
	cin >> number;
	return number;
}
void arra(int arr[100] , int &length) {
	cout << "Enter The Length ";
	cin >> length;


	for (int i = 0; i < length; i++) {
		cout << "Element [" << i + 1 << "] : ";
		cin >> arr[i];
	}
}

void printArray(int arr[100] , int Number) {
	int counter = 0;
	for (int i = 0; i < Number; i++) {
		cout << arr[i] << " " ;
	}
}

int NumberTimes(int NumberCheck, int arr[100], int length) {
	int counter = 0;
	for (int i = 0; i < length; i++) {
		if (NumberCheck == arr[i]) {
			counter++;
		}
	}
	return counter;
}


//Problem Solving #23
int RandomNumber(int From, int To) {
	int Random = rand() % (To - From + 1) + From;

	return Random;
}

void FillArrayy(int arr[100], int& Length) {
	cout << "Enter Length ";
	cin >> Length;
	for (int i = 0; i < Length; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}
void PrintArray(int arr[100], int Length) {
	for (int i = 0; i < Length; i++) {
		cout <<arr[i] << " ";
	}
}

//Problem Solving #24
int RandomNumber(int From, int To) {
	int Random = rand() % (To - From + 1) + From;

	return Random;
}

void FillArrayy(int arr[100], int& Length) {
	cout << "Enter Length ";
	cin >> Length;
	for (int i = 0; i < Length; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}
void PrintArray(int arr[100], int Length) {
	for (int i = 0; i < Length; i++) {
		cout << arr[i] << " ";
	}
}

void MaxNumberInArray(int arr[100], int length) {
	int maxNumber = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] > maxNumber)
			maxNumber = arr[i];
	}
	cout << maxNumber;
}

//Problem Solving #25
int RandomNumber(int From, int To) {
	int Random = rand() % (To - From + 1) + From;

	return Random;
}

void FillArrayy(int arr[100], int& Length) {
	cout << "Enter Length ";
	cin >> Length;
	for (int i = 0; i < Length; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}
void PrintArray(int arr[100], int Length) {
	for (int i = 0; i < Length; i++) {
		cout << arr[i] << " ";
	}
}

void MinNumberInArray(int arr[100], int length) {
	int maxNumber = arr[0];
	for (int i = 0; i < length; i++) {
		if (arr[i] < maxNumber)
			maxNumber = arr[i];
	}
	cout << maxNumber;
}

//Problem Solving #27
int RandomNumber(int From, int To) {
	int Random = rand() % (To - From + 1) + From;

	return Random;
}

void FillArrayy(int arr[100], int& Length) {
	cout << "Enter Length ";
	cin >> Length;
	for (int i = 0; i < Length; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}
void PrintArray(int arr[100], int Length) {
	for (int i = 0; i < Length; i++) {
		cout << arr[i] << " ";
	}
}

void AvarageNumberInArray(int arr[100], int length) {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += arr[i];
	}
	int avarage = sum / length;
	cout << avarage;
}

//Problem Solving #27
int RandomNumber(int From, int To) {
	int Random = rand() % (To - From + 1) + From;

	return Random;
}

void FillArrayy(int arr[100], int& Length) {
	cout << "Enter Length ";
	cin >> Length;
	for (int i = 0; i < Length; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}
void PrintArray(int arr[100], int Length) {
	for (int i = 0; i < Length; i++) {
		cout << arr[i] << " ";
	}
}
void FillArrayy2(int arr[100], int array[100], int Length) {
	for (int i = 0; i < Length; i++) {
		array[i] = arr[i];
	}
}

//Problem Solving #27

enum PrimeNotPrime {prime = 1 , notPrime = 2};

PrimeNotPrime CheckNumbers(int Number) {
	int Half = round(Number / 2);

	for (int i = 2; i <= Half; i++) {
		if (Number % i == 0) {
			return PrimeNotPrime::notPrime;
		}
	}
	return PrimeNotPrime::prime;
}

int RandomNumber(int From, int To) {
	int Random = rand() % (To - From + 1) + From;

	return Random;
}

void FillArrayy(int arr[100], int& Length) {
	cout << "Enter Length ";
	cin >> Length;
	for (int i = 0; i < Length; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}
void PrintArray(int arr[100], int Length) {
	for (int i = 0; i < Length; i++) {
		cout << arr[i] << " ";
	}
}
void FillArrayy2(int arr[100], int array[100], int Length , int& length2) {
	int counter = 0;
	for (int i = 0; i < Length; i++) {
		if (CheckNumbers(arr[i]) == PrimeNotPrime::prime) {
			array[counter] = arr[i];
			counter++;
	}
	}
	length2 = counter;
}

//Problem Solving #30
int RandomNumber(int From, int To) {
	int Random = rand() % (To - From + 1) + From;

	return Random;
}

void FillArray1(int arr[100], int& length) {
	cout << "Enter Length ";
	cin >> length;
	for (int i = 0; i < length; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}
void FillArray2(int arr[100], int length) {
	for (int i = 0; i < length; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}
void FillArray3(int arr[100],int arr2[100] , int arr3[100], int length) {
	for (int i = 0; i < length; i++) {
		arr3[i] = arr[i] + arr2[i];
	}
}

void printArray(int arr[100], int length) {
	for (int i = 0; i < length; i++)
		cout << arr[i] << " ";
}

//Problem Solving #31
int RandomNumber(int From, int To) {
	int Random = rand() % (To - From + 1) + From;

	return Random;
}

void FillArray1(int arr[100], int& length) {
	cout << "Enter Length ";
	cin >> length;
	for (int i = 0; i < length; i++) {
		arr[i] = i + 1;
	}
}

void Swap(int& A, int& B) {
	int trunc = A;
	A = B;
	B = trunc;
}
void shuffle(int arr[100], int length) {



	for (int i = 0; i < length; i++) {
		Swap(arr[RandomNumber(1, length) - 1], arr[RandomNumber(1, length) - 1]);
	}
}

void printArray(int arr[100], int length) {
	for (int i = 0; i < length; i++)
		cout << arr[i] << " ";
}

//Problem Solving #32
int RandomNumber(int From, int To) {
	int Random = rand() % (To - From + 1) + From;

	return Random;
}

void FillArray1(int arr[100], int& length) {
	cout << "Enter Length ";
	cin >> length;
	for (int i = 0; i < length; i++) {
		arr[i] = i + 1;
	}
}


void reverse(int arr[100], int arr2[100], int length) {

	for (int i = 0; i < length; i++) {
		
		arr2[i] = arr[length - 1 - i];
		
	}
}

void printArray(int arr[100], int length) {
	for (int i = 0; i < length; i++)
		cout << arr[i] << " ";
}

//Problem Solving #33

int RandomNumber(int From , int To) {
	int Random = rand() % (To - From + 1) + From;
	return Random;
}

int ReadNumber(string message) {
	int Number = 0; 
	cout << message << endl;
	cin >> Number;
	return Number;
}

enum enTypeChar { CapitalLetter = 1, SmallLetter = 2, Digits = 3, SpecialChar = 4 };

char GenerateChar(enTypeChar Type) {
	switch (Type) {
	case enTypeChar::CapitalLetter:
		return RandomNumber(65, 90);
	case enTypeChar::SmallLetter:
		return RandomNumber(97, 122);
	case enTypeChar::Digits:
		return RandomNumber(48, 57);
	case enTypeChar::SpecialChar:
		return RandomNumber(33, 47);
	}
}

string GenerateWord(enTypeChar type, int Number) {
	string Word = "";
	for (int i = 1; i <= Number; i++) {
		Word += GenerateChar(type);
	}
	return Word;
}


string GenerateKey() {
	string key = "";
	key = GenerateWord(enTypeChar::CapitalLetter, 4) + "-";
	key += GenerateWord(enTypeChar::CapitalLetter, 4) + "-";
	key += GenerateWord(enTypeChar::CapitalLetter, 4) + "-";
	key += GenerateWord(enTypeChar::CapitalLetter, 4);
	return key;
}


void fillArray(string arr[100], int& length) {
	cout << "Enter How Many key ";
	cin >> length;
	for (int i = 0; i < length; i++) {
		arr[i] = GenerateKey();
	}
}

void PrintKeys(string arr[100], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << endl;
	}
}

//Problem Solving #34
int RandomNumber(int From , int To) {
	int Random = rand() % (To - From + 1) + From;
	return Random;
}	

int ReadNumber(string message) {
	int Number = 0; 
	cout << message << endl;
	cin >> Number;
	return Number;
}

void fillArray(int arr[100], int& length) {
	cin >> length;
	for (int i = 0; i < length; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}

short SearchNumber(int arr[100], int length, int search) {
	for (short i = 0; i < length; i++) {
		if (arr[i] == search)
			return i;
	}
	return -1;
}

void printarrray(int arr[100], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] <<" ";
	}
	cout << endl;
}

//Problem Solving #36

int ReadNumber() {
	int Number = 0;
	cout <<  "Add number" << endl;
	cin >> Number;
	return Number;
}

void fillArray( int Number,int arr[100], int& length) {
	length++;
	arr[length - 1] = Number;
}

void printarrray(int arr[100], int length) {
	for (int i = 0; i < length; i++) {
		cout << "array length " << length;
		cout <<  arr[i] << " ";
	}
	cout << endl;
}

void inoutUser(int arr[100], int& length ) {
	bool Again = true;
	do {
		fillArray( ReadNumber(),arr, length);
		cout << "Do want To ADD More yes[1] , no[0] "; 
		cin >> Again;
	} while (Again);
}


//Problem Solving #37
int RandomNumber(int From , int To) {
	int Random = rand() % (To - From + 1) + From;
	return Random;
}	
int ReadNumber() {
	int Number = 0;
	cout << "Add number" << endl;
	cin >> Number;
	return Number;
}

void fillArray1(int arr[100], int& length) {
	cout << "Enter The Elements "; 
	cin >> length;
	for (int i = 0; i < length; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}
void addArrayElements(int Number, int arr[100], int& length2) {
	length2++;
	arr[length2 - 1] = Number;
}

void Fillarray2(int arr[100], int arr2[200], int length , int& length2) {
	for (int i = 0; i < length; i++) {
		addArrayElements(arr[i], arr2, length2);
	}
}

void printarrray(int arr[100], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

//Problem Solving #38
int RandomNumber(int From, int To) {
	int Random = rand() % (To - From + 1) + From;
	return Random;
}
int ReadNumber() {
	int Number = 0;
	cout << "Add number" << endl;
	cin >> Number;
	return Number;
}

void fillArray1(int arr[100], int& length) {
	cout << "Enter The Elements ";
	cin >> length;
	for (int i = 0; i < length; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}
void addArrayElements(int Number, int arr[100], int& length2) {
	length2++;
	arr[length2 - 1] = Number;
}

void Fillarray2(int arr[100], int arr2[200], int length, int& length2) {
	for (int i = 0; i < length; i++) {
		if(arr[i] % 2 == 1)
			addArrayElements(arr[i], arr2, length2);

	}
}

void printarrray(int arr[100], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

//Problem Solving #39
enum PrimeNotPrime {prime = 1 , notPrime = 2};
PrimeNotPrime CheckNumbers(int Number) {
	int Half = round(Number / 2);

	for (int i = 2; i <= Half; i++) {
		if (Number % i == 0) {
			return PrimeNotPrime::notPrime;
		}
	}
	return PrimeNotPrime::prime;
}
int RandomNumber(int From, int To) {
	int Random = rand() % (To - From + 1) + From;
	return Random;
}
int ReadNumber() {
	int Number = 0;
	cout << "Add number" << endl;
	cin >> Number;
	return Number;
}

void fillArray1(int arr[100], int& length) {
	cout << "Enter The Elements ";
	cin >> length;
	for (int i = 0; i < length; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}
void addArrayElements(int Number, int arr[100], int& length2) {
	length2++;
	arr[length2 - 1] = Number;
}

void Fillarray2(int arr[100], int arr2[200], int length, int& length2) {
	for (int i = 0; i < length; i++) {
		if (CheckNumbers(arr[i]) == PrimeNotPrime::prime)
			addArrayElements(arr[i], arr2, length2);

	}
}

void printarrray(int arr[100], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

//Problem Solving #40

void arrayy(int arr[100] , int& length) {
	length = 10;
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;
	arr[9] = 90;
	;
}

short SearchNumber(int arr[100], int length, int search) {
	for (short i = 0; i < length; i++) {
		if (arr[i] == search)
			return i;
	}
	return -1;
}
bool isNumberInArray(int number, int arr[100], int length) {
	return SearchNumber(arr, length, number) != -1;

}
void addArrayElements(int Number, int arr[100], int& length2) {
	length2++;
	arr[length2 - 1] = Number;
}

void Fillarray2(int arr[100], int arr2[200], int length, int& length2) {
	for (int i = 0; i < length; i++) {
		if (!isNumberInArray(arr[i], arr2, length2)) {
			addArrayElements(arr[i], arr2, length2);
		}
			
	}
}

void printarrray(int arr[100], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

//Problem Solving #41
void arr(int arr[100], int& length) {
	length = 6;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 0;
	arr[4] = 20;
	arr[5] = 10;

}

bool isPalindrome(int arr[100], int length) {
	for (int i = 0; i < length; i++) {
		if (arr[i] != arr[length - 1 - i]) {
			return false;
		}

	}
		return true;
}


//Problem Solving #42

int Myabs(int number) {
	if (number > 0)
		return number;
	else return number * 1;
}

//Problem Solving #43
float GetFractionPart(float number) {
	return number - (int)number;

}
float MyRound(float Num) {
	int inPart = (int)Num;
	float fractionPART = GetFractionPart(Num);

	if (abs(fractionPART) >= .5) {
		if (Num > 0) {
			return ++inPart;
		}
		else
		{
			return	--inPart;
		}
	}
	else
	{
		return inPart;
	}


}


//Problem Solving #44
int myFloor(float num) {
	if (num > 0)
		return (int)num;
	else
		return (int)num - 1;
}

//Problem Solving #45
int myceil(float num) {
	if (num > 0)
		return (int)++num;
	else
		return (int)num - 1;
}
float readNum() {
	float num = 0; 
	cin >> num;
	return num;
}

int main()
{

	return 0;

}