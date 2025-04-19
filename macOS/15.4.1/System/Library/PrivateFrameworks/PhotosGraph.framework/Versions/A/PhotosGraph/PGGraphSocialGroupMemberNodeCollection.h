@class NSString, NSSet, NSArray, PGGraphPetNodeCollection, PGGraphSocialGroupNodeCollection, PGGraphPersonNodeCollection, PGGraphFeatureNodeCollection;

@interface PGGraphSocialGroupMemberNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, nonatomic) NSSet *localIdentifiers;
@property (readonly, nonatomic) NSSet *uuids;
@property (readonly, nonatomic) NSArray *names;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *personNodes;
@property (readonly, nonatomic) PGGraphPetNodeCollection *petNodes;
@property (readonly, nonatomic) PGGraphSocialGroupNodeCollection *socialGroupNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)memberNodesForLocalIdentifier:(id)a0 inGraph:(id)a1;
+ (id)memberNodesForLocalIdentifiers:(id)a0 inGraph:(id)a1;

- (id)memberNodeByLocalIdentifier;
- (id)socialGroupOfMember;

@end
