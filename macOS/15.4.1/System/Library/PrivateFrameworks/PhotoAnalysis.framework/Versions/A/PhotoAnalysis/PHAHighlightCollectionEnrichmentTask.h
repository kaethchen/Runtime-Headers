@class NSDictionary;

@interface PHAHighlightCollectionEnrichmentTask : PHAEnrichmentTask {
    NSDictionary *_options;
}

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (int)priority;
- (double)period;
- (BOOL)currentPlatformIsSupported;
- (id)enrichmentProcessor;
- (id)incrementalKey;
- (id)taskClassDependencies;
- (void)timeoutFatal:(BOOL)a0;

@end
