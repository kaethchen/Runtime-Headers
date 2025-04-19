@class NSString, NSArray, NSDictionary;

@interface TCTokenDifferenceManager : NSObject

@property (readonly, copy) NSString *input;
@property (readonly, copy) NSString *output;
@property (readonly, copy) NSArray *inputTokens;
@property (readonly, copy) NSArray *outputTokens;
@property (readonly, copy) NSArray *tokenEdits;
@property (readonly, copy) NSArray *tokenDifferences;
@property (readonly, copy) NSDictionary *tokenToTokenIdMap;
@property (readonly, copy) NSDictionary *tokenIdToTokenMap;

- (void).cxx_destruct;
- (id)initWithInput:(id)a0 output:(id)a1;
- (id)_tokensForString:(id)a0 tagger:(id)a1 tokenToTokenIdMap:(id)a2;
- (id)initWithInput:(id)a0 output:(id)a1 tagger:(id)a2;

@end
