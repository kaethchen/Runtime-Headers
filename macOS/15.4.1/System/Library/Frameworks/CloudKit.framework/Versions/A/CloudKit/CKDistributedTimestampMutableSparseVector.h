@class NSMutableDictionary;

@interface CKDistributedTimestampMutableSparseVector : CKDistributedTimestampSparseVector

@property (readonly, nonatomic) NSMutableDictionary *clockValues;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setBackingState:(id)a0;
- (void)addClockValuesInIndexSet:(id)a0 forSiteIdentifier:(id)a1;
- (void)intersectVector:(id)a0;
- (void)minusVector:(id)a0;
- (void)removeClockValuesInIndexSet:(id)a0 forSiteIdentifier:(id)a1;
- (void)unionVector:(id)a0;

@end
