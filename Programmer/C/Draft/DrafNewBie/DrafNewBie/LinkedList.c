#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/* tao 1 node */
typedef struct Node Node;
struct Node {
    int data;
    Node* next;
};
/* tao mot danh sach don */
struct List {
    Node* head;
    Node* tail;
};
void Init(List& l);
Node* CreateNode(int x);
bool IsEmpty(List l);
void AddHead(List& l, int x);
void AddList(List& l, int x);
Node* Seach(List l, int k);
void AddMid(List& l, int x, int k);
void DelHead(List& l);
int TimKiem(List l, int k);
int CountPT(List l);
void DelTail(List& l);
int RemoveHead(List& l, int& x);
void DeleteAll(List& l);
void AddMove(List& l);
Node* GetNode(List& l, int x);
void EnterList(List& l);
void PrintList(List& l);
void PrintN(List l);
void SeachN(List l);
void AddmNode(List l);
void MainN(List l);
void switch1(List l);
void switch2(List l);
void switch3(List l);
/* khoi tao list rong */
void Init(List& l) {
    l.head = NULL;
    l.tail = NULL;
}
/* tao thong tin cho Node */
Node* CreateNode(int x) {
    Node* p = new Node;
    if (p == NULL) {
        exit(1);
    }
    p->next = NULL;
    p->data = x;
    return p;
}
/* kiem tra xem  list co rong hay khong */
bool IsEmpty(List l) {
    if (l.head == NULL) {
        return true;
    }
    return false;
}
/* them vao dau danh sach  */
void AddHead(List& l, int x) {
    Node* p = CreateNode(x);
    if (l.head == NULL) {
        l.head = l.tail = p;
    }
    else {
        p->next = l.head; // p tro toi dau list
        l.head = p;// cap nhat lai head
    }
}
/* them vao cuoi */
void AddList(List& l, int x) {
    Node* p = CreateNode(x);
    if (l.head == NULL) {
        l.head = l.tail = p;
    }
    else {
        l.tail->next = p;
        l.tail = p;
    }
}
/* */
Node* Seach(List l, int k) {
    Node* p = l.head;
    while (p != NULL) {
        if (p->data == k) {
            return p;
        }
        else {
            p = p->next;
        }
    }
    return NULL;
}
/* them vao vi tri bat ky */
void AddMid(List& l, int x, int k) {
    Node* p = Seach(l, k);
    if (p != NULL) {
        Node* q = CreateNode(x);
        Node* r = p->next;
        p->next = q;
        q->next = r;
    }
    else {
        printf("\nKhong Tim Thay Node co data = K ");
    }
}
/* xoa o dau list*/
void DelHead(List& l) {
    if (!IsEmpty(l)) {
        Node* p = l.head;
        l.head = l.head->next;// cap nhat lai head
        delete p;// xoa bo Node Ban dau
    }
}
/* tim kiem */
int TimKiem(List l, int k) {
    int c = 0;
    for (Node* p = l.head; p != NULL; p = p->next) {
        if (p->data == k) {
            return c;
        }
        c++;
    }
    return -1;
}
/* dem */
int CountPT(List l) {
    int  count = 0;
    Node* p = l.head;
    while (p != NULL) {
        count++;
        p = p->next;
    }
    return count;
}
/* xoa cuoi */
void DelTail(List& l) {
    if (!IsEmpty(l)) {
        Node* p = l.head;
        Node* q = new Node;
        while (p->next != l.tail)
            p = p->next; // tim node ngay truoc tail
        q = p; // gan node p cho node q
        p = p->next; // p la nut can xoa
        l.tail = q;// cap nhat lai tail
        l.tail->next = NULL; // cap nhat node next cho l.tail
        delete p;
    }
}
/* */
int RemoveHead(List& l, int& x) {
    if (l.head != NULL) {
        Node* p = l.head;
        x = p->data;
        l.head = p->next;
        delete p;
        if (l.head == NULL) {
            l.tail = NULL;
            return 1;
        }
    }
    return 0;
}
/* xoa all */
void DeleteAll(List& l) {
    int x;
    Node* p = l.head;
    while (p != NULL) {
        RemoveHead(l, x);
        p = l.head;
    }
    l.tail = NULL;
}
/* them nhieu */
void AddMove(List& l) {
    int  i, n, x;
    Node* p;
    printf("\n Nhap so luong phan tu can them  : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\n  a[%d]= ", i);
        scanf("%d", &x);
        p = CreateNode(x);
        AddHead(l, x);
    }
}
/* */
Node* GetNode(List& l, int x) {
    Node* p = l.head;
    int i = 0;
    while (p != NULL && i != x) {
        p = p->next;
        i++;
    }
    if (p != NULL && i == x) {
        return p;
    }
    return NULL;
}
/* ham nhap */
void EnterList(List& l) {
    int  i, n, x;
    Node* p;
    printf("\n Nhap so phan tu cho Node  : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\n  a[%d]= ", i);
        scanf("%d", &x);
        p = CreateNode(x);
        AddList(l, x);
    }
}
/* hien thi Node N */
void PrintN(List l) {
    int c;
    printf("\n\n Hien thi node N : ");
    scanf("%d", &c);
    Node* p = GetNode(l, c);
    if (p != NULL) {
        printf("\nNode thu a[%d]: co gia tri %d :", c, p->data);
    }
}
/* tim kiem Vi Tri trong Node */
void SeachN(List l) {
    int n; int i;
    printf("\n\n Nhap gia tri can tim N :");
    scanf("%d", &n);
    if (i == TimKiem(l, n)) {
        printf("\n Tim thay Vi tri Node a[%d]", i);
    }
    else {
        printf("\n khong tim thay gia tri :");
    }
}
/* them sau 1 node */
void AddmNode(List l) {
    printf("\nthem mot node dua vao sau 1 node nao do : ");
    int n; int k;
    printf("\nNhap gia tri can chen vao sau : "); scanf("%d", &k);
    printf("\nNhap so de  chen : "); scanf("%d", &n);
    AddMid(l, n, k);
    PrintList(l);
}
/* ham xuat */
void PrintList(List& l) {
    Node* p = l.head;
    while (p != NULL) {
        printf("%d\t", p->data);
        p = p->next;
    }
}
// ham main
void swich1(List l) {
    int m; int chon;
    do {
        printf("\n\n\t\t\t =============MENU===============================\n");
        printf("\t\t\t |1. them 1 Node vao dau list                   |\n");
        printf("\t\t\t |2. them 1 Node vao cuoi list                  |\n");
        printf("\t\t\t |3. them nhieu Node vao Dau List               |\n");
        printf("\t\t\t |4. them nhieu Node vao cuoi list              |\n");
        printf("\t\t\t |5. them 1 node vao sau 1 node                 |\n");
        printf("\t\t\t |0. thoat                                      |\n");
        printf("\t\t\t ================================================\n");
        printf("Ban chon: ");
        scanf("%d", &chon);
        switch (chon) {
        case 0: break;
        case 1:
            printf("Nhap so ban muon them vao dau list :");
            scanf("%d", &m);
            AddHead(l, m);
            printf("\n ket qua cua list : ");
            PrintList(l);
            break;
        case 2:
            printf("\n\n Them 1 Node vao cuoi : ");
            scanf("%d", &m);
            AddList(l, m);
            printf("\n ket qua cua list : ");
            PrintList(l);
            break;
        case 3:
            printf("\n\n Them nhieu Node vao dau : ");
            AddMove(l);
            printf("\n ket qua cua list : ");
            PrintList(l);
            break;
        case 4:
            printf("\n\n Them nhieu Node vao cuoi : ");
            EnterList(l);
            printf("\n ket qua cua list : ");
            PrintList(l);
            break;
        case 5:
            AddmNode(l);
            break;
        default:
            printf("\t\t\t den nhap cung  ngu :v");
            break;
        }
    } while (chon);
}
void swich2(List l) {
    int m; int chon;
    do {
        printf("\n\n\t\t\t =============MENU===============================\n");
        printf("\t\t\t |1. hien thi gia tri cua  Node N :             |\n");
        printf("\t\t\t |2. tim gia tri N : trong list                 |\n");
        printf("\t\t\t |3. dem so phan tu cua 1 list                  |\n");
        printf("\t\t\t |0. thoat                                      |\n");
        printf("\t\t\t ================================================\n");
        printf("Ban chon: ");
        scanf("%d", &chon);
        switch (chon) {
        case 0: break;
        case 1:
            PrintN(l);
            break;
        case 2:
            SeachN(l);
            break;
        case 3:
            printf("\n Sum = %d", CountPT(l));
            break;
        default:
            printf("\t\t\t den nhap cung  ngu :v");
            break;
        }
    } while (chon);
}
void swich3(List l) {
    int m; int chon;
    do {
        printf("\n\n\t\t\t =============MENU===============================\n");
        printf("\t\t\t |1. xoa phan tu dau cua list                   |\n");
        printf("\t\t\t |2. xoa phan tu cuoi cung cua list             |\n");
        printf("\t\t\t |3. xoa all trong list                         |\n");
        printf("\t\t\t |0. thoat                                      |\n");
        printf("\t\t\t ================================================\n");
        printf("Ban chon: ");
        scanf("%d", &chon);
        switch (chon) {
        case 0: break;
        case 1:
            printf("\n\nXoa Dau List :\t");
            DelHead(l);
            printf("\n ket qua cua list : ");
            PrintList(l);
            break;
        case 2:
            printf("\n\nXoa Cuoi DS :\t");
            DelTail(l);
            printf("\n ket qua cua list : ");
            PrintList(l);
            break;
        case 3:
            printf("\nXOA ALL");
            DeleteAll(l);
            printf("\n ket qua cua list : ");
            PrintList(l);
            printf("\n da xoa ");
            break;
        default:
            printf("\t\t\t den nhap cung  ngu :v");
            break;
        }
    } while (chon);
}
void MainN(List l) {
    Node* p;
    Init(l);
    EnterList(l);
    PrintList(l);
    int m; int chon;
    do {
        system("cls");
        printf("\n\n\t\t\t ============MENU==============================\n");
        printf("\t\t\t |1. chuc nang them vao DSLKD        :          |\n");
        printf("\t\t\t |2. chuc nang tim kiem,hien thi,dem :          |\n");
        printf("\t\t\t |3. chuc nang xoa                   :          |\n");
        printf("\t\t\t |0. thoat                                      |\n");
        printf("\t\t\t ================================================\n");
        printf("Ban chon: ");
        scanf("%d", &chon);
        switch (chon) {
        case 0: break;
        case 1:
            swich1(l);
            break;
        case 2:
            swich2(l);
            break;
        case 3:
            swich3(l);
            break;
        default:
            printf("\n\t Co chon cung sai : nhap ngu");
            break;
        }
    } while (chon != 3);
}
int main() {
    List l;
    MainN(l);
}