@protocol AXEHIDDeviceDetectorDelegate;

@interface AXEHIDDeviceDetector : NSObject

@property (class, readonly, nonatomic) AXEHIDDeviceDetector *shared;

@property (nonatomic) struct __IOHIDManager { } *_hidManager;
@property (nonatomic) BOOL detectDevices;
@property (weak, nonatomic) id<AXEHIDDeviceDetectorDelegate> delegate;

- (void).cxx_destruct;
- (id)_matchingDictionaries;

@end
