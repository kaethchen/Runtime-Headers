@interface ImagePlaygroundInternal.NonUIGenerator : _TtCs12_SwiftObject <ImagePlayground.GPNonUIExtension> {
    void /* unknown type, empty encoding */ servicesFetcher;
    void /* unknown type, empty encoding */ $__lazy_storage_$_generator;
    void /* unknown type, empty encoding */ lastParametersAssignmentBatchID;
    void /* unknown type, empty encoding */ currentGeneration;
    void /* unknown type, empty encoding */ nextGenerations;
    void /* unknown type, empty encoding */ rateLimiter;
}

- (void)acquireAssertion;
- (void)releaseAssertion;
- (void)stopGeneration:(id)a0;
- (void)fetchAvailableStylesWithCompletion:(id /* block */)a0;
- (void)startGenerationWithStyle:(id)a0 promptElements:(id)a1 replyHandler:(id /* block */)a2 batchID:(id)a3;

@end
