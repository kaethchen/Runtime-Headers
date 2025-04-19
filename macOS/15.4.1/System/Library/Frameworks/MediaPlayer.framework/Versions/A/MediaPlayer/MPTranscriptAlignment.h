@interface MPTranscriptAlignment : NSObject

@property (readonly, nonatomic) double playerStartTime;
@property (readonly, nonatomic) double playerEndTime;
@property (readonly, nonatomic) double referenceStartTime;
@property (readonly, nonatomic) double referenceEndTime;
@property (readonly, nonatomic) BOOL matchedBeginning;
@property (readonly, nonatomic) BOOL matchedEnd;

- (id)description;
- (id)initWithPlayerStartTime:(double)a0 playerEndTime:(double)a1 referenceStartTime:(double)a2 referenceEndTime:(double)a3 matchedBeginning:(BOOL)a4 matchedEnd:(BOOL)a5;

@end
