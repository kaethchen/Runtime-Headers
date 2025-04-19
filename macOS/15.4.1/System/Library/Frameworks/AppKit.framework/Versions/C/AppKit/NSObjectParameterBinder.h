@class NSString, NSMutableDictionary;

@interface NSObjectParameterBinder : NSBinder {
    struct __objectParameterBinderFlags { unsigned char _needsToRefreshOriginalValues : 1; unsigned int _reservedObjectParameterBinder : 31; } _objectParameterBinderFlags;
    NSString *_bindingValueBeingSet;
    NSMutableDictionary *_originalValues;
}

+ (id)bindingCategory;
+ (id)bindingsForObject:(id)a0;
+ (BOOL)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;

- (void)_init;
- (void)_connectionWasEstablished;
- (void)_dealloc;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (void)_updateObject:(id)a0 observedController:(id)a1 observedKeyPath:(id)a2 context:(void *)a3;
- (id)availableBindings;
- (BOOL)canAddBinding:(id)a0 toController:(id)a1;
- (BOOL)isBindingReadOnly:(id)a0;
- (Class)valueClassForBinding:(id)a0;

@end
