@class NSMenuItem, NSMenu, NSImageView, VKCBaseDataDetectorElement, CALayer, NSImage, NSString, NSFont, NSImageSymbolConfiguration, NSVisualEffectView, RVItem, NSArray, NSView, CATextLayer;
@protocol VKCActionInfoButtonDelegate;

@interface VKCActionInfoButton : NSButton <RVPresenterHighlightDelegate>

@property (retain, nonatomic) NSImage *_image;
@property (retain, nonatomic) NSString *_text;
@property (retain, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) CATextLayer *textLayer;
@property (retain, nonatomic) NSImageView *imageView;
@property (retain, nonatomic) NSView *layerContainer;
@property (retain, nonatomic) NSVisualEffectView *visualEffectView;
@property (retain, nonatomic) NSView *selectedBackgroundView;
@property (weak) id _target;
@property SEL _action;
@property (retain, nonatomic) VKCBaseDataDetectorElement *representedElement;
@property (retain, nonatomic) NSArray *allUnfilteredElements;
@property (retain, nonatomic) RVItem *rvItem;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSMenu *customMenu;
@property (retain, nonatomic) NSFont *customFont;
@property (weak, nonatomic) id<VKCActionInfoButtonDelegate> delegate;
@property (retain, nonatomic) NSImageSymbolConfiguration *preferredSymbolConfiguration;
@property (nonatomic) BOOL changesSelectionAsPrimaryAction;
@property (nonatomic) BOOL showsMenuAsPrimaryAction;
@property (nonatomic) unsigned long long quickActionType;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (retain, nonatomic) NSMenuItem *moreMenuItem;
@property (nonatomic) BOOL isMoreButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonWithImage:(id)a0 text:(id)a1;

- (void).cxx_destruct;
- (void)setTarget:(id)a0;
- (void)setAction:(SEL)a0;
- (void)setImage:(id)a0;
- (id)image;
- (void)layout;
- (void)revealContext:(id)a0 drawRectsForItem:(id)a1;
- (id)accessibilityTitle;
- (void)commonInit;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFlipped;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (id)revealContext:(id)a0 rectsForItem:(id)a1;
- (void)tearDown;
- (void)updateLayer;
- (BOOL)wantsLayer;
- (id)menuItemTitleForPresenter:(id)a0 item:(id)a1 documentContext:(id)a2 presentingContext:(id)a3 options:(id)a4;
- (id)viewControllerForPresenter:(id)a0 item:(id)a1 documentContext:(id)a2 presentingContext:(id)a3 options:(id)a4;
- (BOOL)hasAction:(SEL)a0;
- (id)documentContext;
- (void)_vk_performAction;
- (id)initWithImage:(id)a0 text:(id)a1;
- (id)menuForRVItem:(id)a0;
- (id)menuForRVItem:(id)a0 element:(id)a1;
- (void)performDefaultElementAction;
- (id)presentingContextForItem:(id)a0;
- (void)showContextMenuWithEvent:(id)a0;
- (void)showContextMenuWithEvent:(id)a0 element:(id)a1 locationInWindow:(struct CGPoint { double x0; double x1; })a2;
- (void)showContextMenuWithEvent:(id)a0 element:(id)a1 locationInWindow:(struct CGPoint { double x0; double x1; })a2 ddEventType:(long long)a3;
- (void)updateSelectedState;
- (void)vk_addTarget:(id)a0 action:(SEL)a1;

@end
