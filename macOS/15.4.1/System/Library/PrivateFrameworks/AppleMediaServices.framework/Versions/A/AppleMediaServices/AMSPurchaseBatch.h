@class AMSMutableLazyPromise, NSMutableDictionary, NSLock, NSMutableArray;

@interface AMSPurchaseBatch : NSObject

@property (retain) NSLock *lock;
@property (readonly) NSMutableArray *returnedPurchaseIDs;
@property BOOL isComplete;
@property (readonly) AMSMutableLazyPromise *promise;
@property (readonly) NSMutableArray *purchases;
@property (readonly) NSMutableDictionary *purchaseMap;
@property (readonly) NSMutableArray *results;

- (void).cxx_destruct;
- (BOOL)finishPurchase:(id)a0 withError:(id)a1;
- (BOOL)finishPurchase:(id)a0 withResult:(id)a1;
- (id)initWithPurchases:(id)a0 weakPromise:(id)a1;
- (id)nextPurchase;
- (id)purchaseForPurchaseId:(id)a0;

@end
