@class CNCache, ACAccountStore;

@interface CNManagedAccountsCache : NSObject

@property (retain, nonatomic) CNCache *accountsCache;
@property (retain, nonatomic) ACAccountStore *accountStore;

+ (id)sharedCache;

- (id)init;
- (void).cxx_destruct;
- (void)clearCache;
- (id)accountForIdentifier:(id)a0;
- (id)accountsForIdentifiers:(id)a0;

@end
