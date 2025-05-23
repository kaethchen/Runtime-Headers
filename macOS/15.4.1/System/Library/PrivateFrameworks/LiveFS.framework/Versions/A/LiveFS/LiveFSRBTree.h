@class NSMutableArray;

@interface LiveFSRBTree : NSObject {
    id /* block */ ourComparitor;
    struct rb_tree { void *x0[8]; } *btree;
    struct { void /* function */ *x0; void /* function */ *x1; unsigned long long x2; void *x3; } *btOps;
}

@property (retain) NSMutableArray *ourData;

+ (id)newWithComparitor:(id /* block */)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addEntry:(long long)a0;
- (unsigned long long)count;
- (void)addDataBuffer:(id)a0;
- (id)extractItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBlock:(id /* block */)a1;
- (id)initWithComparitor:(id /* block */)a0;

@end
