
int count (int x){
  
  int rsp_14 = x; //rsp_14 = 4;
  int rsp_4 = 0;
  int eax;
  int ecx;
  if(rsp_14 != 0){
    eax = rsp_14; //eax = 4;
    eax = eax&1; //eax = 0
    ecx = eax;  //ecx = 0;
    rsp_4 << 8; //rsp_4 = 0;
    rsp_14 >> 1; //rsp_14 = 2;
  }
  else{
    eax = rsp_4; //eax = 0;
    return eax; 
  }
}

int check (int x){
  int rsp_14 = x;
  int rsp_4 = 1;
  int eax;
  int edx;
  while(rsp_14 !=0){
    edx = rsp_4;
    eax = rsp_14;
    eax = eax + edx;
    rsp_4 = eax;
    rsp_14 = rsp_14 - 1;
  }
   eax = rsp_4;
   return eax;
  
}

unsigned int f5(unsigned  int x)
{
   int edi = x;
   int rsp_c = edi;
   int eax = rsp_c;
   int rsp_1c;
   int edx;
   switch(eax) {
     case 0: 
       eax = rsp_c;
       eax = eax >> 2;
       rsp_1c = eax;
       break;
     case 1:
       eax = rsp_c;
       eax = eax << 2;
       rsp_1c = eax;
       break;
     case 2: 
       eax = rsp_c;
       edx = eax + 1;
       rsp_c = edx;
       rsp_1c = eax;
       break;
     case 3:
       eax = rsp_c;
       edi = eax;
       eax = 0;
       check(x);
       rsp_1c = eax;
       break;
     case 4: //output should be 0
       eax = rsp_c;
       edi = eax;
       eax = 0;
       count(x); //rsp_14 = 2;
       rsp_1c = eax;
       break;
     case 5:
       rsp_1c = 7;
       break;
     default:
       edx = rsp_c;
       eax = edx;
       eax = eax+eax;
       eax = eax+edx;
       rsp_1c = eax;
       
}
eax = rsp_1c;
return eax;
}
