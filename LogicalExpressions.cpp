#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
/*
Write a Program to accept the truth values of variables x and y, and print the truth table of
the following logical operations:
a) Conjunction b) Disjunction c) Exclusive OR
d) Conditional e) Bi-conditional f) Exclusive NOR
g) Negation h) NAND i)NOR 
*/
class operation
{
    long A, B;

public:
    operation(long x, long y)
    {
        A = x;
        B = y;
    }
    int no_of_digits(int n)
    {
        int flag = 0;
        while (n != 0)
        {
            flag++;
            n /= 10;
        }
        return flag;
    }
    int decToBinary(int n)
    {
        int binaryNum[32];
        int i = 0;
        while (n > 0)
        {
            binaryNum[i] = n % 2;
            n = n / 2;
            i++;
        }
        int s = 0;
        for (int j = i - 1; j >= 0; j--)
            s = s * 10 + binaryNum[j];

        return s;
    }
    int BinaryTodec(int num)
    {
        int rem, temp, dec = 0, b = 1;
        temp = num;
        while (temp > 0)
        {
            rem = temp % 10;
            dec = dec + rem * b;
            b *= 2;
            temp /= 10;
        }
        return dec;
    }
    void conjunction()
    {
        int a = BinaryTodec(A);
        int b = BinaryTodec(B);
        int c = a & b;
        cout << decToBinary(c);
    }
    void disjunction()
    {
        int a = BinaryTodec(A);
        int b = BinaryTodec(B);
        int c = a | b;
        cout << decToBinary(c);
    }
    void XOR()
    {
        int a = BinaryTodec(A);
        int b = BinaryTodec(B);
        int c = a ^ b;
        cout << decToBinary(c);
    }

    void conditional()
    {
        int aa = ~A;
        int a = BinaryTodec(aa);
        int b = BinaryTodec(B);
        int c = (a | b);
        cout << decToBinary(c);
    }
    void Biconditional()
    {
        int AA = ~A;
        int aa = BinaryTodec(AA);
        int a = BinaryTodec(A);
        int BB = ~B;
        int bb = BinaryTodec(BB);
        int b = BinaryTodec(B);
        int c = (aa | b) & (bb | a);
        cout << decToBinary(c);
    }
    void XNOR()
    {
        int a = BinaryTodec(A);
        int b = BinaryTodec(B);
        int c = a & b;

        int aa = ~A;
        int AA = BinaryTodec(aa);
        int bb = ~B;
        int BB = BinaryTodec(bb);
        int d = AA & BB;

        int e = c | d;
        cout << decToBinary(e);
    }
    void negation(int n)
    {
        string s = to_string(n);
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (ch == '1')
            {
                cout << 0;
            }
            else
                cout << 1;
        }
    }
    void NAND()
    {
        int a = BinaryTodec(A);
        int b = BinaryTodec(B);
        int c = (a & b);
        negation(decToBinary(c));
    }
    void NOR()
    {
        int a = BinaryTodec(A);
        int b = BinaryTodec(B);
        int c = (a | b);
        negation(decToBinary(c));
    }
};
int main()
{
    long a, b;
    cout << "Enter two binary values to perform given operations:\n";
    cin >> a >> b;
    operation ob(a, b);
    cout << "The Truth Table of the given Logical Expressions are as Follows:\n";

    cout << "Conjunction   of " << a << " and " << b << " is "; //a
    ob.conjunction();

    cout << "\nDisjunction   of " << a << " and " << b << " is "; //b
    ob.disjunction();

    cout << "\nExlusive OR   of " << a << " and " << b << " is "; //c
    ob.XOR();

    cout << "\nConditional   of " << a << " and " << b << " is "; //d
    ob.conditional();

    cout << "\nBiConditional of " << a << " and " << b << " is "; //e
    ob.Biconditional();

    cout << "\nExlusive NOR  of " << a << " and " << b << " is "; //f
    ob.XNOR();

    cout << "\nNegation  of " << a << " = "; //g
    ob.negation(a);
    cout << "  and Negation  of " << b << " = ";
    ob.negation(b);

    cout << "\nNAND  of " << a << " and " << b << " is "; //h
    ob.NAND();

    cout << "\nNOR  of " << a << " and " << b << " is "; //i
    ob.NOR();

    return 0;
}