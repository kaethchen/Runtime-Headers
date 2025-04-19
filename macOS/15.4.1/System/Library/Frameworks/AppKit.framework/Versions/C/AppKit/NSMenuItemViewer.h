@class NSView, NSString, NSMenuItem;

@interface NSMenuItemViewer : NSView <NSMenuItemViewProtocol> {
    NSView *_menuItemView;
    struct { unsigned char settingSize : 1; unsigned char drawnFromCarbon : 1; unsigned char installedWidthConstraints : 1; unsigned char suppressingImplCallbacks : 1; unsigned int reserved : 28; } _menuItemViewerFlags;
    void *_hiView;
    struct CGSize { double width; double height; } _minimumViewSize;
    id _rememberedFirstResponder;
}

@property (readonly) NSMenuItem *menuItem;
@property (readonly) struct CGSize { double x0; double x1; } _minimumViewSize;
@property (retain, setter=_setMenuItemView:) NSView *_menuItemView;
@property (readonly, nonatomic) BOOL canBeHighlighted;
@property (readonly, nonatomic) BOOL wantsSelectionMaterial;
@property (nonatomic, setter=setHighlighted:) BOOL isHighlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_classToCheckForRequiresConstraintBasedLayout;
+ (struct __CFString { } *)_getMenuItemViewerHIViewClassRegisteringIfNecessary;

- (void)dealloc;
- (void *)_hiView;
- (void)_clearMenuItem;
- (id)_enclosingMenuItem;
- (BOOL)_isContainedInMenu;
- (void)_menuItemViewFrameChanged:(id)a0;
- (BOOL)_rememberAndResignFirstResponder;
- (BOOL)_restoreOrBecomeFirstResponder;
- (void)_setHIView:(void *)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityParentAttribute;
- (id)accessibilityWindowAttribute;
- (BOOL)clipsToBounds;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forMenuItem:(id)a1;
- (id)opaqueAncestor;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateConstraints;
- (BOOL)wantsDefaultClipping;

@end
