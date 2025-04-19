@class NSArray, NSString, NSTouchBarColorPickerSlider, NSColor;

@interface NSTouchBarColorPickerSliders : NSControl <NSTouchBarColorPickerSliderMinimizationDelegate, NSTouchBarColorPickerView> {
    NSArray *_componentSliders;
    NSTouchBarColorPickerSlider *_alphaSlider;
    NSArray *_allowedColorSpaces;
    id _autounbinder;
}

@property unsigned long long _unminimizedComponents;
@property (copy) NSArray *allowedColorSpaces;
@property (readonly, copy) NSColor *colorSpaceColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSColor *currentColor;
@property BOOL allowsAlpha;
@property (weak) id target;
@property SEL action;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)artworkProviderKeyForComponent:(long long)a0;
+ (id)_fallbackColorSpaceWithAllowedColorSpaces:(id)a0;
+ (id)accessibilityIdentifierForComponent:(long long)a0;
+ (BOOL)accessibilityIsSingleCelled;
+ (unsigned long long)colorComponentsMask:(unsigned long long)a0 byAddingComponent:(long long)a1;
+ (unsigned long long)colorComponentsMask:(unsigned long long)a0 byRemovingComponent:(long long)a1;
+ (id)colorSpaceNormalizedColor:(id)a0 withinAllowedColorSpaces:(id)a1;
+ (id)colorValueKeyForComponent:(long long)a0;
+ (id)defaultColorSpace;
+ (void)enumerateColorComponentsInMask:(unsigned long long)a0 enumerator:(id /* block */)a1;
+ (id)keyPathsForValuesAffectingColorSpaceColor;
+ (id)keyPathsForValuesInvalidatingConstraints;
+ (long long)numberOfColorComponents;
+ (void)orderedColorComponentsEnumerator:(id /* block */)a0;
+ (long long)preferredColorSwatchType;
+ (BOOL)requiresConstraintBasedLayout;
+ (id)thumbnailWithSize:(struct CGSize { double x0; double x1; })a0 inView:(id)a1;

- (oneway void)release;
- (void)dealloc;
- (id)_autounbinder;
- (long long)_componentForSlider:(id)a0;
- (void)_selectComponentValueFrom:(id)a0;
- (void)_sliderDidEndTracking;
- (void)_sliderWillBeginTracking;
- (void)colorPickerSliderCompletedInteraction:(id)a0;
- (BOOL)colorPickerSliderWantsToBeUnminimized:(id)a0 completionHandler:(id /* block */)a1;
- (id)colorWithValue:(double)a0 forComponent:(long long)a1 baseColor:(id)a2;
- (id)declaredLayoutConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (id)sliderForComponent:(long long)a0;

@end
