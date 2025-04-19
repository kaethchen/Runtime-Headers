@class NSString, CKStoreAccount;

@interface CKStoreClient : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *_appName;
@property (readonly, nonatomic) NSString *_appVersion;
@property (readonly, nonatomic) NSString *_preferencesDomain;
@property (readonly, nonatomic) NSString *accountMediaType;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) long long serverType;
@property (readonly, nonatomic) NSString *storefrontIdentifier;
@property (readonly, nonatomic) CKStoreAccount *account;
@property (readonly) NSString *storeURLScheme;
@property (readonly) NSString *storeSecureURLScheme;

+ (id)sharedInstance;
+ (id)_serviceProxy;
+ (id)storeClientForIdentifier:(id)a0;
+ (void)configureClientAsType:(long long)a0;
+ (id)storeFrontID;
+ (void)setStoreFrontID:(id)a0;
+ (void)_configureSharedClientWithIdentifier:(id)a0;
+ (void)_configureSharedClientWithIdentifier:(id)a0 serverType:(long long)a1;
+ (id)_sharedClient;
+ (id)_storeClientForAccountMediaType:(id)a0;
+ (id)_storeClientFromLegacyStoreClient:(id)a0;
+ (BOOL)isAppStoreClient;
+ (BOOL)isBookStoreClient;
+ (id)storeClientForAccount:(id)a0;
+ (id)storeClientForIdentifier:(id)a0 serverType:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_icon;
- (id)initWithAccount:(id)a0;
- (id)initWithClientIdentifier:(id)a0;
- (id)_acAccount;
- (id)_ams_createBagContract;
- (id)_bagDictionary;
- (id)_legacyStoreClient;
- (void)_setStoreFrontIdentifier:(id)a0;
- (id)bagURLForKey:(id)a0 error:(out id *)a1;
- (void)bagURLForKey:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)bagValueForKey:(id)a0 error:(out id *)a1;
- (void)bagValueForKey:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)bagValuesForKeys:(id)a0 error:(id *)a1;
- (void)bagValuesForKeys:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithClientIdentifier:(id)a0 serverType:(long long)a1;
- (id)nonpersonalizedStoreClient;

@end
