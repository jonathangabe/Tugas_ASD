void insertfirst(list *l, address p){
    if (first(*l)==nil){
        first(*l)=p;
    }
    else {
        next(p)=first(*l);
        first(*l)=p;
    }

void insertlast(list *l, address p);
void insertafter(address q, address p);

void deletefirst(list *l,address p)
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
void deletelast(list *l,address p);
void deleteafter(address q,address *p);
