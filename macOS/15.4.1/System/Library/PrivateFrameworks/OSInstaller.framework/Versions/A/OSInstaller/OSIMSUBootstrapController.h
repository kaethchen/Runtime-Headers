@class OSIMSUOptions, NSTimer, NSThread, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface OSIMSUBootstrapController : OSIUABaseController <SKManagerListener>

@property (retain) NSMutableArray *installOperations;
@property (retain) OSIMSUOptions *options;
@property (retain) NSTimer *fakeProgressTimer;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) NSThread *fakeTimerThread;
@property double fullTimeEstimate;
@property double timeRemaining;
@property BOOL runFakeProgressThread;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)progressPhaseName;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)startOperation;
- (void)stashUpdateLogs;
- (void)_helperAppExited:(id)a0;
- (void)_launchHelperAppWithPath:(id)a0 withFinishedSelector:(SEL)a1;
- (void)_logSystemInfo;
- (void)fakeProgressThread:(id)a0;
- (BOOL)isPastThePointOfNoReturn;
- (void)launchStartupDisk;
- (void)operation:(id)a0 timeRemaining:(double)a1;
- (void)quitOrReboot;
- (double)timeRemainingAfter:(id)a0;

@end
