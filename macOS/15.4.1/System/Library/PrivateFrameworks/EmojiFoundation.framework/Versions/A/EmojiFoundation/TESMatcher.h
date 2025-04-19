@class NSLocale, NSMutableArray, TESTriggerPhraseMatcher;

@interface TESMatcher : NSObject

@property (retain, nonatomic) NSMutableArray *matchers;
@property (retain, nonatomic) TESTriggerPhraseMatcher *phraseMatcher;
@property (readonly, nonatomic) NSLocale *locale;

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (void)_loadPatternMatchers;
- (void)asynchronouslyEnumerateTextEffectCandidatesInString:(id)a0 searchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (void)enumerateTextEffectCandidatesInString:(id)a0 searchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;

@end
