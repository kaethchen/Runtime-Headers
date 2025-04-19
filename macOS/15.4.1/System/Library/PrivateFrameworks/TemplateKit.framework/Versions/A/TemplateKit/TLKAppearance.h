@class NSString, NSColor;

@interface TLKAppearance : NSObject

@property (readonly) id compositingFilter;
@property (readonly) double accessibilityContrastColorBoost;
@property (readonly) unsigned long long style;
@property (readonly) NSString *name;
@property (readonly) BOOL isDark;
@property (readonly) BOOL isVibrant;
@property (readonly) NSColor *primaryColor;
@property (readonly) NSColor *secondaryColor;
@property (readonly) NSColor *tertiaryColor;
@property (readonly) NSColor *quaternaryColor;
@property (readonly) NSColor *quinaryColor;
@property (readonly) NSColor *primaryButtonColor;
@property (readonly) NSColor *secondaryButtonColor;
@property (readonly) NSColor *tertiaryButtonColor;
@property (readonly) NSColor *quaternaryButtonColor;
@property (readonly) NSColor *backgroundColor;
@property (readonly) NSColor *groupedBackgroundColor;
@property (readonly) NSColor *platterColor;

+ (id)colorWithRed:(unsigned long long)a0 green:(unsigned long long)a1 blue:(unsigned long long)a2;
+ (id)allAppearances;
+ (id)appearanceWithStyle:(unsigned long long)a0;
+ (id)appearanceWithVibrancyEnabled:(BOOL)a0 isDark:(BOOL)a1;
+ (id)bestAppearanceForAppearance:(id)a0;
+ (id)bestAppearanceForSystem;
+ (id)bestAppearanceForView:(id)a0;
+ (void)disableAppearanceOverrideForView:(id)a0;
+ (BOOL)viewHasOverriddenAppearance:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)buttonColorForProminence:(unsigned long long)a0;
- (id)colorForProminence:(unsigned long long)a0;
- (void)disableAppearanceForView:(id)a0;
- (void)enableAppearanceForContainer:(id)a0;
- (void)enableAppearanceForView:(id)a0;
- (void)overrideAppearanceForView:(id)a0;
- (id)primaryColorWithDefaultAlpha:(double)a0;
- (id)textColorForColor:(long long)a0;

@end
