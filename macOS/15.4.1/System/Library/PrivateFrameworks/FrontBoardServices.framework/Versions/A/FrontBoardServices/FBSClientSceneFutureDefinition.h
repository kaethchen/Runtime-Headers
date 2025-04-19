@class NSString, FBSSceneSpecification, FBSMutableSceneParameters, FBSSceneIdentity;

@interface FBSClientSceneFutureDefinition : NSObject <FBSSceneCreating>

@property (readonly, nonatomic) FBSSceneIdentity *identity;
@property (readonly, nonatomic) FBSSceneSpecification *specification;
@property (readonly, nonatomic) FBSMutableSceneParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setIdentifier:(id)a0;
- (void)configureParameters:(id /* block */)a0;
- (id)initWithWorkspaceID:(id)a0;
- (void)setSpecification:(id)a0;

@end
