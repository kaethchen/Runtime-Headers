@class PGGraphLocationNodeCollection, NSString, MARelation;
@protocol PGGraphLocationOrAreaNodeCollection;

@interface PGGraphLocationNode : PGGraphOptimizedNode <PGGraphLocationOrArea, PGGraphLocationNaming, PGGraphLocationCoordinates, PGAssetCollectionFeature>

@property (class, readonly, nonatomic) MARelation *addressOfLocation;
@property (class, readonly, nonatomic) MARelation *childLocationOfLocation;
@property (class, readonly, nonatomic) MARelation *parentLocationOfLocation;

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } centroidCoordinate;
@property (readonly, nonatomic) PGGraphLocationNodeCollection *locationNodeCollection;
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

- (id)init;
- (struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (Class)collectionClass;
- (id)associatedNodesForRemoval;
- (id)keywordDescription;
- (unsigned long long)locationMask;

@end
