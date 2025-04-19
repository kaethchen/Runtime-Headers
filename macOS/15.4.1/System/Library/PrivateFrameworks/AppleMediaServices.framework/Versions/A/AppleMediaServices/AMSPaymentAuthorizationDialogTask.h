@class AMSPaymentAuthorizationDialogRequest, NSString, NSDictionary, AMSPurchaseInfo;
@protocol AMSBagProtocol;

@interface AMSPaymentAuthorizationDialogTask : AMSTask

@property (retain) NSDictionary *idmsToken;
@property (retain) NSString *passwordEquivalentToken;
@property (retain) AMSPaymentAuthorizationDialogRequest *request;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSPurchaseInfo *purchaseInfo;

- (void).cxx_destruct;
- (id)perform;
- (id)initWithRequest:(id)a0 bag:(id)a1;

@end
