@class RMModelDeclarationBase, RMSubscriberStore, NSArray;

@interface RMSubscribedConfigurationReference : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RMModelDeclarationBase *declaration;
@property (readonly, nonatomic) RMSubscriberStore *store;
@property (readonly, nonatomic) NSArray *assets;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToReference:(id)a0;
- (id)assetWithIdentifier:(id)a0;
- (id)_resolveDynamicDeclaration:(id)a0;
- (id)initWithDeclaration:(id)a0 subscriberStore:(id)a1 assets:(id)a2;

@end
