@class NSString;

@interface AKPrivateEmailContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *proxiedAppID;
@property (copy, nonatomic) NSString *proxiedBundleIdentifier;
@property (copy, nonatomic) NSString *proxiedAppName;
@property (readonly, copy, nonatomic) NSString *upgradeBundleIdentifier;
@property (copy, nonatomic) NSString *clientAppBundleId;
@property (nonatomic) BOOL keyAndBundleIdAreHashed;
@property (readonly, nonatomic) NSString *originType;
@property (readonly, nonatomic) NSString *originIdentifier;
@property (copy, nonatomic) NSString *metadataString;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKey:(id)a0;
- (id)initWithContext:(id)a0 bundleID:(id)a1;
- (id)initWithContext:(id)a0 client:(id)a1;
- (id)initWithKey:(id)a0 altDSID:(id)a1;
- (id)initWithKey:(id)a0 altDSID:(id)a1 clientAppBundleId:(id)a2;
- (id)initWithKey:(id)a0 altDSID:(id)a1 originType:(id)a2 originIdentifier:(id)a3;
- (void)sanitiseInternalState;

@end
