@class MARelation, NSString, NSArray, PGGraphHolidayNodeCollection;

@interface PGGraphHolidayNode : PGGraphOptimizedNode <PGGraphLocalizable, PGGraphSynonymSupport, PGAssetCollectionFeature>

@property (class, readonly) MARelation *datesOfCelebration;

@property (nonatomic) unsigned char category : 8;
@property (readonly) NSString *name;
@property (readonly, nonatomic) PGGraphHolidayNodeCollection *collection;
@property (readonly) unsigned long long numberOfMomentNodes;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *localizedSynonyms;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;

+ (id)filter;
+ (id)localizedNameForName:(id)a0;
+ (id)holidayNodeFilterWithCategory:(unsigned long long)a0;
+ (id)holidayNodeFilterWithNames:(id)a0;

- (id)propertyForKey:(id)a0;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (id)initWithName:(id)a0 category:(unsigned long long)a1;
- (void)enumerateCelebratingMomentNodesUsingBlock:(id /* block */)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)propertyDictionary;

@end
