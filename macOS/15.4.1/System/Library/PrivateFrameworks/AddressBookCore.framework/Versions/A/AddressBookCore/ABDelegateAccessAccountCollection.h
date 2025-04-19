@class ABAccount, NSArray, NSString, NSPredicate;
@protocol ABAccountCollection;

@interface ABDelegateAccessAccountCollection : NSObject <ABAccountCollection>

@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) id<ABAccountCollection> accountCollection;
@property (readonly, copy, nonatomic) NSArray *allAccountsImpl;
@property (readonly, copy) NSString *basePath;
@property (readonly) ABAccount *defaultAccount;
@property (readonly, copy) NSArray *allAccounts;
@property (readonly, copy) NSArray *enabledAccounts;
@property (readonly, copy) NSArray *persistentAccounts;
@property (readonly, copy) NSArray *hiddenAccounts;
@property (readonly) BOOL canBeReplacedByCachedAccounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;

- (void).cxx_destruct;
- (void)setTag:(id)a0;
- (id)tag;
- (id)initWithBaseURL:(id)a0;
- (id)accountWithIdentifier:(id)a0;
- (id)initWithPredicate:(id)a0 accountCollection:(id)a1;
- (void)updateAccounts;

@end
