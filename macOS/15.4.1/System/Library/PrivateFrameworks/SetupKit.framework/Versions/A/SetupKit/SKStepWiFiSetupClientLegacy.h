@class NSError, NSString, CUBonjourBrowser, CWFInterface, CUReachabilityMonitor, NSObject, SKSetupBase;
@protocol OS_dispatch_queue, CUMessaging, OS_dispatch_source;

@interface SKStepWiFiSetupClientLegacy : NSObject <CULabelable, SKStepable> {
    CUBonjourBrowser *_bonjourBrowser;
    NSString *_bonjourTestID;
    NSObject<OS_dispatch_source> *_bonjourTimer;
    BOOL _internetReachabilityEnabled;
    CUReachabilityMonitor *_internetReachabilityMonitor;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    int _runState;
    unsigned long long _startBonjourTestTicks;
    unsigned long long _startTicks;
    BOOL _stepDone;
    NSError *_stepError;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    CWFInterface *_wifiInterface;
}

@property (readonly, nonatomic) double metricTotalSeconds;
@property (readonly, nonatomic) double metricWiFiSetupSeconds;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ skCompletionHandler;
@property (retain, nonatomic) id<CUMessaging> skMessaging;
@property (weak, nonatomic) SKSetupBase *skSetupObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_invalidated;
- (void)_run;
- (void)_completeWithError:(id)a0;
- (BOOL)_runInit;
- (void)_invalidateCore;
- (void)_runInternetReachabilityStart;
- (void)_runWiFiSetupStart;

@end
