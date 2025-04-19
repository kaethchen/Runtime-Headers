@class VUIPurchaseRequest, NSString, AMSUIPurchaseQueue, NSMutableSet;

@interface VUIPurchaser : NSObject <AMSUIPurchaseResponseProtocol>

@property (retain, nonatomic) NSMutableSet *purchasingParamsSet;
@property (retain, nonatomic) AMSUIPurchaseQueue *purchaseUIQueue;
@property (retain, nonatomic) VUIPurchaseRequest *interruptedPurchaseRequest;
@property (readonly, nonatomic) BOOL isPurchaseInProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)handleAuthenticateRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)handleDialogRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)handleEngagementRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)purchase:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;
- (id)purchase:(id)a0 handleWindowRequest:(id)a1 purchaseQueue:(id)a2 error:(id *)a3;
- (void)enqueuePurchase:(id)a0 withCompletion:(id /* block */)a1;
- (id)_getAdamIdFromBuyParams:(id)a0;
- (void)didCompleteInterruptedBuyWithResponse:(id)a0 error:(id)a1;
- (void)forgetPurchasing:(id)a0;
- (BOOL)isPurchasing:(id)a0;
- (void)postCrossProcessNotificationWithBuyParams:(id)a0 error:(id)a1;
- (void)rememberPurchasing:(id)a0;

@end
