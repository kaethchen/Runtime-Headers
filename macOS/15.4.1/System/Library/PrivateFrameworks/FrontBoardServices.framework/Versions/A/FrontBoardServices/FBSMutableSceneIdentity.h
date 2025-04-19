@class NSString;

@interface FBSMutableSceneIdentity : FBSSceneIdentity

@property (copy, nonatomic) NSString *internalWorkspaceIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *workspaceIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIdentifier:(id)a0;
- (void)setInternalWorkspaceIdentifier:(id)a0;
- (void)setWorkspaceIdentifier:(id)a0;

@end
