@class NSArray, NSMutableArray, AMSMockURLOverride;

@interface AMSMockNetworkProxy : NSURLProtocol

@property (class, readonly) NSMutableArray *_executedOverrides;
@property (class, readonly) NSArray *registeredOverrides;
@property (class, readonly) NSArray *executedOverrides;

@property (retain) AMSMockURLOverride *currentOverride;

+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (void)removeOverride:(id)a0;
+ (void)addOverride:(id)a0;
+ (void)clearOverrides;
+ (id)_overrides;
+ (void)_removeAllOverrides;
+ (void)_removeOverride:(id)a0;
+ (void)_sync:(id /* block */)a0;

- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (void)finishWithError:(id)a0;
- (void)sendResponse:(id)a0;
- (void)finishWithData:(id)a0;
- (void)performRedirectFromResponse:(id)a0;

@end
