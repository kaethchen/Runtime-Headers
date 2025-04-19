@class NSView, NSString, NSViewController;

@interface NSCustomTouchBarItem : NSTouchBarItem {
    NSView *_view;
    NSViewController *_viewController;
    NSString *_customizationLabel;
    double _preferredZOrder;
}

@property (retain) NSView *viewForCustomizationPalette;
@property (retain) NSView *viewForCustomizationPreview;
@property struct CGSize { double x0; double x1; } preferredSizeForCustomizationPalette;
@property long long preferredPopoverTransposerPriority;
@property Class preferredPopoverTransposerClass;
@property (retain) NSView *view;
@property (retain) NSViewController *viewController;
@property (copy) NSString *customizationLabel;

+ (BOOL)automaticallyNotifiesObserversOfView;
+ (BOOL)automaticallyNotifiesObserversOfViewController;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)makeViewForCustomizationPalette;
- (double)preferredZOrder;
- (id)makeViewForCustomizationPreview;
- (void)setPreferredZOrder:(double)a0;

@end
