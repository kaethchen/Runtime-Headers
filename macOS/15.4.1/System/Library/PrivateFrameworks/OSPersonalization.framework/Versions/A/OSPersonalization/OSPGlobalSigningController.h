@class NSOperationQueue, OSPRequest;

@interface OSPGlobalSigningController : NSObject

@property (retain) OSPRequest *request;
@property (retain) NSOperationQueue *queue;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (void)_enqueuePersonalizationRequest:(id)a0 shouldOutputManifestRoots:(BOOL)a1 errors:(id)a2;
- (unsigned long long)_ticketTypesForBuildIdentity:(id)a0;
- (void)globallySignForAllDevicesAndVariantsWithCompletionHandler:(id /* block */)a0;

@end
