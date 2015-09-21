void insertfirst(list *l, address p){
    if (first(*l)==nil){
        first(*l)=p;
    }
    else {
        next(p)=first(*l);
        first(*l)=p;
    };

void insertlast(list *l, address p)
{
    address q = first(*l);
    while (next(q)!=nil)
    {
        q=next(q);
    }
    next(q)=p;
    next(p)=nil;
};

void deletefirst(list *l,address p){
    if(next(first(*l)==nil){
        first(*l)=nil;
       )
        else{
            p=first(*l);
            first(*l)=next(p);
            next(p)=nil;
        }
        dealokasi(p);
};

void deletelast(list *l,address p)
{
    address q;
    p=first(*l);
    while(next(p)!=nil)
    {
        q=p;
        p=next(p);
    }
    next(q)=nil;
    dealokasi(p);
};

void insertafter (list *l, address p, address prec)
{
    next(p) = next(prec);
    next(prec) = p;
};

void deleteafter (list *l, address *p, address prec)
{
    *p = next(prec);
    next(prec) = next(*p);
    next(*p) = nil;
    dealokasi(*p);
};

address searchdata(list l, infotype x)
{
    address p;
    p=first(l);
    while(p!=nil)
    {
        if(strcmp(info(p).fak,x.fak)==0)
        {
            break;
        }
    }
    return p;
};

void printinfo(list l)
{
    address p;
    while(next(p)!=nil)
    {
        cout << "Masukan FAKULTAS : " << info(p).fak << endl;
        cout << "Masukan JURUSAN : " << info(p).jur << endl;
        cout << "Masukan KETUA : " << info(p).ketua << endl;
        cout << "Masukan JUMLAH DIVISI : " << info(p).jmldiv << endl;
        cout << "Masukan JUMLAH ANGGOTA : " << info(p).jmlang << endl;
        p=next(p);
        cout << endl;
    }
};
