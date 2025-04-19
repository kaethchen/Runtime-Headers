@interface MAStatisticsElapsedTime : NSObject {
    double _elapsedTime;
    double _elapsedStart;
    long long _elapsedCounter;
    double _lastBeginTransactionTime;
    double _lastEndTransactionTime;
}

- (void)dealloc;
- (id)init;
- (void)end;
- (void)begin;
- (double)elapsedTime;
- (double)elapsedTimeSinceLastBeginTransaction;
- (double)elapsedTimeSinceLastEndTransaction;
- (BOOL)isTransactionPending;

@end
