@class NSString, SEMSpanMatcher;

@interface CKVocabularySearcher : NSObject {
    NSString *_userId;
    SEMSpanMatcher *_spanMatcher;
}

+ (void)initialize;
+ (id)makeSearcher;
+ (id)makeSearcherForUserId:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_convertMatches:(id)a0;
- (id)_convertResults:(id)a0;
- (id)_convertTypes:(id)a0;
- (id)_queryFromTokenChain:(id)a0;
- (id)_searcher;
- (id)initWithUserId:(id)a0 spanMatcher:(id)a1 prewarm:(BOOL)a2;
- (id)matchSpansOfString:(id)a0;
- (id)matchSpansOfUtterance:(id)a0;
- (id)searchCustomVocabulary:(id)a0 appIds:(id)a1 vocabularyTypes:(id)a2;
- (id)searchCustomVocabularyWithWildcardPatterns:(id)a0 appIds:(id)a1 vocabularyTypes:(id)a2;

@end
