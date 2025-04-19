@class NSColor, NSImageView, NSTextField;

@interface CNAutocompleteResultView : NSTableCellView

@property (readonly, nonatomic) NSImageView *image;
@property (readonly, nonatomic) NSColor *originalTextColor;
@property (readonly, nonatomic) NSTextField *label;

+ (id)imageViewWithImage:(id)a0;
+ (id)labelWithColor:(id)a0;

- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)a0;
- (BOOL)hasImageView;
- (id)initWithColor:(id)a0 andImage:(id)a1;
- (id)initWithColor:(id)a0 image:(id)a1 leftMargin:(double)a2 rightMargin:(double)a3;
- (id)initWithColor:(id)a0 leftMargin:(double)a1 rightMargin:(double)a2;
- (void)setupConstraintsWithLeftMargin:(double)a0 rightmargin:(double)a1;
- (void)updateLabelForDisplayOverBackgroundWithStyle:(long long)a0;
- (id)viewsByName;

@end
