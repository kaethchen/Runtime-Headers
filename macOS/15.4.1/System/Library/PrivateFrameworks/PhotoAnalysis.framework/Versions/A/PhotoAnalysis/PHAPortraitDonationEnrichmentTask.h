@interface PHAPortraitDonationEnrichmentTask : PHAEnrichmentTask

- (int)priority;
- (double)period;
- (BOOL)currentPlatformIsSupported;
- (id)enrichmentProcessor;
- (id)incrementalKey;
- (void)timeoutFatal:(BOOL)a0;

@end
