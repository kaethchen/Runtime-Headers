@class NSString, NSTimer, NSCondition, NSLock;

@interface Watchdog : NSObject {
    BOOL shouldStop;
    double watchdogInterval;
    NSTimer *watchdogTimer;
    NSTimer *unresponsiveWebProcessTimer;
    NSString *unresponsiveProcess;
    NSCondition *watchdogCondition;
    NSLock *samplingLock;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)checkIn;
- (void)webProcessDidBecomeUnresponsive;
- (void)clearUnresponsiveWebProcessTimer;
- (BOOL)handleHang;
- (void)handleSafariHang;
- (void)handleWebProcessHang;
- (void)runWatchdog;
- (id)sampleOutput;
- (void)setWatchdogInterval:(double)a0;
- (void)terminateUnresponsiveProcess;
- (double)watchdogInterval;

@end
