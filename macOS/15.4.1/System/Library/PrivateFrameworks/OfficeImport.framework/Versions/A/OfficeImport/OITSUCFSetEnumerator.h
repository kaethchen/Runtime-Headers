@interface OITSUCFSetEnumerator : NSEnumerator <NSFastEnumeration> {
    void *mInlineObjects[16];
    const void **mObjects;
    long long mCount;
    long long mIndex;
}

- (void)dealloc;
- (id)allObjects;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)nextObject;
- (id)initWithCFSet:(struct __CFSet { } *)a0;

@end
