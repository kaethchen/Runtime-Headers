@class NSString, IFColor, IFIconSpecification;

@interface ISiOSAppRecipe : NSObject <ISCompositorRecipe, ISRecipeOptionalMask, ISRecipeOptionalBorder, ISRecipeOptionalTintColor, ISRecipeOptionalAppearance, ISSuppliesIconSpecification, ISRecipeBackground>

@property (nonatomic) BOOL allowDarkAndTintable;
@property (nonatomic) BOOL segment;
@property (nonatomic) BOOL generic;
@property (nonatomic) BOOL templateVariant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property BOOL shouldApplyMask;
@property BOOL shouldDrawBorder;
@property (retain) IFColor *tintColor;
@property long long appearance;
@property (readonly) IFIconSpecification *iconSpecification;
@property unsigned long long background;

- (id)init;
- (void).cxx_destruct;
- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)primaryResourceEffectReturningBackgroundContentOverride:(id *)a0;
- (void)updateRecipeWithImageDescriptor:(id)a0;

@end
