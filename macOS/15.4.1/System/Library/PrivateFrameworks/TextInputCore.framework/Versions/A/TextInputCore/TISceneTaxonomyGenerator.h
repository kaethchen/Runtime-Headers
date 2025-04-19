@class NSArray, NLTagger, NSSet;

@interface TISceneTaxonomyGenerator : NSObject

@property (retain, nonatomic) NSArray *notSupportingInputModes;
@property (readonly, nonatomic) NLTagger *tagger;
@property (readonly, nonatomic) NSSet *taxonomyIdentifiers;
@property (readonly, nonatomic) NSSet *taxonomyIdentifiersAllowListSynonymExclusions;
@property (readonly, nonatomic) NSSet *phrases;

- (id)init;
- (void).cxx_destruct;
- (id)_generateTokensFromInputString:(id)a0;
- (id)_extractTokensForStickerComputation:(id)a0;
- (id)_generateQueries:(id)a0 tokenize:(BOOL)a1;
- (id)_generateQueryTokens:(id)a0;
- (id)_generateSearchableQueries:(id)a0 disablePhraseListCheck:(BOOL)a1;
- (id)_generateTokens:(id)a0;
- (id)generateSearchableQueriesForText:(id)a0 tokenize:(BOOL)a1 generativeEmojiSearchQueries:(BOOL)a2;

@end
