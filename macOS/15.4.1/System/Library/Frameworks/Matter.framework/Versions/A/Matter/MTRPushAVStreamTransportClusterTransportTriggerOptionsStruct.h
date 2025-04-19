@class NSNumber, NSArray, MTRPushAVStreamTransportClusterTransportMotionTriggerTimeControlStruct;

@interface MTRPushAVStreamTransportClusterTransportTriggerOptionsStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *triggerType;
@property (copy, nonatomic) NSArray *motionZones;
@property (copy, nonatomic) NSNumber *motionSensitivity;
@property (copy, nonatomic) MTRPushAVStreamTransportClusterTransportMotionTriggerTimeControlStruct *motionTimeControl;
@property (copy, nonatomic) NSNumber *maxPreRollLen;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
