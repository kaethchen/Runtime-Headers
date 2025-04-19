@class BPSSink, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface ATXSmartActivationEarlyExitDetectionLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)stopListening;
- (BOOL)_logEventIfEarlyExit:(id)a0;
- (void)_processNewUserFocusComputedModeEvent:(id)a0;
- (void)_registerForModeChangeNotifications;

@end
