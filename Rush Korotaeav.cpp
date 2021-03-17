
#include "stdafx.h"
#include <iostream>

using namespace std;



void rush(int, int);


	int main()
	{setlocale (LC_ALL, "ru");
int h,w;
cout<<"введите размер матрицы"<<endl<<"h=";
cin>>h;
cout<<"w=";
cin>>w;
rush(h,w);
    return 0;

}



void rush(int h, int w)

{

    for (int i = 0; i < w; i++)

    {

        for (int j = 0; j < h; j++)

        {

            int sum = i + j;

            if (i + j == 0 || i + j == h + w - 2)

                cout << "A";

            else if (i * j == 0 && (i == w - 1 || j == h - 1))

                cout << "C";

            else if (i % (w - 1) == 0 || j % (h - 1) == 0)

                cout << 'B';

            else 

                cout << ' ';

        }

        cout << endl;

    }
	system("pause");
}

