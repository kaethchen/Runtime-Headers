@class NSTimer, NSFileHandle, NSDate, NSMutableArray, StressHUD;

@interface StressTest : NSObject {
    NSDate *startTime;
    NSDate *webProcessStartTime;
    NSTimer *loadTimer;
    NSMutableArray *URLHistory;
    unsigned long long webProcessCrashCount;
    NSFileHandle *sessionFileHandle;
    NSMutableArray *sessionHistory;
    BOOL logNextURLForReplay;
    StressHUD *stressHUD;
}

+ (id)shared;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)stop;
- (unsigned long long)pageCount;
- (BOOL)isStressTestRunning;
- (void)loadWillFail;
- (void)navigateToNextStressTestPage:(id)a0;
- (void)pageLoadFinishedWithURL:(id)a0;
- (void)pageLoadStartedWithURL:(id)a0;
- (void)readSession:(id)a0;
- (void)replaySession:(id)a0;
- (double)upTime;
- (void)validateStressTest;
- (void)validatedStart;
- (unsigned long long)webProcessCrashCount;
- (void)webProcessDidCrash;
- (double)webProcessUpTime;

@end
