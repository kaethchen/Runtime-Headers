@interface PKTrie : NSObject {
    void /* unknown type, empty encoding */ trie;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasPrefix:(id)a0;
- (BOOL)contains:(id)a0;
- (void)addString:(id)a0;
- (BOOL)containsStringPrefixing:(id)a0;

@end
