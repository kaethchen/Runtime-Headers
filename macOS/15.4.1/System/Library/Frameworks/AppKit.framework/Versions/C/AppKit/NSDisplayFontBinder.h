@class NSFont;

@interface NSDisplayFontBinder : NSBinder {
    NSFont *_originalFont;
}

+ (id)bindingCategory;
+ (id)_pluginProtocol;
+ (id)bindingsForObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;

- (void)_init;
- (id)_adjustFontOfObject:(id)a0 mode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a1 triggerRedisplay:(BOOL)a2 compareDirectly:(BOOL)a3 toFont:(id)a4;
- (id)_availableBindingsWithFontBindingsFiltered:(id)a0;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_connectionWasEstablished;
- (void)_dealloc;
- (id)_fontFromBindingsWithMode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0 referenceFont:(id)a1 fallbackFont:(id)a2;
- (BOOL)_isAnyFontBindingBoundToController:(id)a0;
- (BOOL)_isBooleanBinding:(id)a0;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (id)_valueForBindingWithResolve:(id)a0 mode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a1;
- (id)availableBindings;
- (BOOL)isBindingReadOnly:(id)a0;
- (id)updateInvalidatedFont:(id)a0 forObject:(id)a1;
- (void)updateOutlineColumnDataCell:(id)a0 forDisplayAtIndexPath:(id)a1;
- (void)updateTableColumnDataCell:(id)a0 forDisplayAtIndex:(unsigned long long)a1;
- (Class)valueClassForBinding:(id)a0;

@end
