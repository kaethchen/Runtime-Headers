@interface SPMetadataPattern : NSObject

@property (readonly) long long bitCount;

- (BOOL)matches:(id)a0;
- (id)filterResults:(id)a0;
- (unsigned long long)matchBits:(id)a0;
- (id)mutableFilterResults:(id)a0 queryState:(int *)a1;
- (void)setAttributesForWildcard:(id)a0;

@end
