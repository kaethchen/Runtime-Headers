@interface NSEditorBinder : NSBinder {
    struct __editorBinderFlags { unsigned char _conditionallySetsEditable : 1; unsigned char _objectSupportsEditable : 1; unsigned char _explicitlyRequestEditable : 1; unsigned char _explicitEditableState : 1; unsigned char _conditionallySetsEnabled : 1; unsigned char _objectSupportsEnabled : 1; unsigned char _explicitlyRequestEnabled : 1; unsigned char _explicitEnabledState : 1; unsigned char _conditionallySetsHidden : 1; unsigned char _objectSupportsHidden : 1; unsigned char _explicitlyRequestHidden : 1; unsigned char _explicitHiddenState : 1; unsigned int _reservedEditorBinder : 20; } _editorBinderFlags;
    id _editableBinder;
}

+ (id)_pluginProtocol;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_init;
- (void)_adjustStatesOfObject:(id)a0 mode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a1 state:(BOOL)a2 triggerRedisplay:(BOOL)a3;
- (void)_clearDependenciesWithAllPeerBinders;
- (BOOL)_conditionallySetsStates;
- (void)_copyDetailsFromBinder:(id)a0;
- (BOOL)_isExplicitlyNonEditable;
- (BOOL)_isReferenceBinding:(id)a0;
- (void)_noticeEditablePeerBinder:(id)a0;
- (id)_optionsForBinding:(id)a0 specifyOnlyIfDifferentFromDefault:(BOOL)a1;
- (void)_setObject:(id)a0;
- (void)_setParameter:(id)a0 forOption:(id)a1 withBindingInfo:(id)a2;
- (BOOL)conditionallySetsEditable;
- (BOOL)conditionallySetsEnabled;
- (BOOL)conditionallySetsHidden;
- (BOOL)selectionSupportsEnabledState;
- (void)setConditionallySetsEditable:(BOOL)a0;
- (void)setConditionallySetsEnabled:(BOOL)a0;
- (void)setConditionallySetsHidden:(BOOL)a0;
- (BOOL)shouldProcessObservations;

@end
