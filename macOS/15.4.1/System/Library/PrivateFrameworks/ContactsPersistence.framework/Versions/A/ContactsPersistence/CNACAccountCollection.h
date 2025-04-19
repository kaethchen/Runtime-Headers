@class NSArray, NSString, NSURL, CNPublishingSubject, CNAccountCollectionUpdateWatcher, CNUnfairLock;
@protocol CNAccountDescription;

@interface CNACAccountCollection : NSObject <CNAccountCollection> {
    BOOL _includeLocalAccount;
    CNUnfairLock *_resourceLock;
}

@property (copy) NSArray *accounts;
@property (copy) NSArray *enabledAccounts;
@property (copy) NSArray *enabledPersistentAccounts;
@property (copy) NSURL *baseURL;
@property (retain) CNPublishingSubject *enabledAccountsObservable;
@property (retain) CNPublishingSubject *enabledPersistentAccountsObservable;
@property (retain) CNAccountCollectionUpdateWatcher *updateWatcher;
@property (readonly) id<CNAccountDescription> defaultAccount;
@property (readonly, copy) NSArray *allAccounts;
@property (readonly, copy) NSArray *persistentEnabledAccounts;
@property (readonly) BOOL includeLocalAccount;
@property (copy) NSString *tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBaseURL:(id)a0;
- (id)accountWithIdentifier:(id)a0;
- (void)accountsUpdated:(id)a0;

@end
