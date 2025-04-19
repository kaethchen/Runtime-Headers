@class ACAccount, NSString, NSArray, ACAccountStore, NSObject, NSHTTPCookieStorage;
@protocol OS_dispatch_queue;

@interface AMSCommerceAccountStore : NSObject

@property long long accountStoreType;
@property (retain) NSString *clientIdentifier;
@property (readonly) NSHTTPCookieStorage *cookieStorage;
@property (retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (retain) ACAccountStore *underlyingAccountStore;
@property (readonly) ACAccount *activeAccount;
@property (readonly) NSArray *accounts;

+ (id)accountStoreWithClientIdentifier:(id)a0 accountStore:(id)a1;

- (void).cxx_destruct;
- (id)_cookies;
- (id)_defaultsDomainKey;
- (id)_defaultsKnownAccountsKey;
- (id)_defaultsPrimaryAccountKey;
- (id)_defaultsStorefrontKeyForDSID:(id)a0;
- (id)initWithClientIdentifier:(id)a0 accountStore:(id)a1;
- (id)storefrontForDSID:(id)a0;

@end
