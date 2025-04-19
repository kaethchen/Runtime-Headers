@class CKDistributedTimestampMutableAttributedVector;

@interface CKDistributedTimestampStateVector : CKDistributedTimestampImmutableStateVector <CKDistributedTimestampMutableVector>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKDistributedTimestampMutableAttributedVector *backingVector;


- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setBackingState:(id)a0;
- (void)addClockValuesInIndexSet:(id)a0 forSiteIdentifier:(id)a1;
- (void)addClockValuesInIndexSet:(id)a0 withAtomState:(unsigned char)a1 forSiteIdentifier:(id)a2;
- (void)addClockValuesInIndexSet:(id)a0 withClockType:(unsigned char)a1 atomState:(unsigned char)a2 forSiteIdentifier:(id)a3;
- (void)addClockValuesInIndexSet:(id)a0 withClockType:(unsigned char)a1 forSiteIdentifier:(id)a2;
- (void)intersectStateVector:(id)a0;
- (void)intersectVector:(id)a0;
- (void)minusStateVector:(id)a0;
- (void)minusVector:(id)a0;
- (void)unionStateVector:(id)a0;

@end
