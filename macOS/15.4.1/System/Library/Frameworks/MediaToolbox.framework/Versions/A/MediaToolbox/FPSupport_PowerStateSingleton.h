@class NSObject;
@protocol OS_dispatch_queue;

@interface FPSupport_PowerStateSingleton : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQ;
    int notifyTokenPowerSource;
    int notifyTokenPrefsChange;
}

+ (id)sharedFPSupportPowerStateSingleton;

- (void)dealloc;
- (id)init;
- (void)_didChangePowerState:(id)a0;
- (void)postNotification;

@end
