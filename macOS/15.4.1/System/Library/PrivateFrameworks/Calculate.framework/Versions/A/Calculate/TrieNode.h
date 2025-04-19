@class Trie;

@interface TrieNode : NSObject

@property (weak, nonatomic) Trie *trie;
@property (nonatomic) int node;
@property (nonatomic) int offset;

- (id)copy;
- (void).cxx_destruct;

@end
