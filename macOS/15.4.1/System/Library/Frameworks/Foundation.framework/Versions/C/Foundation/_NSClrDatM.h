@interface _NSClrDatM : NSConcreteMutableData

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_allowsDirectEncoding;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (BOOL)_canUseRealloc;
- (void)_freeBytes;

@end
