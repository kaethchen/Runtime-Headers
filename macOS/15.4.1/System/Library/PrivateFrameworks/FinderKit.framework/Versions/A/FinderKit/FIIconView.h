@class FI_IconView, NSString, NSImage, NSColor;

@interface FIIconView : NSView {
    FI_IconView *_iconView;
}

@property (getter=isTitleEnabled) BOOL titleEnabled;
@property long long style;
@property struct CGSize { double x0; double x1; } iconImageSize;
@property (copy, nonatomic) NSImage *iconImage;
@property (copy) NSString *titleStr;
@property double titleFontSize;
@property (copy) NSColor *titleFontColor;
@property (getter=isTitleOnBottom) BOOL titleOnBottom;
@property (copy) NSString *subtitleStr;
@property (copy) NSColor *subtitleFontColor;
@property (getter=isSubtitleEnabled) BOOL subtitleEnabled;
@property unsigned long long gridSpacing;
@property (getter=isSelected) BOOL selected;
@property (getter=isDropTarget) BOOL dropTarget;
@property BOOL useActiveAppearance;

+ (struct CGSize { double x0; double x1; })idealSizeForTitleFontSize:(double)a0 iconImageSize:(struct CGSize { double x0; double x1; })a1 gridSpacing:(unsigned long long)a2 isTitleOnBottom:(BOOL)a3 isSubtitleEnabled:(BOOL)a4;
+ (struct CGSize { double x0; double x1; })idealSizeForTitleFontSize:(double)a0 iconImageSize:(struct CGSize { double x0; double x1; })a1 gridSpacing:(unsigned long long)a2 isTitleOnBottom:(BOOL)a3 isTitleEnabled:(BOOL)a4 isSubtitleEnabled:(BOOL)a5;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (BOOL)wantsUpdateLayer;
- (void)aboutToTearDown;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (void)initCommon;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })iconFrame;
- (id)dragFlockingImageComponents;
- (id)hitTestInIcon:(struct CGPoint { double x0; double x1; })a0;
- (id)hitTestInIconOrText:(struct CGPoint { double x0; double x1; })a0;
- (id)hitTestInText:(struct CGPoint { double x0; double x1; })a0;

@end
