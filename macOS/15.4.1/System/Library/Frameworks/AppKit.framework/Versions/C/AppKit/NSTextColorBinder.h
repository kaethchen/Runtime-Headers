@class NSColor;

@interface NSTextColorBinder : NSBinder {
    NSColor *_originalColor;
    NSColor *_referenceBinderRequestedColor;
    struct __textColorBinderFlags { unsigned char _referenceBinderDidRequestColor : 1; unsigned int _reservedTextColorBinder : 31; } _textColorBinderFlags;
}

+ (id)bindingCategory;
+ (id)_pluginProtocol;
+ (id)bindingsForObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;

- (void)_init;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_clearDependenciesWithAllPeerBinders;
- (void)_connectionWasEstablished;
- (void)_dealloc;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (void)_requestTextColor:(id)a0;
- (id)_setTextColorInObject:(id)a0 mode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a1 compareDirectly:(BOOL)a2 toTextColor:(id)a3;
- (void)_showTextColorImmediatelyInObject:(id)a0 mode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a1;
- (void)_synchronizeWithPeerBindersInArray:(id)a0;
- (id)_textColorWithMode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0;
- (BOOL)isBindingReadOnly:(id)a0;
- (id)textColor;
- (id)textColorAtIndex:(unsigned long long)a0;
- (id)textColorAtIndexPath:(id)a0;
- (id)updateInvalidatedTextColor:(id)a0 forObject:(id)a1;
- (void)updateOutlineColumnDataCell:(id)a0 forDisplayAtIndexPath:(id)a1;
- (void)updateTableColumnDataCell:(id)a0 forDisplayAtIndex:(unsigned long long)a1;
- (Class)valueClassForBinding:(id)a0;

@end
