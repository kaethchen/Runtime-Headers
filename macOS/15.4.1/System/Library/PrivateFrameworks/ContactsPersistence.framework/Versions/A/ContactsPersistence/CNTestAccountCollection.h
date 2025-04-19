@class NSArray, NSString, NSURL, CNPublishingSubject, NSMutableArray;
@protocol CNAccountDescription;

@interface CNTestAccountCollection : NSObject <CNAccountCollection> {
    NSMutableArray *_allAccountsImpl;
}

@property BOOL includeLocalAccount;
@property (readonly, copy) NSURL *baseURL;
@property (readonly) id<CNAccountDescription> defaultAccount;
@property (readonly, copy) NSArray *allAccounts;
@property (readonly, copy) NSArray *enabledAccounts;
@property (readonly, copy) NSArray *persistentEnabledAccounts;
@property (readonly) CNPublishingSubject *enabledAccountsObservable;
@property (readonly) CNPublishingSubject *enabledPersistentAccountsObservable;
@property (copy) NSString *tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBaseURL:(id)a0;
- (id)accountWithIdentifier:(id)a0;
- (void)givenAccount:(id)a0;
- (void)givenAccountWithDescription:(id /* block */)a0;

@end
