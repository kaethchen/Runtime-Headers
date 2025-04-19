@class NSArray;

@interface _BSSqliteFrozenResultRow : BSSqliteResultRow {
    unsigned long long _count;
    NSArray *_frozenColumnNames;
    NSArray *_frozenObjects;
    NSArray *_frozenIntegers;
    NSArray *_frozenDoubles;
    NSArray *_frozenStrings;
    NSArray *_frozenDatas;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)keyAtIndex:(unsigned long long)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (double)doubleAtIndex:(unsigned long long)a0;
- (long long)integerAtIndex:(unsigned long long)a0;
- (id)dataAtIndex:(unsigned long long)a0;
- (id)stringAtIndex:(unsigned long long)a0;

@end
