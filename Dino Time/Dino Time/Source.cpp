//Program by Toys0125
#include <iostream>
#include <string>

using namespace std;
//Formula for dino (total minutes/ (max grow-min grow))x(max grow - current grow)
void CaculateGrowth(int totalMins, float maxGrowth, float minGrowth, float curGrowth, int totaltimeUsed);
void DisplayStages(bool);
void PushUp(float &input);
int main() {
	char input1 = ' ', input2 = ' ', input3;
	float input4;
	while (input1 != 'q') {
		cout << "1. Carnivore\n2. Herbivore\nq. To quit..." << endl;
		cin >> input1;
		if (input1 = '1') {
			cout << "Input which dino you using..." << endl;
			cout << "1. Allo\n2. Cerato\n3. Carno\n4. Dilo\n5. Giga\n6. Sucho\n7. Utah\n8. TRex" << endl;
			cin >> input2;
			//Allo Times
			if (input2 == '1') {
				DisplayStages(false);
				cin >> input3;

				if (input3 == '1') {
					cin >> input4;
					PushUp(input4);
					cout << "Need correct growth ammount..." << endl;
					CaculateGrowth(30, 1000, 0, input4, 180);
				}
				if (input3 == '2') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(60, 800, 500, input4, 120);
				}
				if (input3 == '3') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(120, 1000, 850, input4, 0);
				}
				if (input3 > '3' || input4 < '1') {
					cout << "Incorrect range." << endl;
					continue;
				}
			}
			//Cerato Times
			if (input2 == '2') {
				DisplayStages(false);
				cin >> input3;

				if (input3 == '1') {
					cin >> input4;
					PushUp(input4);
					cout << "Need correct growth ammount..." << endl;
					CaculateGrowth(30, 1000, 0, input4, 150);
				}
				if (input3 == '2') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(50, 800, 500, input4, 100);
				}
				if (input3 == '3') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(100, 1000, 800, input4, 0);
				}
				if (input3 > '3' || input4 < '1') {
					cout << "Incorrect range." << endl;
					continue;
				}
			}
			//Carno Times
			if (input2 == '3') {
				DisplayStages();
				cin >> input3;

				if (input3 == '1') {
					cin >> input4;
					PushUp(input4);
					cout << "Need correct growth ammount..." << endl;
					CaculateGrowth(25, 1000, 0, input4, 110);
				}
				if (input3 == '2') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(40, 1000, 600, input4, 70);
				}
				if (input3 == '3') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(70, 1000, 600, input4, 0);
				}
				if (input3 > '3' || input4 < '1') {
					cout << "Incorrect range." << endl;
					continue;
				}
			}
			//Dilo Times
			if (input2 == '4') {
				DisplayStages();
				cin >> input3;

				if (input3 == '1') {
					cin >> input4;
					PushUp(input4);
					cout << "Need correct growth ammount..." << endl;
					CaculateGrowth(20, 1000, 0, input4, 110);
				}
				if (input3 == '2') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(50, 650, 500, input4, 60);
				}
				if (input3 == '3') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(60, 1000, 800, input4, 0);
				}
				if (input3 > '3' || input4 < '1') {
					cout << "Incorrect range." << endl;
					continue;
				}
			}
			//Giga Times
			if (input2 == '5') {
				DisplayStages(true);
				cin >> input3;

				if (input3 == '1') {
					cin >> input4;
					PushUp(input4);
					cout << "Need correct growth ammount..." << endl;
					CaculateGrowth(30, 1000, 0, input4, 390);
				}//Juve .5/.8
				if (input3 == '2') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(110, 800, 500, input4, 280);
				}
				if (input3 == '3') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(220, 850, 700, input4, 60);
				}
				if (input3 == '4') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(60, 1000, 800, input4, 0);
				}
				if (input3 > '4' || input4 < '1') {
					cout << "Incorrect range." << endl;
					continue;
				}
			}
			//Sucho Times
			if (input2 == '6') {
				DisplayStages();
				cin >> input3;

				if (input3 == '1') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(20, 400, 200, input4, 235);
				}
				if (input3 == '2') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(85, 700, 500, input4, 150);
				}
				if (input3 == '3') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(150, 1000, 800, input4, 0);
				}
				if (input3 > '3' || input4 < '1') {
					cout << "Incorrect range." << endl;
					continue;
				}
			}
			//Utah Times
			if (input2 == '7') {
				DisplayStages();
				cin >> input3;

				if (input3 == '1') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(20, 400, 200, input4, 100);
				}
				if (input3 == '2') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(50, 1000, 600, input4, 50);
				}
				if (input3 == '3') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(50, 1000, 800, input4, 0);
				}
				if (input3 > '3' || input4 < '1') {
					cout << "Incorrect range." << endl;
					continue;
				}
			}
			//Trex Times
			if (input2 == '8') {
				DisplayStages(true);
				cin >> input3;

				if (input3 == '1') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(30, 1000, 0, input4, 320);
				}//Juve .5/.8
				if (input3 == '2') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(100, 1000, 500, input4, 220);
				}
				if (input3 == '3') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(220, 1000, 780, input4, 100);
				}
				if (input3 == '4') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(100, 1000, 800, input4, 0);
				}
				if (input3 > '4' || input4 < '1') {
					cout << "Incorrect range." << endl;
					continue;
				}
			}


		}
		if (input1 = '2') {
			cout << "Input which dino you using..." << endl;
			cout << "1. Tricera\n2. Galli\n3. Diablo\n4. Maia\n5. Pachy\n6. Para\n7. Dryo" << endl;
			cin >> input2;
			//Triceratops Times
			if (input2 == '1') {
				DisplayStages(true);
				cin >> input3;

				if (input3 == '1') {
					cin >> input4;
					PushUp(input4);
					cout << "Need correct growth ammount..." << endl;
					CaculateGrowth(30, 1000, 0, input4, 360);
				}
				if (input3 == '2') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(60, 1000, 800, input4, 300);
				}
				if (input3 == '3') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(200, 1000, 800, input4, 100);
				}
				if (input3 == '4') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(100, 1000, 800, input4, 0);
				}
				if (input3 > '4' || input4 < '1') {
					cout << "Incorrect range." << endl;
					continue;
				}
			}
			//Galli Times
			if (input2 == '2') {
				DisplayStages();
				cin >> input3;

				if (input3 == '1') {
					cin >> input4;
					PushUp(input4);
					cout << "Need correct growth ammount..." << endl;
					CaculateGrowth(15, 1000, 0, input4, 90);
				}
				if (input3 == '2') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(40, 600, 200, input4, 50);
				}
				if (input3 == '3') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(50, 1000, 600, input4, 0);
				}
				if (input3 > '3' || input4 < '1') {
					cout << "Incorrect range." << endl;
					continue;
				}
			}
			//Diablo Times
			if (input2 == '3') {
				DisplayStages();
				cin >> input3;

				if (input3 == '1') {
					cin >> input4;
					PushUp(input4);
					cout << "Need correct growth ammount..." << endl;
					CaculateGrowth(25, 1000, 0, input4, 180);
				}
				if (input3 == '2') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(80, 600, 400, input4, 100);
				}
				if (input3 == '3') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(100, 1000, 700, input4, 0);
				}
				if (input3 > '3' || input4 < '1') {
					cout << "Incorrect range." << endl;
					continue;
				}
			}
			//Maia Times
			if (input2 == '4') {
				DisplayStages();
				cin >> input3;

				if (input3 == '1') {
					cin >> input4;
					PushUp(input4);
					cout << "Need correct growth ammount..." << endl;
					CaculateGrowth(20, 1000, 0, input4, 110);
				}
				if (input3 == '2') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(50, 650, 300, input4, 60);
				}
				if (input3 == '3') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(60, 1000, 700, input4, 0);
				}
				if (input3 > '3' || input4 < '1') {
					cout << "Incorrect range." << endl;
					continue;
				}
			}
			//Pachy Times
			if (input2 == '5') {
				DisplayStages();
				cin >> input3;

				if (input3 == '1') {
					cin >> input4;
					PushUp(input4);
					//cout << "Need correct growth ammount..." << endl;
					CaculateGrowth(20, 400, 200, input4, 130);
				}
				if (input3 == '2') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(70, 700, 500, input4, 60);
				}
				if (input3 == '3') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(60, 1000, 800, input4, 0);
				}
				if (input3 > '3' || input4 < '1') {
					cout << "Incorrect range." << endl;
					continue;
				}
			}
			//Para Times
			if (input2 == '6') {
				DisplayStages();
				cin >> input3;

				if (input3 == '1') {
					cin >> input4;
					PushUp(input4);
					cout << "Need correct growth ammount..." << endl;
					CaculateGrowth(25, 1000, 0, input4, 180);
				}
				if (input3 == '2') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(60, 1000, 600, input4, 120);
				}
				if (input3 == '3') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(120, 1000, 700, input4, 0);
				}
				if (input3 > '3' || input4 < '1') {
					cout << "Incorrect range." << endl;
					continue;
				}
			}
			//Dryo Times
			if (input2 == '7') {
				DisplayStages();
				cin >> input3;

				if (input3 == '1') {
					cin >> input4;
					PushUp(input4);
					cout << "Need correct growth ammount..." << endl;
					CaculateGrowth(10, 1000, 0, input4, 30);
				}
				if (input3 == '2') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(15, 700, 400, input4, 15);
				}
				if (input3 == '3') {
					cin >> input4;
					PushUp(input4);
					CaculateGrowth(15, 1000, 600, input4, 0);
				}
				if (input3 > '3' || input4 < '1') {
					cout << "Incorrect range." << endl;
					continue;
				}
			}
		}
	}
	cin.ignore();
	cin.get();
}

void CaculateGrowth(int totalMins, float maxGrowth, float minGrowth, float curGrowth, int totaltimeLeft)
{
	float remainingTime;
	remainingTime = (float)(totalMins / (maxGrowth - minGrowth)*(maxGrowth - curGrowth));
	cout << "The remaining for this stage is: " << remainingTime << " mins" << endl;
	cout << "Total time remaining till full grown is: " << (remainingTime + (float)totaltimeLeft) << " mins" << endl;

}

void DisplayStages(bool fourStages=false)
{
	if (fourStages)
	cout << "Is it a\n1. Hatchling\n2. Juvie\n3. Sub\n4. Adult" << endl;
	else
	{
		cout << "Is it a\n1. Hatchling\n2. Juvie\n3. Adult" << endl;
	}
	cout << "Then input curent Growth" << endl;
}

void PushUp(float &input)
{
	while (input / 100 < 1) {
		input = input * 10;
	}
}
