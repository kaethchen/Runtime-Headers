@interface PTToggleTestRecipe : PTTestRecipe

@property (copy, nonatomic) id /* block */ toggleAction;
@property (readonly, nonatomic, getter=isOn) BOOL on;

+ (id)recipeWithTitle:(id)a0 prepareBlock:(id /* block */)a1 toggleAction:(id /* block */)a2 cleanupBlock:(id /* block */)a3;
+ (id)recipeWithTitle:(id)a0 toggleAction:(id /* block */)a1;

- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_handleEvent:(long long)a0;
- (void)_deactivate;
- (BOOL)_wantsEvent:(long long)a0;

@end
