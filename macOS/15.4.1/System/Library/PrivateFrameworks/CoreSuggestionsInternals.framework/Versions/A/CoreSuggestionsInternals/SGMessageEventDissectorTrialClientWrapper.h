@class _PASLock;

@interface SGMessageEventDissectorTrialClientWrapper : SGTrialClientWrapper {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)eventClassifierModelPath;
- (id)eventClassifierThreshold;
- (id)eventExtractionAssetsPath;
- (id)messageProcessingLimit;
- (id)rateLimitInterval;
- (void)updateFactors;

@end
