@interface PTDoubleTestRecipe : PTTestRecipe

@property (copy, nonatomic) id /* block */ increaseAction;
@property (copy, nonatomic) id /* block */ decreaseAction;

+ (id)recipeWithTitle:(id)a0 increaseAction:(id /* block */)a1 decreaseAction:(id /* block */)a2;
+ (id)recipeWithTitle:(id)a0 prepareBlock:(id /* block */)a1 increaseAction:(id /* block */)a2 decreaseAction:(id /* block */)a3 cleanupBlock:(id /* block */)a4;

- (void).cxx_destruct;
- (void)invalidate;
- (void)_handleEvent:(long long)a0;
- (BOOL)_wantsEvent:(long long)a0;

@end
