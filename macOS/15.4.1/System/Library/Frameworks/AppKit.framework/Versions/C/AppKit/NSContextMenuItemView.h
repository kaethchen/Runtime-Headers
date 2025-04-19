@class NSImageView, NSTextField, NSString, NSFont;

@interface NSContextMenuItemView : NSMenuItemView {
    NSImageView *_stateImageView;
    NSTextField *_badgeTextField;
    NSTextField *_keyEquivalentTextField;
    NSTextField *_modifierTextField;
    NSFont *_commandKeyFont;
    NSString *_searchQueryCache;
    double _cachedStateOffset;
    BOOL _isInitialized;
}

+ (unsigned char)_imageWidthSharingForItem:(id)a0;
+ (BOOL)_itemHasKE:(id)a0;
+ (id)_spaceStringAndFont:(id *)a0;
+ (id)keyEquivalentStringForItem:(id)a0 withFontPtr:(id *)a1;
+ (struct CGSize { double x0; double x1; })measureCommandKeyModifiersForItem:(id)a0 withFont:(id)a1;
+ (struct CGSize { double x0; double x1; })measureKeyEquivalentForItem:(id)a0 withFont:(id)a1 keStringPointer:(id *)a2;
+ (id)menuItemCommandKeyFont;
+ (id)menuItemFont;
+ (id)menuItemMarkFont;
+ (id)modifierStringForItem:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (id)_applicableStateImage;
- (void)_attributedStringByHighlightingTitleForCachedFilterQuery:(id)a0;
- (void)_commonInit;
- (void)_didChangeBadgeFrom:(id)a0 to:(id)a1;
- (void)_initStandardMenuItem;
- (id)_modifierImageFor:(id)a0;
- (id)_popupMenuImpl;
- (id)_processedAttributedTitle:(id)a0;
- (void)_setExcludesState:(BOOL)a0;
- (struct CGSize { double x0; double x1; })_titleIntrinsicSize;
- (void)_updateKeyEquivalent;
- (void)_updateKeyEquivalentIncludingAppearance:(BOOL)a0;
- (void)_updateStateImage;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)highlightTitleForFilterQuery:(id)a0;
- (id)initWithItem:(id)a0 filterQuery:(id)a1;
- (void)layoutStateImageViewIfNeeded;
- (void)layoutTrailingContents;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })limitedViewFrame;
- (double)maxTitleWidth;
- (struct CGSize { double x0; double x1; })preferredImageSize;
- (double)targetImageViewHeight;
- (void)updateBadgeColor:(id)a0 keyEquivalentColor:(id)a1 highlightingState:(BOOL)a2;
- (void)viewDidMoveToWindow;

@end
