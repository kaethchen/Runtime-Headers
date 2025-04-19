@interface CSVTRejectEventMetadata : NSObject

@property (nonatomic) unsigned long long eventType;
@property (nonatomic) float score;
@property (nonatomic) float threshold;
@property (nonatomic) double deltaTimeFromActivation;

- (id)description;
- (id)initWithEventType:(unsigned long long)a0 score:(float)a1 threshold:(float)a2 deltaTime:(double)a3;

@end
