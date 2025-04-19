@class NSAppearance;

@interface NSCustomMenuItemView : NSContextMenuItemView {
    NSAppearance *_normalAppearance;
    id _rememberedFirstResponder;
}

@property BOOL isDrawingOnly;
@property BOOL isInitialized;
@property BOOL isBecomingFirstResponder;
@property BOOL isFilterView;

+ (BOOL)clipsToBounds;
+ (id)keyEquivalentStringForItem:(id)a0 withFontPtr:(id *)a1;
+ (id)modifierStringForItem:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)_allowsContextMenus;
- (id)_applicableImage;
- (void)_commonInit;
- (void)_didChangeTitleFrom:(id)a0 to:(id)a1;
- (id)_enclosingMenuItem;
- (BOOL)_isContainedInMenu;
- (BOOL)_rememberAndResignFirstResponder;
- (BOOL)_restoreOrBecomeFirstResponder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_titleFieldFrameRect;
- (void)_updateKeyEquivalentIncludingAppearance:(BOOL)a0;
- (void)_updateStateImage;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSeparatorIfNeeded;
- (void)layoutTitleIfNeeded;
- (id)opaqueAncestor;
- (void)viewDidMoveToWindow;

@end
