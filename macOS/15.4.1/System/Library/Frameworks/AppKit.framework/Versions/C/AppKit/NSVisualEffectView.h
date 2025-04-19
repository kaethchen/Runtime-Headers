@class NSString, NSImage, NSDictionary, CALayer;

@interface NSVisualEffectView : NSView {
    CALayer *_materialLayerActive;
    CALayer *_materialLayerInactive;
    long long _material;
    long long _blendingMode;
    long long _state;
    NSImage *_cachedFillMaskImage;
    NSString *_groupName;
    NSDictionary *_coreUIOptions;
    NSDictionary *_coreUIMetadata;
    CALayer *_colorFillLayer;
    NSImage *_maskImage;
    double _materialCornerRadius;
    unsigned char _clear : 1;
    unsigned char _emphasized : 1;
    unsigned char _appearsDarker : 1;
    unsigned char _inheritsBlendGroup : 1;
    unsigned char _hasSetUsesMaterialPreferredAppearance : 1;
    unsigned char _usesMaterialPreferredAppearance : 1;
    unsigned char _forcesArtificialChameleon : 1;
    unsigned int _useContinuousCorners;
}

@property (class, readonly, getter=_isDefenestratorEnabled) BOOL _defenestratorEnabled;
@property (class, readonly) NSString *_behindWindowBackdropGroupName;
@property (class, readonly) double _behindWindowBackdropScale;

@property BOOL appearsDarker;
@property (setter=_setForcesArtificialChameleon:) BOOL _forcesArtificialChameleon;
@property (getter=_isClear, setter=_setClear:) BOOL _clear;
@property (nonatomic, setter=_setUsesMaterialPreferredAppearance:) BOOL _usesMaterialPreferredAppearance;
@property (copy, setter=_setGroupName:) NSString *_groupName;
@property (setter=_setMaterialCornerRadius:) double _materialCornerRadius;
@property (setter=_setUseContinuousCorners:) BOOL _useContinuousCorners;
@property long long material;
@property (readonly) long long interiorBackgroundStyle;
@property long long blendingMode;
@property long long state;
@property (retain) NSImage *maskImage;
@property (getter=isEmphasized) BOOL emphasized;

+ (id)_representativeColorForMaterial:(long long)a0 isActive:(BOOL)a1;
+ (void)beginFreezingInWindow:(id)a0;
+ (void)endFreezingInWindow:(id)a0;
+ (id)keyPathsForValuesAffecting_effectiveWithinWindowBackdropGroupName;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_needsDarkening;
- (void)_updateVibrancy;
- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (void)_accessibilityRTChanged:(id)a0;
- (id)_coreUIOptions;
- (id)_currentFillColor;
- (double)_effectiveMaskCornerRadius;
- (id)_effectiveMaskImage;
- (id)_effectiveWithinWindowBackdropGroupName;
- (void)_freeCachedMaskImages;
- (id)_generateMaskImageWithCurrentFillColor;
- (void)_markDirtyIfHasAccelerationChanged;
- (id)_nextResponderForEvent:(id)a0;
- (id)_preferredAppearance;
- (id)_propertyKeysForIntrospector;
- (void)_reactToMaterialChangeDiscardingMaterialLayers:(BOOL)a0 invalidatingPreferredAppearance:(BOOL)a1;
- (void)_reduceDesktopTintingChanged:(id)a0;
- (void)_removeColorFillLayerIfNeeded;
- (void)_removeMaterialLayerIfNeeded;
- (void)_setCornerRadius:(double)a0;
- (BOOL)_shouldUseActiveAppearance;
- (id)_stringValueForIntrospectorPropertyKey:(id)a0;
- (void)_updateColorFillLayer;
- (void)_updateMaterialLayer;
- (void)_updateWithinWindowBackdropLayerGroupName;
- (BOOL)_useAccessibilityColors;
- (BOOL)_wantsArtificialChameleonLayer;
- (void)_windowChangedKeyState;
- (void)_windowFullScreenDidChange;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)emphasized;
- (BOOL)inheritsBlendGroup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setInheritsBlendGroup:(BOOL)a0;
- (void)updateLayer;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;

@end
