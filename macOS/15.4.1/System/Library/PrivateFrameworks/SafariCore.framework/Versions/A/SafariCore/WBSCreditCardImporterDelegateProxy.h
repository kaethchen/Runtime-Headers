@protocol WBSCreditCardImporterDelegate;

@interface WBSCreditCardImporterDelegateProxy : NSObject <WBSCreditCardImporterDelegate> {
    id<WBSCreditCardImporterDelegate> _delegate;
}

@property (readonly, nonatomic) unsigned long long numberOfCreditCardsImported;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)finishWithCompletionHandler:(id /* block */)a0;
- (void)importCreditCardDataWithCardNumber:(id)a0 cardName:(id)a1 cardholderName:(id)a2 cardExpirationMonth:(id)a3 cardExpirationYear:(id)a4 lastUsedDate:(id)a5;

@end
