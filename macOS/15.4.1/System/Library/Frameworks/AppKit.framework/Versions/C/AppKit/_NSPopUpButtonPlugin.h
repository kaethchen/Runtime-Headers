@interface _NSPopUpButtonPlugin : _NSSelectionBinderPlugin {
    unsigned long long _dynamicContentPlacementIndex;
    struct __NSKeyValueCodingControllerModeType { long long mode; unsigned long long index; id indexPath; } _modeWhileIgnoringPopUpPopulation;
    id _dynamicallyGeneratedItems;
}

- (void)dealloc;
- (void)_clearUnneccessaryItems:(id)a0;
- (id)_insertPopUpButtonItemInCellOrControl:(id)a0 title:(id)a1 representedObject:(id)a2 menuItemIndex:(long long)a3 index:(long long)a4;
- (BOOL)_shouldCreateSelectionItemInControl:(id)a0;
- (long long)_supposedNumberOfItems;
- (Class)_valueClass:(id)a0;
- (void)actionHasEnded:(id)a0 sender:(id)a1;
- (void)addContentObject:(id)a0 isPlaceholder:(BOOL)a1 insertsNullPlaceholder:(BOOL)a2 value:(id)a3 index:(long long)a4 cellOrControl:(id)a5;
- (unsigned long long)allowedContentBindingMask;
- (unsigned long long)allowedValueBindingMask;
- (BOOL)canIgnorePopulatingObject:(id)a0;
- (BOOL)canMixDynamicAndStaticContent;
- (void)connectionWasEstablished:(id)a0;
- (void)forgetAllDynamicallyGeneratedMenuItems;
- (void)forgetDynamicallyGeneratedMenuItem:(id)a0;
- (id)initWithBinder:(id)a0 object:(id)a1;
- (BOOL)isMemberOfDynamicallyGeneratedMenuItems:(id)a0;
- (id)objectMechanismsRequired;
- (void)recordDynamicallyGeneratedMenuItem:(id)a0;
- (void)removeAllContentObjectsInCellOrControl:(id)a0;
- (BOOL)shouldIgnoreAction:(id)a0;
- (BOOL)shouldRefreshDisplayAfterSelectionMechanismWasDismissed:(id)a0;
- (void)showValue:(id)a0 inObject:(id)a1;
- (id)shownValueInObject:(id)a0;
- (void)storeModeWhenIgnoringObjectPopulation:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0;
- (Class)valueClass:(id)a0 forBinding:(id)a1;

@end
