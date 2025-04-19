@class NSString, NSLocale;

@interface TESLocaleData : NSObject

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *localeIdentifier;

+ (id)animationNameForTextEffectType:(long long)a0;
+ (long long)textEffectTypeForAnimationName:(id)a0;
+ (id)localeDataWithLocaleIdentifier:(id)a0;
+ (id)localeDataWithLocale:(id)a0;

- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)initWithLocale:(id)a0;
- (void)enumerateTextEffectCandidatesInString:(id)a0 searchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (id)textEffectCandidatesInString:(id)a0 searchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned long long)a2;

@end
