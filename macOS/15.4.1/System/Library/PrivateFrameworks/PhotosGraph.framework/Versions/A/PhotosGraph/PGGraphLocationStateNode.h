@class PGGraphLocationStateNodeCollection;

@interface PGGraphLocationStateNode : PGGraphNamedLocationNode

@property (readonly, nonatomic) PGGraphLocationStateNodeCollection *collection;

+ (id)filter;
+ (id)addressOfState;
+ (id)countryOfState;
+ (id)momentOfState;

- (id)label;
- (unsigned long long)featureType;
- (Class)collectionClass;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;

@end
