@interface NSMutableIndexPath : NSIndexPath {
    unsigned long long *_mutableIndexes;
    BOOL _locked;
}

+ (void)setIndex:(unsigned long long)a0 atPosition:(unsigned long long)a1 forIndexPath:(id *)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)retain;
- (long long)compare:(id)a0;
- (void)getIndexes:(unsigned long long *)a0;
- (unsigned long long)indexAtPosition:(unsigned long long)a0;
- (id)initWithIndexes:(const unsigned long long *)a0 length:(unsigned long long)a1;

@end
