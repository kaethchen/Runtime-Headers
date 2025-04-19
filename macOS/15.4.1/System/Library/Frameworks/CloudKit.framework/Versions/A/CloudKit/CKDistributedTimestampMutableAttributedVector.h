@class NSMutableDictionary;

@interface CKDistributedTimestampMutableAttributedVector : CKDistributedTimestampAttributedVector

@property (readonly, nonatomic) NSMutableDictionary *mutableAttributeToSparseVector;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_maintainInvariants;
- (void)_setBackingState:(id)a0;
- (void)_swapContentsWithVector:(id)a0;
- (void)addAllClockValuesFromVector:(id)a0;
- (void)addClockValuesInIndexSet:(id)a0 withAttribute:(unsigned short)a1 forSiteIdentifier:(id)a2;
- (id)attributeToSparseVector;
- (void)clockVector_checkInvariantsAgainstClockValues:(id)a0 withSiteIdentifier:(id)a1 ofType:(unsigned char)a2;
- (void)clockVector_checkInvariantsAgainstVector:(id)a0;
- (void)clockVector_intersectVector:(id)a0 withExpansionState:(unsigned char)a1;
- (void)clockVector_maintainInvariants;
- (void)clockVector_minusVector:(id)a0 withExpansionState:(unsigned char)a1;
- (void)intersectAttributedVector:(id)a0;
- (void)intersectVector:(id)a0;
- (void)minusVector:(id)a0;
- (void)minusVector:(id)a0 forAttribute:(unsigned short)a1;

@end
