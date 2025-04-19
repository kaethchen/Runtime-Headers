@class NSArray, NSString, NSPredicate, NSURL, CNObservable;
@protocol CNAccountDescription, CNAccountCollection;

@interface CNDelegateAccessAccountCollection : NSObject <CNAccountCollection>

@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) id<CNAccountCollection> accountCollection;
@property (readonly, copy, nonatomic) NSArray *allAccountsImpl;
@property (readonly, copy) NSURL *baseURL;
@property (readonly) id<CNAccountDescription> defaultAccount;
@property (readonly, copy) NSArray *allAccounts;
@property (readonly, copy) NSArray *enabledAccounts;
@property (readonly, copy) NSArray *persistentEnabledAccounts;
@property (readonly) CNObservable *enabledAccountsObservable;
@property (readonly) CNObservable *enabledPersistentAccountsObservable;
@property (readonly) BOOL includeLocalAccount;
@property (copy) NSString *tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBaseURL:(id)a0;
- (id)accountWithIdentifier:(id)a0;
- (id)initWithPredicate:(id)a0 accountCollection:(id)a1;
- (void)updateAccounts;

@end
