class B
{
    public static void main(String args[])
    {
        for(int x=1;x<=7;x++)
        {
            for(int y=1;y<=5;y++)
            {
                if( y==1||(x==1||x==7||x==4)&&y<=4||y==5&&x!=4&&x>=2&&x<=6)
                {
                    System.out.print("* ");
                }
                else
                {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }
}