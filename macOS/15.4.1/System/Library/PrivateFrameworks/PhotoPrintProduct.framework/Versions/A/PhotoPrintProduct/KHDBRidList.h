@class NSMutableArray;

@interface KHDBRidList : NSObject <NSCopying, NSCoding> {
    unsigned long long m_ridCount;
    NSMutableArray *m_ridArrays;
    unsigned long long m_lastOffsetFoundAt;
}

@property BOOL isDirty;

+ (id)listFromNumbers:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEmpty;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (void)lock;
- (void)unlock;
- (BOOL)overlapsWith:(id)a0;
- (BOOL)setRid:(unsigned long long)a0;
- (void)empty;
- (id)encodeAsData;
- (BOOL)isSubsetOf:(id)a0;
- (BOOL)isSet:(unsigned long long)a0;
- (unsigned long long)lastRid;
- (void)orRids:(id)a0;
- (void)_addArray:(id)a0;
- (id)_arrayAtIndex:(unsigned long long)a0;
- (unsigned long long)_arrayCount;
- (unsigned long long)_findOffset:(unsigned long long)a0;
- (unsigned long long)_findOffset:(unsigned long long)a0 fromLow:(unsigned long long)a1 toHigh:(unsigned long long)a2;
- (void)andNumbers:(id)a0;
- (void)andRids:(id)a0;
- (id)asArrayOfLimitedArraysOfNumbers:(unsigned long long)a0;
- (id)asArrayOfNumbers;
- (id)asCommaSeparatedString;
- (id)asIndexSet;
- (id)asSetOfNumbers;
- (void)clearRange:(unsigned long long)a0 to:(unsigned long long)a1;
- (BOOL)clearRid:(unsigned long long)a0;
- (void)diffNumbers:(id)a0;
- (void)diffRids:(id)a0;
- (id)extractBatch:(unsigned long long)a0;
- (id)extractFirstRidArray;
- (id)extractLastRidArray;
- (unsigned long long)firstRid;
- (id)firstRidArray;
- (void)orNumbers:(id)a0;
- (id)ridArrays;
- (void)setRidsUsingIndexSet:(id)a0;
- (void)setRidsUsingList:(id)a0;
- (void)verifyRidList;

@end
