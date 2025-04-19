@class HKObserverBridgeHandle;

@interface _HKWristDetectionSettingManagerObserverBridge : NSObject <HKWristDetectionSettingManagerObserver>

@property (readonly, nonatomic) HKObserverBridgeHandle *handle;

- (void).cxx_destruct;
- (id)initWithHandle:(id)a0;
- (void)wristDetectionSettingManagerDidObserveWristDetectChange:(id)a0;

@end
