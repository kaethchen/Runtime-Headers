@interface NSSelectionArray : NSArray {
    unsigned long long _count;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)arrayWithArray:(id)a0;
+ (id)arrayWithObjects:(id *)a0 count:(unsigned long long)a1;
+ (id)arrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)newWithIndexes:(id)a0;
+ (id)arrayWithIndexes:(id)a0;
+ (id)arrayWithRanges:(const struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned long long)a1;
+ (id)newWithArray:(id)a0;
+ (id)newWithObjects:(const id *)a0 count:(unsigned long long)a1;
+ (id)newWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)newWithRanges:(const struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToArray:(id)a0;
- (unsigned long long)count;
- (id)initWithArray:(id)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned long long)a0;
- (void)enumerateRangesUsingBlock:(id /* block */)a0;
- (void)enumerateRangesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)enumerateRangesAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })firstRange;
- (unsigned long long)indexOfFirstRangeContainingOrFollowing:(unsigned long long)a0;
- (id)initWithIndexes:(id)a0;
- (id)initWithRanges:(const struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })lastRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })maximumRange;

@end
