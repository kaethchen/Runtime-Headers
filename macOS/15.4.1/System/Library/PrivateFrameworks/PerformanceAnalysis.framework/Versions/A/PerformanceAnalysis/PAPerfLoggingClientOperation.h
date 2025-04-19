@class NSObject;
@protocol OS_dispatch_source;

@interface PAPerfLoggingClientOperation : PAPerfLoggingCoreOperation {
    BOOL _shouldLogResultsToSystemLog;
    BOOL _shouldMonitorWSUpdates;
    BOOL _ended;
    NSObject<OS_dispatch_source> *timeoutTimerSource;
}

+ (id)existingOperationWithOperationCategory:(id)a0 operationName:(id)a1;

- (void)dealloc;
- (void)_ktraceMarkIntervalTransition:(id)a0 withTransitionType:(int)a1;
- (void)_ktraceMarkOperationEndWithType:(unsigned long long)a0;
- (void)_ktraceMarkOperationStart;
- (void)_ktraceOperationEventWithID:(unsigned int)a0;
- (void)_ktraceOperationEventWithID:(unsigned int)a0 andString:(id)a1;
- (void)endWithType:(unsigned long long)a0 truncateDurationInSeconds:(double)a1;
- (id)initAndStartWithOperationCategory:(id)a0 andOperationName:(id)a1 andPid:(int)a2 shouldMonitorWSUpdates:(BOOL)a3;
- (void)markIntervalTransition:(id)a0 transitionType:(int)a1 atCGSTimestampInSec:(double)a2 withContext:(id)a3 isWSIntervalTransition:(BOOL)a4;
- (void)markOperationStart;

@end
