@class mutationsPtr, EAEmailAddressSet;

@interface _EAEmailAddressSetEnumerator : NSEnumerator {
    EAEmailAddressSet *_set;
    struct { unsigned long long state; mutationsPtr **itemsPtr; unsigned long long *x0; unsigned long long extra[5]; } _state;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithSet:(id)a0;
- (id)nextObject;

@end
