@class TrieNode;

@interface CalculateUnitsTrieNode : NSObject

@property (retain, nonatomic) TrieNode *node;
@property (readonly, nonatomic) BOOL isMatch;
@property (readonly, nonatomic) BOOL containsConversionVerb;
@property (readonly, nonatomic) BOOL containsCurrency;

+ (id)nodeWithTrieNode:(id)a0;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithTrieNode:(id)a0;

@end
