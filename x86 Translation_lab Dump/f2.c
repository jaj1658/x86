
long f2(int x)
{
  //s_8 = j;
  //s_14 = y
    int j = 17;
    int y = x;
    int z = y;
    
    int i;
    int rax;
    z = z << 3;
    z = z - y;
    y = z;

    i = 0;

    z = 0;

    while(z < y){
        z = i;
        j = j + z;
        i = i + 1;
	z = i;
	
    }
    
    return j;

}