@class NSString, NSArray;

@interface RMStoreDeclarationKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *keyWithoutServerToken;
@property (readonly, copy, nonatomic) NSString *subscriberIdentifier;
@property (readonly, copy, nonatomic) NSString *storeIdentifier;
@property (readonly, copy, nonatomic) NSString *declarationIdentifier;
@property (readonly, copy, nonatomic) NSString *declarationServerToken;
@property (readonly, copy, nonatomic) NSArray *declarationAssets;

+ (id)newDeclarationKey:(id)a0;
+ (id)newDeclarationKeyWithSubscriberIdentifier:(id)a0 reference:(id)a1;
+ (id)newDeclarationKeyWithoutAssets:(id)a0;
+ (BOOL)assetDifferencesOnlyForOldKey:(id)a0 newKey:(id)a1;
+ (id)newDeclarationKeyWithSubscriberIdentifier:(id)a0 store:(id)a1 declaration:(id)a2;
+ (id)newDeclarationKeyWithSubscriberIdentifier:(id)a0 storeIdentifier:(id)a1 declarationIdentifier:(id)a2 declarationServerToken:(id)a3;
+ (id)newDeclarationKeyWithSubscriberIdentifier:(id)a0 storeIdentifier:(id)a1 declarationIdentifier:(id)a2 declarationServerToken:(id)a3 assetKeys:(id)a4;
+ (void)synchronizeOldKeys:(id)a0 newKeys:(id)a1 returningUnchangedKeys:(id *)a2 returningApplyKeys:(id *)a3 returningRemoveKeys:(id *)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_parseDeclarationKey:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDeclarationKey:(id)a0;
- (id)initWithSubscriberIdentifier:(id)a0 store:(id)a1 declaration:(id)a2 assets:(id)a3;
- (id)initWithSubscriberIdentifier:(id)a0 storeIdentifier:(id)a1 declarationIdentifier:(id)a2 declarationServerToken:(id)a3 assetKeys:(id)a4;
- (id)initWithSubscriberIdentifier:(id)a0 storeIdentifier:(id)a1 declarationIdentifier:(id)a2 declarationServerToken:(id)a3 assets:(id)a4;
- (id)keyByReplacingSubscriberIdentifier:(id)a0;

@end
