@class MARelation, NSString, PGGraphAreaNodeCollection, MANodeFilter, PGGraphLocationNode;
@protocol PGGraphLocationOrAreaNodeCollection;

@interface PGGraphAreaNode : PGGraphOptimizedNode <PGGraphLocationOrArea, PGGraphLocationNaming, PGGraphLocationCoordinates, PGAssetCollectionFeature>

@property (class, readonly, nonatomic) MANodeFilter *blockedFilter;
@property (class, readonly, nonatomic) MANodeFilter *nonBlockedFilter;
@property (class, readonly, nonatomic) MARelation *addressOfArea;
@property (class, readonly, nonatomic) MARelation *countyOfArea;
@property (class, readonly, nonatomic) MARelation *stateOfArea;
@property (class, readonly, nonatomic) MARelation *countryOfArea;

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } centroidCoordinate;
@property (readonly) NSString *name;
@property (readonly) unsigned char isBlocked : 1;
@property (readonly) double popularityScore;
@property (readonly) PGGraphLocationNode *stateOrBiggerParentLocationNode;
@property (readonly, nonatomic) PGGraphAreaNodeCollection *collection;
@property (readonly) NSString *fullname;
@property (readonly, nonatomic) id<PGGraphLocationOrAreaNodeCollection> locationOrAreaNodeCollection;
@property (readonly, nonatomic) BOOL supportsNameShortening;
@property (readonly, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;

+ (id)filter;
+ (id)filterWithName:(id)a0;
+ (id)filterWithNames:(id)a0;
+ (void)setIsBlocked:(BOOL)a0 onNodeForIdentifier:(unsigned long long)a1 inGraph:(id)a2;
+ (void)setPopularityScore:(double)a0 onNodeForIdentifier:(unsigned long long)a1 inGraph:(id)a2;

- (id)propertyForKey:(id)a0;
- (void).cxx_destruct;
- (unsigned short)domain;
- (struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (BOOL)hasProperties:(id)a0;
- (id)addressNodes;
- (BOOL)diameterIsLargerThanDiameter:(double)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)initWithName:(id)a0 isBlocked:(BOOL)a1 popularityScore:(double)a2;
- (id)propertyDictionary;
- (id)shortenedNameWithLocationHelper:(id)a0;

@end
