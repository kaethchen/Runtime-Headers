@class LNActionMetadata, NSString, LNEffectiveBundleIdentifier;

@interface LNAppIntentConnectionPolicy : NSObject <NSCopying>

@property (readonly, nonatomic) long long bundleMetadataVersion;
@property (readonly, nonatomic) LNActionMetadata *metadata;
@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *processInstanceIdentifier;
@property (readonly, nonatomic) NSString *appIntentIdentifier;
@property (readonly, nonatomic) NSString *appIntentMangledTypeName;
@property (readonly, nonatomic) LNEffectiveBundleIdentifier *effectiveBundleIdentifier;
@property (readonly, nonatomic) BOOL openAppWhenRun;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)actionWithParameters:(id)a0;
- (id)connectionWithError:(id *)a0;
- (id)connectionWithUserIdentity:(id)a0 error:(id *)a1;
- (id)initWithAppIntentMetadata:(id)a0 effectiveBundleIdentifier:(id)a1 appBundleIdentifier:(id)a2 processInstanceIdentifier:(id)a3;
- (BOOL)reuseConnectionIfPossible;

@end
