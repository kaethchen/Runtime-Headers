@class NSString, NSAppearance;

@interface _NSAppearanceCustomizationProxy : NSObject <NSAppearanceCustomization>

@property (retain) NSAppearance *appearance;
@property (readonly) NSAppearance *effectiveAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingEffectiveAppearance;

- (void)dealloc;
- (id)initWithAppearance:(id)a0;

@end
