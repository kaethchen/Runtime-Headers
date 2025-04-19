@class NSString, NSMutableDictionary, NSMenu;

@interface NSSearchFieldBinder : NSViewStateBinder <NSMenuDelegate> {
    struct __searchFieldBinderFlags { unsigned char _numberOfPredicateBindings : 7; unsigned char _ignoreUpdates : 1; unsigned char _bindingCountDidChange : 1; unsigned int _reservedSearchFieldBinder : 23; } _searchFieldBinderFlags;
    NSMutableDictionary *_predicateBindingTable;
    NSString *_selectedPredicateBinding;
    NSMenu *_searchMenuTemplate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bindingCategory;
+ (id)_enumeratedPredicateBindings:(unsigned long long)a0;
+ (id)bindingsForObject:(id)a0;
+ (BOOL)isUsableWithObject:(id)a0;

- (void)_init;
- (void)performAction:(id)a0;
- (id)_predicateOptionPairForBinding:(id)a0;
- (void)_removeBinding:(id)a0;
- (void)updateSearchFieldWithPredicate:(id)a0;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (id)_cellForObject;
- (void)_connectionWasBroken;
- (void)_connectionWasEstablished;
- (void)_countBindings;
- (void)_dealloc;
- (id)_optionsForBinding:(id)a0 specifyOnlyIfDifferentFromDefault:(BOOL)a1;
- (void)_setParameter:(id)a0 forOption:(id)a1 withBindingInfo:(id)a2;
- (void)_updateObject:(id)a0 observedController:(id)a1 observedKeyPath:(id)a2 context:(void *)a3;
- (void)addBinding:(id)a0 toController:(id)a1 withKeyPath:(id)a2 valueTransformer:(id)a3 options:(id)a4;
- (id)availableBindings;
- (void)check:(id)a0;
- (void)deactivateMenuItemsInMenu:(id)a0;
- (void)menuNeedsUpdate:(id)a0;
- (void)removeBinding:(id)a0;
- (void)searchFieldCellOrControlDidClearRecents:(id)a0;
- (id)searchMenuTemplate;
- (Class)valueClassForBinding:(id)a0;

@end
