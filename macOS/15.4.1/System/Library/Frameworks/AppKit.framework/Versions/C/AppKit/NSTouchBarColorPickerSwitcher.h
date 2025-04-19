@class NSArray, NSView, NSString, NSButton;
@protocol NSTouchBarColorPickerSwitcherDelegate;

@interface NSTouchBarColorPickerSwitcher : NSView <NSTouchBarPressAndHoldTransposerDelegate> {
    NSButton *_popupButton;
    NSView *_popoverContainerView;
    long long _selectedItemIndex;
    NSArray *_items;
}

@property long long selectedItemIndex;
@property (copy) NSArray *items;
@property (weak) id<NSTouchBarColorPickerSwitcherDelegate> delegate;
@property (weak) NSView *container;
@property (readonly) BOOL presentingPopover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_pressAndHold:(id)a0;
- (void)_updatePopupButton;
- (id)accessibilityChildren;
- (id)declaredLayoutConstraints;
- (void)hidePopover:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)selectItem:(id)a0;
- (void)setAccessibilityIdentifier:(id)a0;
- (void)setAccessibilityTitle:(id)a0;
- (void)showPopover:(id)a0;
- (void)transposerDidCancel:(id)a0;
- (void)transposerDidEnd:(id)a0;
- (void)viewWillMoveToSuperview:(id)a0;

@end
