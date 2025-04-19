@class PKCurrencyAmount;

@interface PKMockPeerPaymentController : PKPeerPaymentController {
    id _performCompletion;
}

@property (retain, nonatomic) PKCurrencyAmount *mockBalance;
@property (nonatomic) BOOL shouldGenerateMockTransactions;

+ (BOOL)useMock;
+ (void)_adjustBalanceForAmount:(id)a0 subtract:(BOOL)a1 webService:(id)a2;
+ (void)_adjustBalanceForAuthorizedTransferQuote:(id)a0 webService:(id)a1;
+ (void)_insertPeerPaymentTransactionForAuthorizedTransferQuote:(id)a0;
+ (void)_insertPeerPaymentTransactionForAuthorizedTransferQuote:(id)a0 peerPaymentType:(long long)a1 mode:(unsigned long long)a2 counterpartHandle:(id)a3 transactionIdentifier:(id)a4 amount:(id)a5;
+ (id)mockSignature;
+ (void)performNearbyAuthorizedQuote:(id)a0 completion:(id /* block */)a1;
+ (void)processNearbyPeerPaymentTransactionSuccessWithIdentifier:(id)a0 peerPaymentType:(long long)a1 amount:(id)a2 counterpartDisplayName:(id)a3;

- (void).cxx_destruct;
- (void)paymentAuthorizationCoordinator:(id *)a0 didSelectPaymentMethod:(id)a1 handler:(id /* block */)a2;
- (void)_insertPaymentTransactionForSecondaryFundingSourceIfNecessary:(id)a0;
- (id)_quoteItemDictionaryWithType:(unsigned long long)a0 amount:(id)a1 alternateFundingSource:(id)a2 featureDescriptor:(id)a3;
- (void)formalRequestTokenForAmount:(id)a0 source:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)identifyRecipientWithAddress:(id)a0 senderAddress:(id)a1 completion:(id /* block */)a2;
- (id)initWithPeerPaymentWebService:(id)a0;
- (void)paymentAuthorizationCoordinator:(id *)a0 didAuthorizePeerPaymentQuote:(id)a1 handler:(id /* block */)a2;
- (void)performAction:(id)a0 withPaymentIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)quoteWithAmount:(id)a0 source:(unsigned long long)a1 requestToken:(id)a2 alternateFundingSource:(id)a3 preserveCurrentBalance:(unsigned long long)a4 recurringPaymentIdentifier:(id)a5 frequency:(unsigned long long)a6 startDate:(id)a7 threshold:(id)a8 completion:(id /* block */)a9;

@end
