@class KHProjectLayout, UXView, KHLayout, KHLayoutView, KHFrameView, NSString, NSPopover;
@protocol KHLayoutViewDelegate;

@interface KHUXPrintsCollectionViewCell : UXCollectionViewCell <NSAccessibilityGroup> {
    id _observer;
    UXView *_selectionBorderView;
    NSPopover *_optionsPopover;
}

@property (readonly, nonatomic) KHProjectLayout *projectLayout;
@property (readonly, nonatomic) KHLayoutView *layoutView;
@property (readonly, nonatomic) KHFrameView *frameView;
@property (readonly, nonatomic) UXView *stackLineOne;
@property (readonly, nonatomic) UXView *stackLineTwo;
@property (readonly, nonatomic) UXView *selectionBorderView;
@property (nonatomic) BOOL clipsToBounds;
@property (retain, nonatomic) NSPopover *optionsPopover;
@property (retain, nonatomic) KHLayout *layoutObject;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (weak, nonatomic) id<KHLayoutViewDelegate> layoutViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityPerformShowMenu;
- (id)accessibilityRoleDescription;
- (id)accessibilityTitle;
- (id)accessibilityValueDescription;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilitySelected;
- (BOOL)isOpaque;
- (void)mouseDown:(id)a0;
- (void)setAccessibilitySelected:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (void)willMoveToWindow:(id)a0;
- (void)backfillIfNecessaryInOperationQueue:(id)a0;
- (void)hideFrameOptions;
- (void)printsProjectLayoutAttributesChanged;
- (void)showFrameOptions;

@end
