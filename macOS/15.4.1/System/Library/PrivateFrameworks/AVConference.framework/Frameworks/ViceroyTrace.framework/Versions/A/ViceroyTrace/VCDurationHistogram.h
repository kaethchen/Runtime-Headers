@interface VCDurationHistogram : VCReportingHistogram {
    BOOL _isFinalized;
    unsigned int _previousBucket;
    double _previousSwitchTime;
}

@property (readonly) BOOL isPaused;

- (unsigned long long)totalDuration;
- (void)pause:(double)a0;
- (void)finalize:(double)a0;
- (void)updateWithTime:(double)a0;
- (void)resumeAtBucket:(unsigned int)a0 currentTime:(double)a1;
- (void)switchBucket:(unsigned int)a0 currentTime:(double)a1;

@end
