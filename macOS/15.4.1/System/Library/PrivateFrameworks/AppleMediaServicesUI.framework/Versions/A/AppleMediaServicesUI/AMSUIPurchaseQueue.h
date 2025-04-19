@class AMSUIPurchaseQueueConfiguration, NSString;

@interface AMSUIPurchaseQueue : AMSPurchaseQueue <AMSUIPurchaseDelegate>

@property (retain) AMSUIPurchaseQueueConfiguration *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)purchase:(id)a0 handleSceneBundleIdentifierRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleSceneIdentifierRequest:(id)a1 completion:(id /* block */)a2;
- (id)purchase:(id)a0 handleSceneIdentifierRequest:(id)a1 error:(id *)a2;
- (void)purchase:(id)a0 handleWindowRequest:(id)a1 completion:(id /* block */)a2;
- (id)purchase:(id)a0 handleWindowRequest:(id)a1 error:(id *)a2;

@end
