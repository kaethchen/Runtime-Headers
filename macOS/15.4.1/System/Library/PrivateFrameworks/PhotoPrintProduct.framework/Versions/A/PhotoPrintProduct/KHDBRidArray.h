@interface KHDBRidArray : NSObject <NSCopying, NSCoding> {
    unsigned long long m_startOffset;
    unsigned int m_ridCount;
    unsigned int m_array[32];
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEmpty;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)start;
- (unsigned long long)end;
- (BOOL)overlapsWith:(id)a0;
- (BOOL)setRid:(unsigned long long)a0;
- (void)empty;
- (id)initWithBytes:(const char **)a0;
- (BOOL)isSubsetOf:(id)a0;
- (id)initWithOffset:(unsigned long long)a0;
- (BOOL)isSet:(unsigned long long)a0;
- (void)orRids:(id)a0;
- (unsigned long long)_ridFromAddress:(unsigned long long)a0 withOffset:(unsigned long long)a1;
- (void)_setAllRids;
- (void)andRids:(id)a0;
- (void)appendToArrayOfNumbers:(id)a0;
- (void)appendToData:(id)a0;
- (void)appendToIndexSet:(id)a0;
- (void)appendToSetOfNumbers:(id)a0;
- (void)clearRange:(unsigned long long)a0 to:(unsigned long long)a1;
- (BOOL)clearRid:(unsigned long long)a0;
- (unsigned long long)countRidsNow;
- (void)diffRids:(id)a0;
- (BOOL)firstRid:(unsigned long long *)a0;
- (BOOL)inRange:(unsigned long long)a0;
- (BOOL)lastRid:(unsigned long long *)a0;
- (BOOL)nextRid:(unsigned long long *)a0 afterRid:(unsigned long long)a1;
- (long long)rangeCompare:(unsigned long long)a0;

@end
