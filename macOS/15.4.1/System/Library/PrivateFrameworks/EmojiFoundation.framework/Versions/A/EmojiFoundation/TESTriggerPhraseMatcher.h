@class NSLocale, TESTriggerPhraseCollection;

@interface TESTriggerPhraseMatcher : NSObject

@property (retain, nonatomic) TESTriggerPhraseCollection *phrases;
@property (readonly, nonatomic) NSLocale *locale;

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (id)createMatchResultForMatchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 sourceString:(id)a1 effectType:(long long)a2;
- (id)matchesForString:(id)a0 searchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
