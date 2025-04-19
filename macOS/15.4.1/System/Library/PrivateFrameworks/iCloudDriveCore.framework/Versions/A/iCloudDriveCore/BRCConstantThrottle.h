@interface BRCConstantThrottle : BRCThrottle {
    long long _retryBackoff;
}

- (void)reset;
- (void)incrementRetryCount:(long long)a0;
- (long long)nsecsToNextRetry:(long long)a0 now:(long long)a1 increment:(BOOL)a2;
- (id)initWithName:(id)a0 andRetryBackoff:(double)a1;
- (long long)nsecsToNextRetry:(long long)a0 retryCount:(unsigned int *)a1 now:(long long)a2;

@end
