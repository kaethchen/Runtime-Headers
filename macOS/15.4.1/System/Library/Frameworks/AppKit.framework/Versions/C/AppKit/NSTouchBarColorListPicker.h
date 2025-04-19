@class NSPressGestureRecognizer, NSArray, NSString, NSScrubber, NSColorList, NSTouchBarColorListPickerPressAndHoldPopUp, NSColor;

@interface NSTouchBarColorListPicker : NSControl <NSScrubberDelegate, NSScrubberDataSource, NSTouchBarColorListPickerPressAndHoldPopUpDelegate, NSGestureRecognizerDelegate, NSTouchBarColorPickerView> {
    NSColorList *_colorList;
    NSColor *_preTrackingColor;
    id _autounbinder;
    NSScrubber *_scrubber;
    NSPressGestureRecognizer *_longPressRecognizer;
    NSTouchBarColorListPickerPressAndHoldPopUp *_pressAndHoldPopUp;
    long long _scrubberHighlightCount;
    BOOL _continuous;
}

@property (retain) NSColorList *colorList;
@property BOOL supportsPressAndHoldVariants;
@property (copy) NSArray *allowedColorSpaces;
@property (copy) NSString *selectedColorKey;
@property (copy) NSColor *currentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property BOOL allowsAlpha;
@property (weak) id target;
@property SEL action;

+ (BOOL)accessibilityIsSingleCelled;
+ (BOOL)automaticallyNotifiesObserversOfCurrentColor;
+ (id)keyPathsForValuesAffectingCurrentColor;
+ (id)keyPathsForValuesAffectingSelectedColorKey;
+ (long long)preferredColorSwatchType;
+ (id)thumbnailWithSize:(struct CGSize { double x0; double x1; })a0 inView:(id)a1;

- (oneway void)release;
- (void)dealloc;
- (id)_autounbinder;
- (id)_colorKeyForColorAtIndex:(long long)a0;
- (void)_colorListDidChange:(id)a0;
- (void)_didFinishInteractingWithScrubber:(id)a0 cancelled:(BOOL)a1;
- (unsigned long long)_effectiveColorCount;
- (long long)_effectiveSelectedColorIndex;
- (void)_setCurrentColor:(id)a0 updateScrubber:(BOOL)a1;
- (void)_setCurrentColorWithScrubberIndex:(unsigned long long)a0;
- (void)didBeginInteractingWithScrubber:(id)a0;
- (void)didCancelInteractingWithScrubber:(id)a0;
- (void)didFinishInteractingWithScrubber:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isContinuous;
- (void)longPress:(id)a0;
- (long long)numberOfItemsForScrubber:(id)a0;
- (void)popUp:(id)a0 didHighlightColor:(id)a1 withKey:(id)a2 atIndex:(long long)a3;
- (void)popUpDidDismiss:(id)a0;
- (void)popUpDidEndColorSelection:(id)a0 cancelled:(BOOL)a1;
- (void)scrubber:(id)a0 didHighlightItemAtIndex:(long long)a1;
- (void)scrubber:(id)a0 didSelectItemAtIndex:(long long)a1;
- (id)scrubber:(id)a0 viewForItemAtIndex:(long long)a1;
- (void)setContinuous:(BOOL)a0;

@end
