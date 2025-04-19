@interface NSViewStateBinder : NSBinder {
    struct __viewStateBinderFlags { unsigned char _ignoreUpdates : 1; unsigned int _reservedViewStateBinder : 31; } _viewStateBinderFlags;
}

+ (id)bindingCategory;
+ (BOOL)isUsableWithObject:(id)a0;

- (void)_init;
- (void)_connectionWasBroken;
- (void)_connectionWasEstablished;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (BOOL)_setValue:(id *)a0 forBinding:(id)a1 errorFallbackMessage:(id)a2;
- (void)_updateObject:(id)a0 observedController:(id)a1 observedKeyPath:(id)a2 context:(void *)a3;

@end
