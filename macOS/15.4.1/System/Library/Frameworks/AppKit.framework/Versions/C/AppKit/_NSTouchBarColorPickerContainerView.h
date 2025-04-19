@class NSString, NSView, NSTouchBarColorPickerSwitcher;
@protocol NSTouchBarColorPickerView;

@interface _NSTouchBarColorPickerContainerView : NSView <_NSTouchBarItemLayoutWrapper> {
    NSView<NSTouchBarColorPickerView> *_colorPickerView;
    NSTouchBarColorPickerSwitcher *_switcherView;
    NSView *_swatch;
}

@property (readonly) struct CGSize { double x0; double x1; } minSize;
@property (readonly) struct CGSize { double x0; double x1; } maxSize;
@property (readonly) BOOL isSpace;
@property (readonly) struct CGSize { double x0; double x1; } preferredSize;
@property (readonly) struct CGSize { double x0; double x1; } contentClippingSize;
@property (readonly) struct CGSize { double x0; double x1; } compressedMinSize;
@property (readonly) long long priorityIndex;
@property (readonly) unsigned long long itemPosition;
@property (readonly) double preferredZOrder;
@property (readonly) double preferredTrailingPosition;
@property (readonly) BOOL participatesInOverflow;
@property (readonly) BOOL isTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSView<NSTouchBarColorPickerView> *colorPickerView;
@property (retain) NSTouchBarColorPickerSwitcher *switcherView;
@property (retain) NSView *colorSwatch;

+ (BOOL)requiresConstraintBasedLayout;

- (void)dealloc;
- (id)accessibilityChildren;
- (id)declaredLayoutConstraints;
- (BOOL)isAccessibilityElement;

@end
