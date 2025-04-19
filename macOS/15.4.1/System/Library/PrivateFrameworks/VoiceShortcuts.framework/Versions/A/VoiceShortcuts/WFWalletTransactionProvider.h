@class NSMutableDictionary, PKPaymentService, NSString, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface WFWalletTransactionProvider : NSObject <PKPaymentServiceDelegate>

@property (retain, nonatomic) PKPaymentService *paymentService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *requests;
@property (retain, nonatomic) NSMutableDictionary *timers;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedProvider;

- (id)init;
- (void).cxx_destruct;
- (void)transactionSourceIdentifier:(id)a0 didReceiveTransaction:(id)a1;
- (void)fetchLocalTransactionWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)observeForUpdatesWithInitialTransactionIfNeeded:(id)a0 transactionIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)queue_endTransactionIfNeeded;
- (void)queue_finishWithPaymentTransaction:(id)a0;
- (void)queue_takeTransactionIfNeeded;
- (BOOL)transactionIsValid:(id)a0;

@end
