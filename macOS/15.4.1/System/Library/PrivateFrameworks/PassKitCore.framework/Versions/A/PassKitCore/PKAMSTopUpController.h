@protocol AMSURLProtocolDelegate, AMSPurchaseDelegate, NSURLSessionDelegate;

@interface PKAMSTopUpController : NSObject

@property (weak, nonatomic) id<AMSURLProtocolDelegate, NSURLSessionDelegate, AMSPurchaseDelegate> taskDelegate;

- (void).cxx_destruct;
- (id)_bag;
- (void)_executeAMSURLRequestForBagKey:(id)a0 method:(long long)a1 parameters:(id)a2 completion:(id /* block */)a3;
- (void)requestDTUAvailable:(id /* block */)a0;
- (void)requestDTUConfigurationWithCompletion:(id /* block */)a0;
- (void)requestPurchaseWithAmount:(id)a0 promotionConfiguration:(id)a1 completion:(id /* block */)a2;

@end
