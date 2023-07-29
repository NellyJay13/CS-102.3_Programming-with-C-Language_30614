int main()
{
int bsal,nsal,inc;
char name[30];
printf("Enter Employe Name: ");
scanf("%s", &name);
printf("Enter Basic Salary: ");
scanf("%d",&bsal);
if (bsal>1000)
inc=bsal*0.15;
else if(bsal<5000)
inc=bsal*0.05;
else
inc=bsal*0.10;
nsal=bsal+inc;
printf("Name %s \n", name);
printf("Your New Salary Is %d ", nsal);
return 0;
}
