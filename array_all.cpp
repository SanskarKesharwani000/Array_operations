#include <iostream>
using namespace std;

void display(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[100], i, n;
    int a, b, c, d, j, k;

    cout << "Enter size of array:- " << endl;
    cin >> n;

    cout << "Enter elements of array:- " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Original array is:-" << endl;
    display(arr, n);

    cout << endl
         << "Enter what you want to do:- " << endl;
    cout << "1 = Insertion of an elment.\n2 = Deletion of an element.\n3 = Reverse order array.\n4 = Merging of two arrays.\n5 - Updation of an element." << endl;
    cin >> k;

    switch (k)
    {

    case 1:

        if (n <= 100)
        {
            cout << "Enter where you want to insert an element." << endl;
            cout << "1 - At end.\n2 - At beginning\n3 - At specific index" << endl;
            cin >> a;

            switch (a)
            {

            case 1:

                cout << "Enter element to insert:- ";
                cin >> b;
                arr[n++] = b;
                cout << "Updated array is:- ";
                display(arr, n);
                break;

            case 2:
                n++;
                for (i = n - 1; i > 0; i--)
                {
                    arr[i] = arr[i - 1];
                }
                cout << "Enter element to add:- ";
                cin >> b;
                arr[0] = b;
                cout << "Updated array is:- ";
                display(arr, n);
                break;

            case 3:
                n++;
                cout << "Enter index to insert element:- ";
                cin >> c;

                for (i = n - 1; i > c; i--)
                {
                    arr[i] = arr[i - 1];
                }
                cout << "Enter element to insert:- ";
                cin >> b;
                arr[c] = b;
                cout << "Updated array is:- ";
                display(arr, n);
                break;

            default:
                cout << "Invalid Input.";
            }
        }
        else
            cout << "Array is full.";
        break;

    case 2:
        if (n > 0)
        {
            cout << "Enter where you want to delete an element:- " << endl;
            cout << "1 - At end.\n2 - At beginning\n3 - At specific index" << endl;
            cin >> a;
            switch (a)
            {

            case 1:
                n--;
                cout << "Updated array is:- " << endl;
                display(arr, n);
                break;

            case 2:
                for (i = 0; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                n--;
                cout << "Updated array is:- ";
                display(arr,n);
                break;

            case 3:
                cout << "Enter at which index you have to delete an element:- ";
                cin >> b;
                for (i = b; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                n--;
                cout << "Updated array is:- ";
                display(arr,n);
                break;

            default:
                cout << "Invalid Input.";
            }
        }
        else
            cout << "No element.";
        break;

    case 3:
        for (i = 0; i < n / 2; i++)
        {
            int temp = arr[i];
            arr[i] = arr[n - 1 - i];
            arr[n - 1 - i] = temp;
        }
        cout << "Reverse array is:- ";
        display(arr,n);
        break;

    case 4:
        {
        int m;
        cout << "Enter size of second array:- ";
        cin >> m;
        int z[m];

        int y[n + m];

        cout << "Enter elements of second array:- ";
        for (i = 0; i < m; i++)
            cin >> z[i];

            // merging elements
        for (i = 0; i < n; i++)
            y[i] = arr[i];

        for (i = n; i < m + n; i++)
            y[i] = z[i - n];

        cout << "Merge array is:- ";
        display(y, n + m);

        break;
        }

    case 5:
        cout << "Enter index to update element:- ";
        cin >> b;
        cout << "Enter updated element:- ";
        cin >> c;
        arr[b] = c;
        cout << "Updated array is:- ";
        display(arr,n);
        break;

    default:
        cout << "Wrong input." << endl;
    }

    return 0;
}

