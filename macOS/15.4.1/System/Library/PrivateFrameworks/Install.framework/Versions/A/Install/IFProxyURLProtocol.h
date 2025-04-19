@interface IFProxyURLProtocol : NSURLProtocol

+ (void)initialize;
+ (id)_canonicalURLForURL:(id)a0;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;

- (void)stopLoading;
- (void)startLoading;
- (void)didLoadData:(id)a0;

@end
