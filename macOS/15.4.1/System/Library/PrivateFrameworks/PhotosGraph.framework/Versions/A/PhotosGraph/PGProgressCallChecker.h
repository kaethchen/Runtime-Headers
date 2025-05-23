@class NSString, NSObject;
@protocol OS_os_log;

@interface PGProgressCallChecker : NSObject {
    double _timestampOfLastCallToProgress;
    double _timestampOfLastRecordedCallToProgress;
    unsigned long long _numberOfCallsToProgressSinceLastRecordedCall;
    NSObject<OS_os_log> *_loggingConnection;
    double _lastProgress;
    BOOL _wasStopped;
}

@property (copy, nonatomic) NSString *taskName;
@property (nonatomic) BOOL reportMemoryUsage;

- (void).cxx_destruct;
- (id)memoryUsage;
- (id)initWithTaskName:(id)a0;
- (void)checkCallsWithProgress:(double)a0 stop:(BOOL)a1;
- (id)initWithTaskName:(id)a0 loggingConnection:(id)a1;

@end
