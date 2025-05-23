@class PPNamedEntity, NSString, MARelation, NSSet, PGGraphBusinessNodeCollection;

@interface PGGraphBusinessNode : PGGraphOptimizedNode <PGGraphPortraitNamedEntity, PGAssetCollectionFeature>

@property (class, readonly, nonatomic) MARelation *categoryOfBusiness;
@property (class, readonly, nonatomic) MARelation *publicEventOfBusiness;
@property (class, readonly, nonatomic) MARelation *momentOfBusiness;

@property (readonly, nonatomic) PPNamedEntity *pg_namedEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long venueCapacity;
@property (readonly, nonatomic) NSSet *businessCategories;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinates;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) NSSet *publicEventNodes;
@property (readonly, nonatomic) PGGraphBusinessNodeCollection *collection;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;
+ (id)filterWithMuid:(unsigned long long)a0;

- (void).cxx_destruct;
- (unsigned short)domain;
- (id)UUID;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)a0;
- (id)associatedNodesForRemoval;
- (void)enumerateBusinessCategoryNodesUsingBlock:(id /* block */)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)initWithMuid:(unsigned long long)a0 name:(id)a1 venueCapacity:(long long)a2 coordinates:(struct CLLocationCoordinate2D { double x0; double x1; })a3 radius:(double)a4;
- (id)keywordDescription;
- (id)propertyDictionary;

@end
