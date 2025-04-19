@class ICQRequestProvider, ACAccount, _ICQAccountManager;

@interface ICQDaemonOfferRequestBuilder : NSObject {
    ACAccount *_account;
    ICQRequestProvider *_requestProvider;
    _ICQAccountManager *_accountManager;
}

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 accountManager:(id)a1;
- (void)addPremiumOffersHeaderIfNeededForRequest:(id)a0;
- (void)renewAuthHeadersForRequest:(id)a0 completion:(id /* block */)a1;
- (id)requestWithQuotaKey:(id)a0 reason:(id)a1 offerStub:(id)a2 notificationID:(id)a3 contextDictionary:(id)a4 mlDaemonExtraFields:(id)a5 sourceIsServerSample:(BOOL)a6;

@end
