@class NSString, NSError;
@protocol FCPaymentTransactionManagerDelegate;

@interface FCMockPaymentTransactionManager : NSObject <FCPaymentTransactionManager>

@property (copy, nonatomic) NSString *productID;
@property (nonatomic) long long transactionState;
@property (copy, nonatomic) NSError *transactionError;
@property (nonatomic) unsigned long long transactionExpectation;
@property (weak, nonatomic) id<FCPaymentTransactionManagerDelegate> delegate;

+ (id)mockPaymentTransactionWithFailForProductID:(id)a0 transactionState:(long long)a1 transactionError:(id)a2;
+ (id)mockPaymentTransactionWithSuccessForProductID:(id)a0;

- (void).cxx_destruct;
- (BOOL)canMakePayments;
- (void)registerOngoingPurchaseTransactionsWithEntry:(id)a0;
- (void)startPurchaseWithTagID:(id)a0 productID:(id)a1 purchaseID:(id)a2 bundleID:(id)a3 appAdamID:(id)a4 storeExternalVersion:(id)a5 price:(id)a6 webAccessOptIn:(BOOL)a7 payment:(id)a8;

@end
