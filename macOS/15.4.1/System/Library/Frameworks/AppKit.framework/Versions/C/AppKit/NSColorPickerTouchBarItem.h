@class NSView, NSString, NSArray, NSTouchBar, NSTouchBarItemOverlay, NSColor, NSImage, NSColorList;

@interface NSColorPickerTouchBarItem : NSTouchBarItem <NSTouchBarColorPickerViewControllerDelegate, NSTouchBarItemTypePopover, NSGestureRecognizerDelegate> {
    id _overlay;
    NSColor *_color;
    long long _mode;
    NSView *_view;
    NSString *_buttonTitle;
    NSImage *_buttonImage;
    id _autounbinder;
    NSArray *_allowedColorSpaces;
}

@property (readonly) NSTouchBar *popoverTouchBar;
@property (readonly) BOOL supportsPressAndHold;
@property (readonly) BOOL showsCloseButton;
@property (readonly) NSTouchBarItemOverlay *_overlay;
@property (readonly) BOOL isPresented;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property long long mode;
@property BOOL colorListSupportsPressAndHoldVariants;
@property (readonly, copy) NSColor *storedColor;
@property (copy) NSColor *color;
@property BOOL showsAlpha;
@property (copy) NSArray *allowedColorSpaces;
@property (retain) NSColorList *colorList;
@property (copy) NSString *customizationLabel;
@property (weak) id target;
@property SEL action;
@property (getter=isEnabled) BOOL enabled;

+ (BOOL)automaticallyNotifiesObserversOfColor;
+ (id)colorPickerWithIdentifier:(id)a0;
+ (id)colorPickerWithIdentifier:(id)a0 buttonImage:(id)a1;
+ (id)colorPickerWithIdentifier:(id)a0 buttonTitle:(id)a1;
+ (id)keyPathsForValuesAffectingPresented;
+ (id)keyPathsForValuesAffectingStoredColor;
+ (id)strokeColorPickerWithIdentifier:(id)a0;
+ (id)textColorPickerWithIdentifier:(id)a0;

- (oneway void)release;
- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)view;
- (void)setButtonTitle:(id)a0;
- (void)dismissPopover:(id)a0;
- (void)setButtonImage:(id)a0;
- (id)_autounbinder;
- (BOOL)_gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_pickColor:(id)a0;
- (void)_pickPressAndHoldColor:(id)a0;
- (void)_pressAndHoldDidCancelTracking;
- (void)_pressAndHoldDidEndTracking;
- (void)_pressAndHoldWillBeginTracking;
- (void)_showPressHoldPopup:(id)a0;
- (long long)_type;
- (void)_updateButtonImagePosition;
- (id)buttonImage;
- (id)buttonTitle;
- (void)colorPicker:(id)a0 didChangeCurrentModeFrom:(long long)a1 to:(long long)a2;
- (void)colorPickerViewController:(id)a0 didSelectColor:(id)a1;
- (void)colorPickerViewControllerDidCancel:(id)a0;
- (void)colorPickerViewControllerDidEnd:(id)a0;
- (void)colorPickerViewControllerWillBegin:(id)a0;
- (id)initWithIdentifier:(id)a0 buttonTitle:(id)a1 buttonImage:(id)a2;
- (void)showPopover:(id)a0;

@end
