@class NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface CSExcessiveCPUViolationHandler : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_log> *logger;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)handleViolationByProcess:(id)a0 pid:(unsigned long long)a1 path:(id)a2 endTime:(struct mach_timespec { unsigned int x0; int x1; })a3 observedValue:(long long)a4 observationWindow:(long long)a5 limitValue:(long long)a6 limitWindow:(long long)a7 fatal:(BOOL)a8;
- (void)logCPUViolationToPowerLogWithPayload:(id)a0;

@end
