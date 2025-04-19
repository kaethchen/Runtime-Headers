@class NSArray, NSString, NSURL, CNObservable;
@protocol CNAccountDescription;

@interface CNOnDiskAccountCollection : NSObject <CNAccountCollection>

@property (copy) NSArray *allAccounts;
@property (copy) NSURL *baseURL;
@property BOOL includeLocalAccount;
@property (readonly) id<CNAccountDescription> defaultAccount;
@property (readonly, copy) NSArray *enabledAccounts;
@property (readonly, copy) NSArray *persistentEnabledAccounts;
@property (readonly) CNObservable *enabledAccountsObservable;
@property (readonly) CNObservable *enabledPersistentAccountsObservable;
@property (copy) NSString *tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBaseURL:(id)a0;
- (id)accountWithIdentifier:(id)a0;
- (BOOL)_URLIsSourceSpecific:(id)a0;
- (id)_baseURLForSourceSpecificURL:(id)a0;
- (id)_readAccountsAtURL:(id)a0;

@end
