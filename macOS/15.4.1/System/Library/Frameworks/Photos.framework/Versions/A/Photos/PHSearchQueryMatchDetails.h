@class _CSEmbedding, NSAttributedString, NSArray;

@interface PHSearchQueryMatchDetails : NSObject

@property (readonly, nonatomic) NSAttributedString *queryText;
@property (readonly, nonatomic) _CSEmbedding *queryEmbedding;
@property (readonly, nonatomic) NSArray *personUUIDS;
@property (readonly, nonatomic) NSArray *sceneIdentifiers;
@property (readonly, nonatomic) NSArray *audioIdentifiers;
@property (readonly, nonatomic) NSArray *humanActionIdentifiers;
@property (readonly, nonatomic) NSArray *ocrAssetUUIDs;
@property (readonly, nonatomic) NSArray *ocrQueryTokens;
@property (readonly, nonatomic) unsigned long long countOfQueryTerms;

- (id)description;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithQueryText:(id)a0 queryEmbedding:(id)a1 personUUIDS:(id)a2 sceneIdentifiers:(id)a3 audioIdentifiers:(id)a4 humanActionIdentifiers:(id)a5 ocrAssetUUIDS:(id)a6;
- (id)redactedJSONDictionary;

@end
