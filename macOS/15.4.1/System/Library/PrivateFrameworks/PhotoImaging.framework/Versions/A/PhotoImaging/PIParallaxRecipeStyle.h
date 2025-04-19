@class NSString, PIParallaxStyleRecipe;

@interface PIParallaxRecipeStyle : PIParallaxStyle {
    NSString *_identifier;
    PIParallaxStyleRecipe *_recipe;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)filter;
- (id)kind;
- (id)parameters;
- (id)recipe;
- (id)clockFont;
- (id)inactiveFilter;
- (id)initWithIdentifier:(id)a0 recipe:(id)a1;
- (id)recipeIdentifier;

@end
