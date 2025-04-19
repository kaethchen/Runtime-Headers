@class CNContactStore, NSSet, NSDictionary, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface EMUserProfileProvider : NSObject <EMUserProfileProvider> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    int _outstandingCacheRefreshes;
}

@property (retain, nonatomic) NSDictionary *cache;
@property (readonly, nonatomic) NSMutableArray *knownToBeMyEmail;
@property (readonly, nonatomic) NSMutableArray *knownToNotBeMyEmail;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) BOOL hasAccountsConfigured;
@property (readonly, copy) NSSet *allEmailAddresses;
@property (readonly, copy) NSSet *accountsEmailAddresses;
@property (readonly, copy) NSSet *contactEmailAddresses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)doesAddressList:(id)a0 containAddressInSet:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)contact;
- (void)_contactsChanged:(id)a0;
- (void)_accountsChanged:(id)a0;
- (BOOL)isMyEmailAddressContainedInAddressList:(id)a0;
- (id)_accountsEmailAddresses;
- (id)_contactEmailAddresses;
- (BOOL)_isMyEmailAddressContainedInAddressStrings:(id)a0;
- (id)contactWithKeysToFetch:(id)a0;
- (BOOL)hasAccountConfigured;
- (void)refreshCachedValues;
- (void)waitForOutstandingCacheRefreshes;

@end
