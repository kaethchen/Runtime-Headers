@class BSContinuousMachTimer, NSString, NSArray, NSSet;

@interface BKHIDEventDeliveryClient : NSObject <BSInvalidatable> {
    BOOL _terminating;
    int _pid;
    NSString *_processDescription;
    NSArray *_deliveryRoots;
    NSArray *_keyCommandDeliveryRoots;
    NSArray *_deferringRules;
    NSSet *_keyCommandsRegistrations;
    NSSet *_observerResolutions;
    BSContinuousMachTimer *_bufferTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;

@end
