@class NSMutableArray, NSMutableDictionary;

@interface TIDocumentWordsAligned : NSObject

@property (retain, nonatomic) NSMutableArray *inDocumentWordsStack;
@property (retain, nonatomic) NSMutableDictionary *leftContextToWordMap;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)lastWord;
- (id)_wordsFromContext:(id)a0 shouldDelete:(BOOL)a1;
- (void)addToContextMap:(id)a0;
- (id)deleteWordsUpToContext:(id)a0;
- (void)insertWord:(id)a0 atIndex:(long long)a1;
- (id)matchingLeftContextToWordMapKey:(id)a0;
- (id)preferredLeftContextToWordMapKeyForLeftContext:(id)a0 andMatchingLeftContext:(id)a1;
- (void)pushWordToDocument:(id)a0;
- (void)removeFromContextMap:(id)a0;
- (void)replaceLeftContextToWordMapKey:(id)a0 withNewKey:(id)a1;
- (unsigned long long)wordsCount;
- (id)wordsForContext:(id)a0;
- (id)wordsFromContext:(id)a0;

@end
