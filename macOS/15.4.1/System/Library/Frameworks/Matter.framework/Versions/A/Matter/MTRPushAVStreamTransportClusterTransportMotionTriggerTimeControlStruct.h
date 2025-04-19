@class NSNumber;

@interface MTRPushAVStreamTransportClusterTransportMotionTriggerTimeControlStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *initialDuration;
@property (copy, nonatomic) NSNumber *augmentationDuration;
@property (copy, nonatomic) NSNumber *maxDuration;
@property (copy, nonatomic) NSNumber *blindDuration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
