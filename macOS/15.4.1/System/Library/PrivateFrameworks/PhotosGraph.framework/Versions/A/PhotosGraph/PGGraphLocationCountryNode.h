@class NSString, PGGraphLocationCountryNodeCollection, MARelation;

@interface PGGraphLocationCountryNode : PGGraphNamedLocationNode

@property (class, readonly) MARelation *momentInCountry;

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) PGGraphLocationCountryNodeCollection *collection;

+ (id)filter;
+ (id)addressOfCountry;
+ (id)languageOfCountry;

- (id)label;
- (unsigned long long)featureType;
- (Class)collectionClass;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;

@end
