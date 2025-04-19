@class geo_isolater, ACAccountStore, ACAccount;

@interface GEOUserAccountInfo : NSObject {
    geo_isolater *_isolation;
    ACAccountStore *_accountStore;
    BOOL _hasCheckedPrimaryAccount;
    ACAccount *_primaryICloudAccount;
    BOOL _hasCheckedPrimaryAuthKitAccount;
    ACAccount *_primaryAuthKitAccount;
}

+ (id)sharedInstance;
+ (BOOL)hasValidICloudAccountForAddingRatingsAndPhotos;
+ (BOOL)isAccountInfoAvailable;
+ (BOOL)isCurrentICloudAccountChinaBased;
+ (BOOL)isCurrentICloudAccountManaged;
+ (BOOL)isCurrentICloudAccountUnderage;
+ (BOOL)isPaidAccount;
+ (id)primaryICloudAccount;

- (id)init;
- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)a0;
- (id)_primaryICloudAccountIsolated;
- (BOOL)isCurrentICloudAccountChinaBased;
- (BOOL)isCurrentICloudAccountManaged;
- (BOOL)isCurrentICloudAccountUnderage;
- (BOOL)isPrimaryICloudAccountPAID;
- (id)primaryICloudAccount;

@end
