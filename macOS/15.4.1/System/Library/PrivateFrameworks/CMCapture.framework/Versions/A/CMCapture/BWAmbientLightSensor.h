@class NSObject;
@protocol OS_dispatch_queue;

@interface BWAmbientLightSensor : NSObject {
    struct __IOHIDEventSystemClient { } *_hidSystemClient;
    NSObject<OS_dispatch_queue> *_alsQueue;
    int _luxLevel;
    float _rearLuxLevel;
}

@property (readonly, nonatomic) int luxLevel;
@property (readonly, nonatomic) float rearLuxLevel;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)forceUpdateRearLuxLevel;

@end
