@class MARelation, NSArray, NSSet, PGGraphSocialGroupNodeCollection, NSString, NSNumber;

@interface PGGraphSocialGroupNode : PGGraphOptimizedNode <PGAssetCollectionFeature> {
    NSString *_persistedUUID;
    NSNumber *_uuid;
}

@property (class, readonly) NSArray *importanceSortDescriptors;
@property (class, readonly) MARelation *memberOfSocialGroup;

@property (readonly) long long socialGroupID;
@property (readonly) double importance;
@property (readonly) BOOL isUserVerified;
@property (readonly) unsigned long long numberOfMomentNodes;
@property (readonly) unsigned long long numberOfMemberNodes;
@property (readonly, nonatomic) NSSet *memberNodes;
@property (readonly, nonatomic) NSArray *sortedMemberNodes;
@property (readonly, nonatomic) NSSet *personNodes;
@property (readonly, nonatomic) NSSet *petNodes;
@property (readonly, nonatomic) BOOL isFrequentSocialGroup;
@property (readonly, nonatomic) PGGraphSocialGroupNodeCollection *collection;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;
+ (id)filterWithIsUserVerified:(BOOL)a0;
+ (id)filterWithSocialGroupIdentifier:(long long)a0;
+ (long long)identifierForMemberNodes:(id)a0;
+ (id)memberSortDescriptors;
+ (id)momentOfSocialGroup;

- (void).cxx_destruct;
- (unsigned short)domain;
- (id)UUID;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (void)enumerateMemberNodesUsingBlock:(id /* block */)a0;
- (void)enumerateMemberEdgesAndNodesUsingBlock:(id /* block */)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)initWithSocialGroupIdentifier:(long long)a0 importance:(double)a1;
- (id)initWithSocialGroupIdentifier:(long long)a0 importance:(double)a1 isUserVerified:(BOOL)a2;
- (id)persistedUUID;
- (id)propertyDictionary;
- (unsigned long long)rankInGraph:(id)a0;
- (id)socialGroupNameWithServiceManager:(id)a0;
- (void)updatePropertiesWithPersistedSocialGroup:(id)a0 graph:(id)a1;

@end
