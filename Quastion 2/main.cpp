#include"main.h"


int main() {
	Vector v1(9), v2(9), v3;
	int choice;
	do
	{
		cout << "\nMenu: (0 to exit)\n1- Add a number to v1 or v2\n2- Verify if v1 and v2 are equal\n3- Print the, multiplication of v1 and v2\n";
		cout << "4- Put the v1 on the v3\n5- put the sum of v1 and v2 on the v3 \n6- Dell all content of v1 or v2\n7- Del the last number of v1 or v2\n";
		cout << "8- Print all vectors\n\nType your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			int c, num;
			cout << "type:\n1 to v1\n2 to v2: ";
			do
			{
				cin >> c;
				if (c < 1 || c > 2) cout << "-->ERROR - wrong choice";
			} while (c < 1 || c > 2);
			cout << "Type the number to add: ";
			cin >> num;
			if (c == 1) {
				try {
					v1.insert(num);
				}
				catch (uint a)
				{
					cout << "You have ritched the maximum capacity of " << a << " numbers on this vector";
				}
			}
			else
			{
				try {
					v2.insert(num);
				}
				catch (int a)
				{
					cout << "You have ritched the maximum capacity of " << a << " numbers on this vector";
				}
			}
			break;
		case 2:
			if (v1 == v2) cout << "\nThe vector are equals\n";
			else cout << "\nThe vectors are diferent\n";
			break;
		case 3:
			try
			{
				cout << v1 * v2;
			}
			catch (IndexException a)
			{
				cout << "The vectors don`t have the same amount of numbers, the v1 have " << a.size << " and the v2 have " << a.size2;
			}
			break;
		case 4:
			v3 = v1;
			cout << "v1 added to v3";
			break;
		case 5:
			v3 = v1 + v2;
			cout << "\nv1 + v2 added to v3";
			break;
		case 6: {
			int c;
			cout << "type:\n1 to v1\n2 to v2: ";
			do
			{
				cin >> c;
				if (c < 1 || c > 2) cout << "-->ERROR - wrong choice";
			} while (c < 1 || c > 2);
			if (c == 1)v1.clear();
			else v2.clear();
		}
				break;
		case 7: {
			int c;
			cout << "type:\n1 to v1\n2 to v2: ";
			do
			{
				cin >> c;
				if (c < 1 || c > 2) cout << "-->ERROR - wrong choice";
			} while (c < 1 || c > 2);
			if (c == 1)v1.delLast();
			else v2.delLast();
		}
				break;
		case 8:
			cout << "v1: " << v1 << endl << "v2: " << v2 << endl << "v3: " << v3;
			break;
		default:
			break;
		}
	} while (choice != 0);
}