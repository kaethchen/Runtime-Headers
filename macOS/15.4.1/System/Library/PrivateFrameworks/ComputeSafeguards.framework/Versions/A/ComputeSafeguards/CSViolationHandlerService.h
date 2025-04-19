@class CSExcessiveCPUViolationHandler, NSString, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface CSViolationHandlerService : NSXPCListener <NSXPCListenerDelegate, SafeguardsViolationReporting>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_log> *logger;
@property (retain, nonatomic) CSExcessiveCPUViolationHandler *cpuViolationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)run;
+ (id)_sharedInstance;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)_init;
- (void)_start;
- (void)initializeHandlers;
- (void)reportExcessiveCPUUseBy:(id)a0 pid:(unsigned long long)a1 path:(id)a2 endTime:(struct mach_timespec { unsigned int x0; int x1; })a3 observedValue:(long long)a4 observationWindow:(long long)a5 limitValue:(long long)a6 limitWindow:(long long)a7 fatal:(BOOL)a8;

@end
