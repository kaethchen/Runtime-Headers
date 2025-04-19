@interface FPDCacheDeleteServiceForTesting : FPDCacheDeleteService

+ (id)testingInstance;

- (void)registerCacheDeleteCallbacks;

@end
