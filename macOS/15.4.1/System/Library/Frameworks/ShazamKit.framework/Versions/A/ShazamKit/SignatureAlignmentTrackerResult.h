@interface SignatureAlignmentTrackerResult : NSObject

@property (readonly) double queryStart;
@property (readonly) double queryEnd;
@property (readonly) double referenceStart;
@property (readonly) double referenceEnd;
@property (readonly) float confidence;

- (id)initWithQueryStart:(double)a0 queryEnd:(double)a1 referenceStart:(double)a2 referenceEnd:(double)a3 confidence:(float)a4;

@end
