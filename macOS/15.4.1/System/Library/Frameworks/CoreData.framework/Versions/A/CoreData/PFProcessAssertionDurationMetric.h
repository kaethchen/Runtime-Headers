@class NSNumber;

@interface PFProcessAssertionDurationMetric : PFProcessAssertionMetric {
    NSNumber *_durationSeconds;
    NSNumber *_backgroundTimeRemaining;
}

- (void)dealloc;
- (id)name;
- (id)createPayload;

@end
