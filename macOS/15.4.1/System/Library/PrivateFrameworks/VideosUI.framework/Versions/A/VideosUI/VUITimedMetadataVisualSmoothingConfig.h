@interface VUITimedMetadataVisualSmoothingConfig : NSObject

@property (nonatomic) double initialLookBack;
@property (nonatomic) double initialLookAhead;
@property (nonatomic) double lookAhead;
@property (nonatomic) double timeRangeProximityThreshold;

- (id)init;

@end
