@class CKDistributedTimestampMutableAttributedVector;

@interface CKDistributedTimestampClockVector : CKDistributedTimestampImmutableClockVector <CKDistributedTimestampMutableVector>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKDistributedTimestampMutableAttributedVector *backingVector;


- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setBackingState:(id)a0;
- (void)addClockValuesInIndexSet:(id)a0 forSiteIdentifier:(id)a1;
- (void)addClockValuesInIndexSet:(id)a0 withClockType:(unsigned char)a1 forSiteIdentifier:(id)a2;
- (void)intersectVector:(id)a0;
- (void)minusVector:(id)a0;
- (void)unionVector:(id)a0;

@end
