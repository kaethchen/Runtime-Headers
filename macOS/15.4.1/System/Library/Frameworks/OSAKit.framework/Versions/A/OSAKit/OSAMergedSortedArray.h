@class NSArray;

@interface OSAMergedSortedArray : NSArray {
    NSArray *_array1;
    NSArray *_array2;
    struct _mergedIndexes { unsigned char x0 : 1; unsigned int x1 : 31; } *_combinedInfo;
    unsigned long long _count;
}

+ (id)arrayWithArray:(id)a0 array:(id)a1 usingFunction:(void /* function */ *)a2 context:(void *)a3;
+ (id)uniquedArrayWithArray:(id)a0 array:(id)a1 usingFunction:(void /* function */ *)a2 context:(void *)a3;

- (void)dealloc;
- (void)finalize;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)_initWithArray:(id)a0 array:(id)a1 usingFunction:(void /* function */ *)a2 context:(void *)a3 makeUnique:(BOOL)a4;
- (id)initAndUniqueWithArray:(id)a0 array:(id)a1 usingFunction:(void /* function */ *)a2 context:(void *)a3;
- (id)initWithArray:(id)a0 array:(id)a1 usingFunction:(void /* function */ *)a2 context:(void *)a3;

@end
