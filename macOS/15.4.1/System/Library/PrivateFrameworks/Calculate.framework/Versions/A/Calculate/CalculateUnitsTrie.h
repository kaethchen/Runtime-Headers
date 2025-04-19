@class CalculateUnitsTrieNode, NSArray, Trie, NSSet;

@interface CalculateUnitsTrie : NSObject

@property (retain, nonatomic) Trie *trie;
@property (retain, nonatomic) NSArray *locales;
@property (retain, nonatomic) NSSet *conversionVerbs;
@property (readonly, nonatomic) CalculateUnitsTrieNode *root;

- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithLocales:(id)a0;

@end
