@class NSArray, NSString, NSURL, CNObservable;
@protocol CNAccountDescription;

@interface CNEmptyAccountCollection : NSObject <CNAccountCollection>

@property (copy) NSURL *baseURL;
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

@end
