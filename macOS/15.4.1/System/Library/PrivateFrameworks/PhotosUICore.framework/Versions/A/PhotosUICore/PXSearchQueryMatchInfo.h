@class NSString, NSSet, NSArray, _CSEmbedding;

@interface PXSearchQueryMatchInfo : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedQueryString;
@property (readonly, copy, nonatomic) NSSet *sceneIdentifiers;
@property (readonly, copy, nonatomic) NSSet *personLocalIdentifiers;
@property (readonly, copy, nonatomic) NSSet *audioIdentifiers;
@property (readonly, copy, nonatomic) NSSet *humanActionIdentifiers;
@property (readonly, copy, nonatomic) NSArray *ocrTexts;
@property (readonly, copy, nonatomic) NSArray *ocrAssetUUIDs;
@property (readonly, nonatomic) _CSEmbedding *queryEmbedding;
@property (readonly, nonatomic) unsigned long long countOfQueryTerms;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocalizedQueryString:(id)a0 matchedSceneIdentifiers:(id)a1 personLocalIdentifiers:(id)a2 audioIdentifiers:(id)a3 humanActionIdentifiers:(id)a4 ocrTexts:(id)a5 ocrAssetUUIDS:(id)a6 queryEmbedding:(id)a7 countOfQueryTerms:(unsigned long long)a8;

@end
