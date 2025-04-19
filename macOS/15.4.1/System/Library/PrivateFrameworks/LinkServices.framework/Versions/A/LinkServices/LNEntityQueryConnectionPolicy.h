@class NSString, LNEffectiveBundleIdentifier;

@interface LNEntityQueryConnectionPolicy : NSObject

@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *processInstanceIdentifier;
@property (readonly, nonatomic) NSString *entityQueryIdentifier;
@property (readonly, nonatomic) NSString *entityQueryMangledTypeName;
@property (readonly, nonatomic) LNEffectiveBundleIdentifier *effectiveBundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)connectionWithError:(id *)a0;
- (id)connectionWithUserIdentity:(id)a0 error:(id *)a1;
- (id)initWithEntityQueryIdentifier:(id)a0 entityQueryMangledTypeName:(id)a1 effectiveBundleIdentifier:(id)a2 appBundleIdentifier:(id)a3 processInstanceIdentifier:(id)a4;

@end
