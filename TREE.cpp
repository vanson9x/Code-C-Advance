#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// Khoi tao Node
struct *Node
{
    int Infor;
    struct NODE *Left, Right;
};
struct TREE
{
    Node *Root; // ROOT la goc cua TREE
};

// Chen them Node vao TREE
void  insertNode ( TREE &Root, int X )
{
    if(Root != NULL)      //Cây đã có nút
        {
            if(Root -> Infor == X)  return 0;   //đã có
            if(Rooy -> Infor > X)
            insertNode( Root -> Left , X);
            else
            insertNode( Root->Right , X);
        }
        else          //Cây chưa có nút nào
        {
            Root = new Node;
            if (Root == NULL)  return 0;   //thiếu bộ nhớ
            Root -> Infor  = X;
            Root -> Left = Root -> Right = NULL;
        }
}

// Duyệt TREE kiểu " Tifn Tố - NFR"
void  NLR( Tree Root )
    {
    if ( Root != NULL )
    {
        < Thăm nút gốc Root >;
        NLR ( Root->Left );
        NLR ( Root->Right);
    }
}

// Duyệt TREE kiểu "Trung Tố-LNR"

void  LNR ( Tree Root )
    {
        if ( root != NULL )
        {
            LNR ( Root->Left );
            <Xử lý Root>;  //Xử lý tương ứng theo nhu cầu
            LNR ( Root->Right );
        }
    }

//Duyệt TREE kiểu "Hậu Tố - LRN"

void  LRN ( Tree  Root )
    {
        if ( root != NULL )
        {
            LRN ( Root->Left );
            LRN ( Root->Right );
            <Xử lý Root>;   //Xửlý tương ứng theo nhu cầu
        }
    }

// Tìm kiếm 1 Node x= ?

Node   *SearchTree ( Tree  Root , Data  x )
    {
    Node  *p = Root;
    while ( p != NULL)
        {
            if (x == p->Infor)
            return p;
            else if ( x < p->Infor)
            p = p->Left;
            else
            p = p->Right;
        }
    return NULL;
    }
// Xóa Node
void DelNode( TREE &Root, Data x )
    {
    Node  *q;
    if (Root !=  NULL)  return;
        {
            if (x  < Root ->infor)  DelNode (Root ->Left,  x);
            else  if (x > Root ->infor)  DelNode (Root-> Right,  x);
            else
            {
                q = Root;
                if (q-> Right==NULL)    Root = q-> Left;
                else  if (q ->Left == NULL)  Root = q-> Right;
                else  SearchTree(Root->  Left,q);
                free(q);
            }
        }
    }

//Đếm Node Lá:

int DemNutLa  ( TREE  Root )
    {
    if( Root !=  NULL )
        {
        if ( Root -> Left == NULL && Root -> Right == NULL)  return 1;
        else  return DemNutLa  ( Root->pLeft ) + DemNutLa  ( Root->pRight );
        }
        else
            return 0;
    }
void Dem_nutla  ( TREE Root, int &dem  )
    {
    if( Root !=  NULL )
        {
            if ( (Root->Left==NULL) && (Root->Right==NULL) )   dem++;
            Dem_pt ( Root->Left, dem );
            Dem_pt ( Root->Right, dem  );
        }
    }
// Đếm Nút Con

int  DemNut1Con ( TREE Root )
{
if( Root !=  NULL)
    {
        int d = DemNut1Con ( Root->Left  ) + DemNut1Con ( Root->Right  );
        if( ( Root->Left != NULL && Root->Right == NULL)||(Root->Left == NULL && Root->Right !=  NULL) )
        return d+1;
        else
        return d;
        }
        else
        return 0;
    }
// Đếm Node con phải
int DemNut1ConPhai( TREE Root )
    {
        if( Root )
        {
            int  d = DemNut1ConPhai  (  Root->Left ) + DemNut1ConPhai  ( Root->Right  );
            if( Root->Left == NULL && Root->Right  != NULL  )
            return d+1;
            else
            return d;
        }
        else
        return 0;
    }
// Độ cao của TREE

int DoCaoCay(  TREE  Root )
    {
        if ( Root !=NULL )
            {
                int  t1 = DoCaoCay  ( Root->Left  );
                int  t2 = DoCaoCay  ( Root->Right );
                if (t1>t2) return t1 + 1;
                else return t2 + 1;
            }
        else
        return 0;
    }
// Các Node trên từng mức

void  InMuck (TREE Root, int k, int m=0)
    {
        if( Root !=  NULL )
            {
            if(m == k)
                {
                    printf("%d\t",  Root->Infor  );
                    return;
                }
            else
            {
                m++;
                InMuck  ( Root->Left,  k, m);
                InMuck  ( Root->Right,  k, m);
            }
        }
    }
// Đếm số Node của cây Nhị phân tìm kiếm

void  Dem_PT ( TREE  Root , int  &dem )
    {
        if ( Root != NULL )
        {
            Dem_PT ( Root->left , dem );
            Dem_PT ( Root->right , dem );
            if ( Root != NULL )  dem++;
        }
    }
