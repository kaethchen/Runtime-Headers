@class SearchUIImageView;

@interface SearchUIThumbnailViewController : SearchUILeadingViewController

@property (retain, nonatomic) SearchUIImageView *view;

+ (BOOL)rowModelHasSuggestionThumbnail:(id)a0;
+ (void)applyImageConstraintsToImageView:(id)a0 isCompact:(BOOL)a1 preventThumbnailScaling:(BOOL)a2 usesCompactWidth:(BOOL)a3;
+ (id)compactSymbolFont;
+ (long long)compactSymbolScale;
+ (BOOL)supportsRowModel:(id)a0;

- (unsigned long long)type;
- (id)setupView;
- (void)tlk_updateForAppearance:(id)a0;
- (id)imageForRowModel:(id)a0 appearance:(id)a1;
- (void)setUsesCompactWidth:(BOOL)a0;
- (BOOL)shouldVerticallyCenter;
- (void)updateWithRowModel:(id)a0;

@end
