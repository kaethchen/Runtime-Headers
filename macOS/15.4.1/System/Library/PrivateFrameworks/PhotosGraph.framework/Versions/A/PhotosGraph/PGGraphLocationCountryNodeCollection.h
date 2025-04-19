@class PGGraphMomentNodeCollection, PGGraphLanguageNodeCollection, PGGraphAddressNodeCollection;

@interface PGGraphLocationCountryNodeCollection : PGGraphNamedLocationNodeCollection

@property (readonly, nonatomic) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphLanguageNodeCollection *languageNodes;
@property (readonly, nonatomic) unsigned long long numberOfMomentNodes;

+ (Class)nodeClass;

@end
