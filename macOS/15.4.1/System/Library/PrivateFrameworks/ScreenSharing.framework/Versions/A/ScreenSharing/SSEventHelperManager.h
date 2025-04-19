@class RDSemaphore, NSObject;
@protocol SSInputEventConsumer;

@interface SSEventHelperManager : NSObject <SSInputEventSource> {
    unsigned int mServerPort;
    unsigned int mClientPort;
    struct __CFRunLoopSource { } *mRunLoopSource;
    struct __CFMachPort { } *mCFMachPort;
    RDSemaphore *mRFBEventHelperdLaunchSemaphore;
}

@property unsigned long long lastModifierFlags;
@property (readonly, nonatomic) NSObject<SSInputEventConsumer> *inputEventConsumer;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)captureSpecialKeys:(id)a0;
- (void)ssSetInputEventConsumer:(id)a0;
- (void)ssStartInputEventSource;
- (void)ssStopInputEventSource;
- (void)stopKeyCapture;

@end
