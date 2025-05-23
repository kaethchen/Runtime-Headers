@class PGGraphLocationCountyNodeCollection;

@interface PGGraphLocationCountyNode : PGGraphNamedLocationNode

@property (readonly, nonatomic) PGGraphLocationCountyNodeCollection *collection;

+ (id)filter;
+ (id)addressOfCounty;
+ (id)momentOfCounty;

- (id)label;
- (Class)collectionClass;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;

@end
