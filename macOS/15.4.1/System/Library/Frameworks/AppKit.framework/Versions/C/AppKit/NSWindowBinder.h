@interface NSWindowBinder : NSViewStateBinder

+ (void)initialize;
+ (void)_applicationWillTerminate:(id)a0;
+ (id)bindingsForObject:(id)a0;
+ (BOOL)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;

- (void)_updateWindow:(id)a0 withWidth:(id)a1 height:(id)a2;
- (void)window:(id)a0 didChangeToVisibleState:(BOOL)a1;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (BOOL)_isBooleanBinding:(id)a0;
- (void)_updateObject:(id)a0 observedController:(id)a1 observedKeyPath:(id)a2 context:(void *)a3;
- (void)_updateWindow:(id)a0 withVisibilityState:(id)a1;
- (BOOL)isBindingReadOnly:(id)a0;
- (BOOL)shouldProcessObservations;
- (Class)valueClassForBinding:(id)a0;
- (void)windowDidResize:(id)a0;

@end
