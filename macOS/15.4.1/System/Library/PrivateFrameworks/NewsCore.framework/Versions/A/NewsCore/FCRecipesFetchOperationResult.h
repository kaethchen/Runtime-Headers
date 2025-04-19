@class NSArray;

@interface FCRecipesFetchOperationResult : NSObject

@property (copy, nonatomic) NSArray *recipes;
@property (copy, nonatomic) NSArray *recipeLists;

- (void).cxx_destruct;
- (id)initWithRecipes:(id)a0 recipeLists:(id)a1;

@end
