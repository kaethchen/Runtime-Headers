@class NSString, NSAppearance, NSObject;
@protocol NSAppearanceCustomization;

@interface NSSystemAppearanceProxy : NSObject <NSAppearanceCustomizationInternal, NSAppearanceCustomization>

@property (class, readonly) NSSystemAppearanceProxy *systemProxy;

@property (readonly) id<NSAppearanceCustomization> _effectiveAppearanceParent;
@property (retain) NSAppearance *appearance;
@property (readonly) NSAppearance *effectiveAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSObject<NSAppearanceCustomization> *menuBarProxy;
@property (retain) NSAppearance *appearance;
@property (readonly) NSAppearance *effectiveAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingEffectiveAppearance;

- (void)dealloc;
- (id)init;
- (void)_controlTintChanged:(id)a0;
- (void)_increaseContrastChanged:(id)a0;
- (id)_kitAppearance;
- (void)_menuBarAppearanceChanged:(id)a0;
- (void)_menuBarAppearanceDidChange;
- (void)_reduceDesktopTintingChanged:(id)a0;
- (void)_systemAppearanceDidChange;

@end
