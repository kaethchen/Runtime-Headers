@interface VCSignedHistogram : VCHistogram

@property (readonly) const int *signedRanges;

- (BOOL)merge:(id)a0;
- (void)addValue:(unsigned int)a0 withIncrement:(unsigned int)a1;
- (id)initWithType:(int)a0 bucketValues:(id)a1;

@end
