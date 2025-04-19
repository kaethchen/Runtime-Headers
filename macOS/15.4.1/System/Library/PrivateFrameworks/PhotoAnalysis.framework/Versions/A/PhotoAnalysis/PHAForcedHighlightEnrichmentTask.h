@interface PHAForcedHighlightEnrichmentTask : PHAHighlightEnrichmentTask

- (int)priority;
- (double)period;
- (id)_highlightUUIDsNeedingForceEnrichmentInPhotoLibrary:(id)a0;
- (BOOL)currentPlatformIsSupported;
- (id)incrementalKey;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (unsigned long long)tailorOptions;
- (void)timeoutFatal:(BOOL)a0;

@end
