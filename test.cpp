#include "iostream"

using namespace std;

// factorial 5
// 5*4*3*2*1
// with while

int main()
{
    // int n;
    // long result = 1;
    // cout << "Enter a number: ";
    // cin >> n;
    // while (n > 0)
    // {
    //     result *= n; //
    //     n--;
    // }
    // cout << "Result: " << result << endl;

    // do while
    //  int n;

    // int n;
    // long result = 1;
    // cout << "Enter a number: ";
    // cin >> n;
    // do
    // {
    //     result *= n; //
    //     n--;
    // } while (n > 0);
    // cout << "Result: " << result << endl;

    // for

    // int n;
    // 5*4*3*2*1

    // int n;
    // long result = 1;
    // cout << "Enter a number: ";
    // cin >> n;
    // for (int i = n; i >= 1; i--)
    // {
    //     result *= i;
    // }
    // cout << "Result: " << result << endl;

    // if

    // int n;

    // int n;
    // long result = 1;
    // cout << "Enter a number: ";
    // cin >> n;
    // if (n == 0 || n == 1)
    // {
    //     cout << "Result: " << result << endl;
    // }
    // else
    // {
    //     for (int i = n; i >= 1; i--)
    //     {
    //         result *= i;
    //     }
    //     cout << "Result: " << result << endl;
    // }

    // post order 22 23 46 42 74 67 50
    // with node* root

    void postOrder(node * root)
    {
        if (root == NULL)
        {
            return;
        }
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
    return 0;
}