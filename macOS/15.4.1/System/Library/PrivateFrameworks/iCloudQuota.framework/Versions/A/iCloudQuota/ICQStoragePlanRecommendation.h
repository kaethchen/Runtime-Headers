@class ACAccount;

@interface ICQStoragePlanRecommendation : NSObject

@property (retain, nonatomic) ACAccount *account;

+ (id)_requestQueue;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)calculateExtraQuotaNeededToSyncIsAccountFull:(BOOL)a0 completion:(id /* block */)a1;

@end
