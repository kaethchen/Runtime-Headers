@class MARelation, NSString, PGGraphPetNodeCollection, MANodeFilter;

@interface PGGraphPetNode : PGGraphOptimizedNode <PGAssetCollectionFeature, PGSocialGroupMember> {
    NSString *_localIdentifier;
    unsigned long long _petSpecies;
    BOOL _isFavorite;
}

@property (class, readonly) MARelation *momentOfPet;
@property (class, readonly, nonatomic) MANodeFilter *filterNameNotEmpty;

@property (readonly, nonatomic) PGGraphPetNodeCollection *collection;
@property (readonly, nonatomic) unsigned long long petSpecies;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) BOOL isFavorite;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long numberOfMomentNodes;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *contactIdentifier;

+ (id)filter;
+ (short)detectionTypeFromPetSpecies:(unsigned long long)a0;
+ (id)ownerOfPet;
+ (id)stringFromPetSpecies:(unsigned long long)a0;

- (void).cxx_destruct;
- (unsigned short)domain;
- (id)label;
- (long long)memberType;
- (BOOL)hasProperties:(id)a0;
- (void)conformsToSocialGroupMemberProtocol;
- (void)enumerateOwnerNodesUsingBlock:(id /* block */)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)initWithLocalIdentifier:(id)a0 petSpecies:(unsigned long long)a1 name:(id)a2 isFavorite:(BOOL)a3;
- (id)ownerNodes;
- (id)propertyDictionary;
- (id)stringDescription;

@end
