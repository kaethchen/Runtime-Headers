@interface NSSelectionBinder : NSValueBinder {
    long long _contentPlacementTag;
    struct __selectionBinderFlags { unsigned char _insertsNullPlaceholder : 1; unsigned char _contentValuesBindingIsInSync : 1; unsigned char _contentObjectsBindingIsInSync : 1; unsigned char _needsToSetUpObserving : 1; unsigned char _isUpdatingObject : 1; unsigned int _reservedSelectionBinder : 27; } _selectionBinderFlags;
    id _modelObservingTracker;
}

+ (void)initialize;
+ (id)bindingCategory;
+ (id)_pluginProtocol;
+ (id)binderClassesSuperseded;
+ (id)bindingsForObject:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)contentValueKey;
- (void)selectionMechanismWasDismissed:(id)a0;
- (void)_adjustObject:(id)a0 mode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a1 observedController:(id)a2 observedKeyPath:(id)a3 context:(void *)a4 editableState:(BOOL *)a5 adjustState:(BOOL *)a6;
- (BOOL)_analyzeContentBindingInSyncWithBinding:(id)a0;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_connectionWasBroken;
- (void)_connectionWasEstablished;
- (void)_copyDetailsFromBinder:(id)a0;
- (id)_defaultSortDescriptorPrototypeKey;
- (BOOL)_isReferenceBinding:(id)a0;
- (BOOL)_observeKeyPathForBindingInfo:(id)a0 registerOrUnregister:(BOOL)a1;
- (id)_optionsForBinding:(id)a0 specifyOnlyIfDifferentFromDefault:(BOOL)a1;
- (id)_preferredPlaceholderForMarker:(id)a0 onlyIfNotExplicitlySet:(BOOL)a1;
- (id)_referenceBinding;
- (void)_setParameter:(id)a0 forOption:(id)a1 withBindingInfo:(id)a2;
- (void)_updateObservingRegistration:(BOOL)a0;
- (BOOL)_valueClassIsSortableWithBinding:(id)a0;
- (id)_valueForBindingWithoutResolve:(id)a0 mode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a1;
- (id)availableBindings;
- (unsigned long long)contentCountWithEditedMode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0;
- (id)contentObjectKey;
- (id)contentObjectWithEditedMode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0 contentIndex:(unsigned long long)a1;
- (long long)contentPlacementTag;
- (id)contentValueWithEditedMode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0 contentIndex:(unsigned long long)a1;
- (id)contentValueWithEditedMode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0 selectedObject:(id)a1;
- (BOOL)insertsNullPlaceholder;
- (BOOL)isBindingReadOnly:(id)a0;
- (id)preferredPlaceholderForMarker:(id)a0;
- (void)setContentPlacementTag:(long long)a0;
- (void)setInsertsNullPlaceholder:(BOOL)a0;

@end
