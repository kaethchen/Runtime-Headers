@class PGGraphMomentNodeCollection, PGGraphLocationCountryNodeCollection, PGGraphAddressNodeCollection;

@interface PGGraphLocationStateNodeCollection : PGGraphNamedLocationNodeCollection

@property (readonly, nonatomic) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphLocationCountryNodeCollection *countryNodes;
@property (readonly, nonatomic) unsigned long long numberOfMomentNodes;

+ (Class)nodeClass;

@end
