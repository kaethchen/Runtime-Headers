@class AMSDelegatePurchaseRequest, NSString, ACAccount, NSNumber;
@protocol AMSBagProtocol;

@interface AMSDelegatePurchasePaymentDialogTask : AMSTask

@property (retain) AMSDelegatePurchaseRequest *currentRequest;
@property (readonly) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (readonly) NSNumber *designVersion;
@property (readonly) NSString *requestingPlatform;
@property (readonly) NSString *targetPlatformVersion;

- (void).cxx_destruct;
- (id)performTask;
- (id)_encodedURLRequest;
- (id)_legacyUserAgentString;
- (id)_purchaseResultFromPurchaseResult:(id)a0 andPaymentSheetInfo:(id)a1;
- (id)initWithDelegatePurchaseRequest:(id)a0 bag:(id)a1 andDesignVersion:(id)a2;

@end
