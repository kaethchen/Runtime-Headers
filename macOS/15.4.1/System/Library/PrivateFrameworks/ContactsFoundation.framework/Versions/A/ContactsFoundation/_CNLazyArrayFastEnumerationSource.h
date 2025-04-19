@class mutationsPtr;
@protocol NSFastEnumeration;

@interface _CNLazyArrayFastEnumerationSource : NSObject <_CNLazyArrayOperation> {
    id<NSFastEnumeration> _fastEnumeration;
    struct { unsigned long long state; mutationsPtr **itemsPtr; unsigned long long *x0; unsigned long long extra[5]; } _state;
    BOOL _firstCall;
    long long _mutationsPtrValue;
    unsigned long long _count;
    unsigned long long _index;
    id _stackbuf[16];
}

- (void).cxx_destruct;
- (id)nextObject;
- (void)fillBuffer;
- (id)initWithFastEnumeration:(id)a0;

@end
