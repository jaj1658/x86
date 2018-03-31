/*
int f1(int x)
{
    int rax = x;
    int y;
    if(15 >= x){
        y = x;
        y = y>>1;
        y = y+7;
    }
    else{
        y = x;
	int z = rax*8;
        y = x;
        y = y << 2;
        z = z + y;
        y = x;
        y = y + y;
        y = y + z;
    }

    return y;
    
}
*/
int f1(int x){
    int rsp_4 = x;
    int rax = x;
    int eax;
    int edx;
    if (rsp_4 <= 15){
        
    }
    else{
        eax = rsp_4;
        edx = rax*8;
    }
}






