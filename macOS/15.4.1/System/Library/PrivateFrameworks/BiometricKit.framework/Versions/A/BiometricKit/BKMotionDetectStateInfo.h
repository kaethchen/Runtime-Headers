@class NSArray;

@interface BKMotionDetectStateInfo : NSObject

@property (readonly, nonatomic) NSArray *motionMatrix;
@property (readonly, nonatomic) unsigned long long motionDetectState;

- (void).cxx_destruct;

@end
