int calculator(int numberOne, int op, int numberTwo)
{
    int v;
    switch(op)
    {

        case 1:
               v=numberOne + numberTwo;
               break;

        case 2:
               v=numberOne - numberTwo;
               break;

        case 3:
               v=numberOne * numberTwo;
               break;

        case 4:
               v=numberOne / numberTwo;
               break;

    }
}
