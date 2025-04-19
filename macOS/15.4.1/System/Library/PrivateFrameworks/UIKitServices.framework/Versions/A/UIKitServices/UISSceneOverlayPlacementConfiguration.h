@class FBSSceneIdentityToken;

@interface UISSceneOverlayPlacementConfiguration : UISScenePlacementConfiguration

@property (readonly, nonatomic) FBSSceneIdentityToken *targetSceneIdentity;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
+ (unsigned long long)placementType;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithTargetSceneIdentity:(id)a0;

@end
