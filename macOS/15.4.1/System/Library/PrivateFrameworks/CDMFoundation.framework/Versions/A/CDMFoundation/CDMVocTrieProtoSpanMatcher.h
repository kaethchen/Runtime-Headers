@class NSString, CDMVocTrie;

@interface CDMVocTrieProtoSpanMatcher : NSObject <CDMProtoSpanMatcher> {
    CDMVocTrie *trie;
    BOOL useNormalizedValues;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getCDMServiceAssetConfig;
+ (id /* block */)spanIdentifierCountComparator;

@end
