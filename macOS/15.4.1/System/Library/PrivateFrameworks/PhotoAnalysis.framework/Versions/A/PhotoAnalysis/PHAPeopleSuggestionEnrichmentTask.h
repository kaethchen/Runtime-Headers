@interface PHAPeopleSuggestionEnrichmentTask : PHAEnrichmentTask

- (int)priority;
- (double)period;
- (id)enrichmentProcessor;
- (void)timeoutFatal:(BOOL)a0;

@end
