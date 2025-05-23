@class PGGraphMomentNodeCollection, NSSet, MARelation, PGGraphNodeCollection, PGGraphMemoryNodeCollection;

@interface PGGraphFeatureNodeCollection : PGGraphNodeCollection

@property (class, readonly) MARelation *momentOfFeature;
@property (class, readonly) MARelation *memoryOfFeature;

@property (readonly, nonatomic) NSSet *featureIdentifiers;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphMemoryNodeCollection *memoryNodes;
@property (readonly, nonatomic) PGGraphNodeCollection *anyFeatureNodes;

+ (id)featureNodeCollectionWithFeatures:(id)a0 inGraph:(id)a1;
+ (id)featureNodeCollectionWithCollection:(id)a0;

- (id)allFeatures;

@end
