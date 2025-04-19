@interface _NSPlaceholderIndexSet : NSIndexSet

- (oneway void)release;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (id)initWithCoder:(id)a0;
- (id)initWithBitfield:(unsigned long long)a0;
- (id)initWithIndex:(unsigned long long)a0;
- (id)initWithIndexSet:(id)a0;
- (id)initWithIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
