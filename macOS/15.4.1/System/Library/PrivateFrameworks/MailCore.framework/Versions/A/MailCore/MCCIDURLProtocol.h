@interface MCCIDURLProtocol : NSURLProtocol

+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (void)registerDataProvider:(id)a0;
+ (void)unregisterDataProvider:(id)a0;

- (void)stopLoading;
- (void)startLoading;

@end
