@class NSArray, NSString, NSMutableArray;

@interface EMIMDFREmojiListMatrixView : NSView <NSAccessibilityGroup>

@property long long categoryIndex;
@property long long characterCount;
@property long long highlightedCharacterIndex;
@property (retain) NSArray *cachedCharacters;
@property BOOL nonPurgeableCache;
@property long long skinToneSelectingCharacterIndex;
@property (retain) NSString *skinToneSelectingCharacter;
@property (retain) NSMutableArray *emojiAccessibilityElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_emojiFontObj;

- (void)dealloc;
- (id)characterAtIndex:(long long)a0;
- (id)accessibilityChildren;
- (id)accessibilityLabel;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refresh;
- (id)_characters;
- (BOOL)_isRecentsCategory;
- (void)_updateCurrentSkinToneSelection:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellFrameForCharacterIndex:(long long)a0;
- (long long)characterIndexAtLocation:(double)a0;
- (void)highlightCharacterAtIndex:(long long)a0;
- (id)initWithCategoryIndex:(long long)a0;
- (id)initWithCharacters:(id)a0;

@end
