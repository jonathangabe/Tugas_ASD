void insertfirst(list *l, address p);
void insertlast(list *l, address p);
void insertafter(address q, address p);

void deletefirst(list *l,address p);
void deletelast(list *l,address p);
void deleteafter(address q,address *p);


void insertafter (list *l, address p, address prec)
{
    next(p) = next(prec);
    next(prec) = p;
}

void deleteafter (list *l, address *p, address prec)
{
    *p = next(prec);
    next(prec) = next(*p);
    next(*p) = nil;
    dealokasi(*p);
}
