@interface CPKSuggestedEmojiController : NSObject

+ (id)sharedController;
+ (id)viewForImageGlyph:(id)a0;

- (id)_stickersMatchingStringContext:(id)a0;
- (id)emojisAndStickersForString:(id)a0 leftContext:(id)a1 language:(id)a2;
- (id)suggestedEmojiTokensForLeftContext:(id)a0 rightContext:(id)a1 selectedString:(id)a2 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 language:(id)a4;
- (id)suggestedEmojiTokensForLeftContext:(id)a0 selectedString:(id)a1 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 language:(id)a3;

@end
