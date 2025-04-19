@class NSString, NSArray, _CKPurchaseQueueDelegateWrapper, NSMutableArray;

@interface CKPurchaseQueue : NSObject {
    NSMutableArray *_transactions;
}

@property (retain) _CKPurchaseQueueDelegateWrapper *delegateWrapper;
@property (readonly) NSString *identifier;
@property (readonly) NSArray *transactions;

+ (void)_cancelTransactionWithResumeData:(id)a0;
+ (void)_resumeTransactionWithResumeData:(id)a0 storeResponse:(id)a1;
+ (id)purchaseQueueForIdentifier:(id)a0;

- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)_initWithIdentifier:(id)a0;
- (void)_updateTransactions:(id)a0;
- (id)addPurchase:(id)a0;
- (id)addPurchases:(id)a0;
- (id)addTransactionObserver:(id)a0;
- (void)cancelTransaction:(id)a0;
- (void)cancelTransactionGroup:(id)a0;
- (void)removeTransactionObserver:(id)a0;
- (void)setDialogContext:(id)a0;

@end
