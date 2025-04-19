@class NSArray;

@interface CSUObjectDetectionOptions : NSObject

@property (copy) NSArray *relevantClassNames;
@property float nmsThresholdDetection;
@property float detectionForegroundThreshold;

- (id)init;
- (void).cxx_destruct;

@end
