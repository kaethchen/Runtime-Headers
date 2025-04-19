@interface NSDrawerBinder : NSViewStateBinder {
    struct __drawerBinderFlags { unsigned char _visibleStateHasBeenSet : 1; unsigned char _expectedVisibleState : 1; unsigned int _reservedDrawerBinder : 30; } _drawerBinderFlags;
}

+ (id)bindingsForObject:(id)a0;
+ (BOOL)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;

- (void)_init;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_connectionWasEstablished;
- (BOOL)_isBooleanBinding:(id)a0;
- (void)_updateDrawer:(id)a0 withVisibilityState:(id)a1;
- (void)_updateObject:(id)a0 observedController:(id)a1 observedKeyPath:(id)a2 context:(void *)a3;
- (void)drawer:(id)a0 didChangeToState:(BOOL)a1;
- (BOOL)shouldProcessObservations;
- (Class)valueClassForBinding:(id)a0;

@end
