@class ISResourceProvider, ISImageDescriptor;

@interface ISRecipeFactory : NSObject

@property (copy) ISResourceProvider *resourceProvider;
@property (copy) ISImageDescriptor *descriptor;

+ (id)factoryWithDescriptor:(id)a0;
+ (id)factoryWithDescriptor:(id)a0 resourceProvider:(id)a1;

- (void).cxx_destruct;
- (id)_recipe;
- (void)pushDescriptorContentsToRecipe:(id)a0;
- (id)_recipeFromDescriptor;
- (void)enableSegmentationForRecipe:(id)a0;
- (id)genericTaggedRecipe;
- (id)initWithDescriptor:(id)a0 resourceProvider:(id)a1;
- (id)recipe;
- (BOOL)shouldSegment;

@end
