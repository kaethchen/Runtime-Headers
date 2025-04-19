@class NSString;

@interface UISScenePushPlacementConfiguration : UISScenePlacementConfiguration

@property (readonly, copy, nonatomic) NSString *targetSceneSessionPersistentIdentifier;

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
- (id)initWithTargetSceneSessionPersistentIdentifier:(id)a0;

@end
