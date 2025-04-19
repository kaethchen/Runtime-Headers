@class NSString, NSDictionary, VUIAppContext;

@interface VUIActionCommerceTransaction : VUIAction

@property (retain, nonatomic) NSString *commerceActionRef;
@property (readonly, copy, nonatomic) NSDictionary *contextData;
@property (readonly, nonatomic) NSString *buyParams;
@property (weak, nonatomic) VUIAppContext *appContext;

+ (void)displayConfirmationUIWithTitle:(id)a0 andBody:(id)a1;
+ (void)displayConfirmationUIWithTitle:(id)a0 andBody:(id)a1 completion:(id /* block */)a2;
+ (id)extractSalableAdamIDFromBuyParams:(id)a0;
+ (BOOL)isTransactionInProgressForBuyParams:(id)a0;

- (void).cxx_destruct;
- (void)_handleBuyCompletionForOffer:(id)a0 appContext:(id)a1 shouldPlayWhenDone:(BOOL)a2 serverResponse:(id)a3 completionHandler:(id /* block */)a4;
- (void)_handleSubscriptionCompletionForOffer:(id)a0 appContext:(id)a1 shouldInitiateFamilySetup:(BOOL)a2 serverResponse:(id)a3 completionHandler:(id /* block */)a4;
- (void)_notifyDidEndPurchaseType:(long long)a0 transactionOffer:(id)a1 withError:(id)a2;
- (void)_notifyDidStartPurchaseType:(long long)a0 transactionOffer:(id)a1;
- (id)_preflightManagerForTransactionOffer:(id)a0 purchaseType:(long long)a1;
- (void)_recordLog:(id)a0 withBuyParams:(id)a1;
- (void)_showUIConfirmationForSubTransaction:(id)a0 completion:(id /* block */)a1;
- (void)_startTransactionOfOffer:(id)a0 withAppContext:(id)a1 andCompletionHandler:(id /* block */)a2;
- (id)initWithActionRef:(id)a0 contextData:(id)a1 appContext:(id)a2;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
