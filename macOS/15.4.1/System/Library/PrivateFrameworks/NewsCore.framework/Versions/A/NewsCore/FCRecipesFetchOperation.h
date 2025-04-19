@class FCTagController, NSArray, FCCachePolicy, FCAccessChecker;
@protocol FCNewsAppConfigurationManager, FCContentContext;

@interface FCRecipesFetchOperation : FCOperation {
    id<FCContentContext> _context;
    FCAccessChecker *_accessChecker;
    FCTagController *_tagController;
    NSArray *_recipeIDs;
    NSArray *_recipeListIDs;
    id<FCNewsAppConfigurationManager> _appConfigurationManager;
    NSArray *_resultRecipeLists;
    NSArray *_resultRecipes;
}

@property (copy, nonatomic) FCCachePolicy *cachePolicy;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;
@property (copy, nonatomic) id /* block */ interestTokenHandler;

- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (id)_filterInaccessibleRecipes:(id)a0;
- (id)initWithContext:(id)a0 accessChecker:(id)a1 tagController:(id)a2 recipeIDs:(id)a3 recipeListIDs:(id)a4;

@end
