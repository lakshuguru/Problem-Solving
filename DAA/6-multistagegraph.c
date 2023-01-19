#include<stdio.h>

#include<conio.h>

int G[50][50],n,i,j,h,k;

void FGraph();

int findR();

void main()

{

printf("\t\t\tmultistage graph");

printf("\n enter the no of vertices:");

scanf("%d",&n);

printf("\n there is a edge between the follwing vertices enter its weight else 0:\n");

for (i=1;i<=n;i++)

for(j=1;j<=n;j++)

{

G[i][j]=0;



if((i!=j)&&(i<j))

{

printf ("%d and %d : ",i,j);

scanf("%d",&G[i][j]);

}

}

FGraph();

getch();

}

void FGraph()

{

int cost[50],d[50],p[50],r;

for(i=1;i<=n;i++)

cost[i]=0;

for(j=n-1;j>=1;j++)

{

r=findR(j+1);

cost[j]=G[j][r]+cost[r];

d[j]=r;

}

p[1]=1;p[k]=n;

for(j=2;j<k;j++)

p[i]=d[p[j-1]];

printf("%d-",d[1]);

for(j=2;j<n;j++)

{

if((d[j]==d[j-1])&&(d[j]==0))

continue;

if(d[j]<=n)

printf("%d-",d[j]);

}

printf("%d",n);

}

int findR(int cu)

{

int r1=n+1;

for(h=1;h<=n;h++)

{if((G[h][cu]!=0)&&(r1==n+1)){

r1=j;

continue;

}

if(G[h][cu]!=0)

{

if(G[h][cu]<G[r1][cu])

r1=h;

}}

return r1;

}