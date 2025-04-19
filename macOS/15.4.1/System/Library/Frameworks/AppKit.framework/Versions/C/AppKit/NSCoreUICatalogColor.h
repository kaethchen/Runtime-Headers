@class CUINamedColor, NSBundle, NSAppearance;

@interface NSCoreUICatalogColor : NSDynamicNamedColor {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedColorLock;
    CUINamedColor *_cachedNamedColor;
    NSAppearance *_cachedAppearance;
    long long _cachedDisplayGamut;
}

@property (retain) NSBundle *bundle;

+ (id)_bundleFromCatalogName:(id)a0;
+ (id)_catalogNameFromBundle:(id)a0;

- (void)dealloc;
- (Class)classForCoder;
- (struct CGColor { } *)CGColor;
- (BOOL)_getSemanticallyEquivalentVisualEffectMaterial:(long long *)a0;
- (double)alphaComponent;
- (id)initWithCatalogName:(id)a0 colorName:(id)a1 bundle:(id)a2;
- (id)resolvedCUINamedColorForAppearance:(id)a0;
- (id)resolvedColor;
- (id)resolvedSystemColorNameForAppearance:(id)a0;

@end
