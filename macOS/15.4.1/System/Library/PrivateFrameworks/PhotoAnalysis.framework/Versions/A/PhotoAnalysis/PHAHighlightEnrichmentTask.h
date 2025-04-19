@interface PHAHighlightEnrichmentTask : PHAEnrichmentTask {
    BOOL _featureAvailable;
    BOOL _featureComplete;
}

@property (nonatomic) unsigned long long tailorOptions;

- (int)priority;
- (double)period;
- (BOOL)featureComplete;
- (BOOL)currentPlatformIsSupported;
- (BOOL)featureAvailable;
- (unsigned long long)featureCode;
- (id)incrementalKey;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (void)timeoutFatal:(BOOL)a0;

@end
