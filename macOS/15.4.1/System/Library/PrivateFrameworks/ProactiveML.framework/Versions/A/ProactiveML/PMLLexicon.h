@class _PASCFBurstTrie;

@interface PMLLexicon : NSObject {
    _PASCFBurstTrie *_lexicon;
}

+ (BOOL)serializeLexiconToFile:(id)a0 tokenToWordIDDict:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (unsigned long long)getTotalEntries;
- (unsigned long long)getWordIDforToken:(id)a0;

@end
