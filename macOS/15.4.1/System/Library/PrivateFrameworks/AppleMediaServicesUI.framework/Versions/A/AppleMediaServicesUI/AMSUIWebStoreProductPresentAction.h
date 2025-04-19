@class SKStoreProductViewController, NSDictionary, NSString, AMSBinaryPromise, AMSUIWebClientContext;

@interface AMSUIWebStoreProductPresentAction : AMSUIWebAction <SKStoreProductViewControllerDelegate, AMSUIWebActionRunnable>

@property (retain) SKStoreProductViewController *controller;
@property (retain) NSDictionary *parameters;
@property (retain) AMSBinaryPromise *presentPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) AMSUIWebClientContext *context;

- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)a0;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
