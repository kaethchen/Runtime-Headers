@class PGGraphMomentNodeCollection, PGGraphFeatureNodeCollection, PGGraphPetNodeCollection, NSString, PGGraphPersonNodeCollection, PGGraphSocialGroupMemberNodeCollection;

@interface PGGraphSocialGroupNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphSocialGroupMemberNodeCollection *memberNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *personNodes;
@property (readonly, nonatomic) PGGraphPetNodeCollection *petNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)nodeClass;
+ (id)socialGroupNodeForSocialGroupIdentifier:(long long)a0 inGraph:(id)a1;
+ (id)socialGroupNodesForPersistedUUIDs:(id)a0 inGraph:(id)a1;
+ (id)userVerifiedSocialGroupNodesInGraph:(id)a0;

- (void)enumerateImportancesUsingBlock:(id /* block */)a0;
- (void)enumerateSocialGroupIdentifiersUsingBlock:(id /* block */)a0;

@end
