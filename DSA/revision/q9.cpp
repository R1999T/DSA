//algorithm to print the pattern


/*
1
12
123
1234

1. Read N.
2. Set I:=1.
3. Repeat steps 4 to 7 while I<=N:
4.      Set J:=1.
5.      Repeat step (a) to (b) while J<=I:
        (a) Write J.
        (b) Set J:= J+1.    [Increment by 1.]
        [End of step 5 loop.]
6.      Set I:I+1.
7.      Write "\n".     [\n is a new line character]
    [End of step 3 loop]
8. exit.

//using for loop

1. Read N.

2. Repeat steps 3 for I:=1 to N:  [increment by 1]
3.      Set J:=1.
4.      Repeat step (a) for J:=1 to I:
        (a) Write J.
        (b) Set J:= J+1.    [Increment by 1.]
        [End of step 5 loop.]
5.      Write "\n".     [\n is a new line character]
    [End of step 3 loop]
6. exit.



//Do while algo
1. Read N.
2, Set I:=1.      [Initialize]
3. Write I.
4. Set I:=I+1.    [Increment]
5. If I<=N, then: goto step3.
6. Exit


//break in algo
1. Read N.
2. Set I:=1.
3. Repeat steps 4 to 6 while I<=N:
4.  If I=3, then: goto tep7.
5.    write I.
6.        Set I:I+1
    [End of step 3 loop]
7. exit

//continue
1. Read N.
2. Set I:=1.
3. Repeat steps 4 to 6 while I<=N:
4.    If I=3, then: goto tep7.
5.    write I.
6.        Set I:I+1
    [End of step 3 loop]
7. exit


//int max (int a, int b){
    int m;
    if(a>b)
        m=a;
    else
        m=b;
    return m;
}

int main(){
    int a,b,ans;
    cin>>a>>b;
    cout<<a<<b;
    ans = max(a.b);
    cout
}


//algorithm for max
max(a,b,m)
this procedure finds the maximum of Aand B and store the result in m.
1. If A>B, then:
        Set M:=A.
    else:
        set M:=B.
2. Return

main
algorithm to find max of 2 numbers.
1. Read X,Y, Ans.
2. Call MAX(X,Y,Ans).
eg:

-------------------------------------------
SWAP(A,B)
this procedure swap two numbers A and B.
1. SetT:=A.
2. Set A:=B.
3. Set B:=T.
4. Return.

algo to find max of 2 numbers.
1. Read X,Y.
2. call Swap(X,Y).
3. Write X,y.
4. Exit
*/