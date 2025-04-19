@interface NSCollectionViewBinder : NSBinder {
    struct { unsigned char _ignoreChanges : 1; unsigned int _reservedTableBinder : 31; } _collectionViewBinderFlags;
}

+ (id)bindingCategory;
+ (id)bindingsForObject:(id)a0;
+ (BOOL)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;

- (void)_init;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_connectionWasBroken;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (void)_updateContent;
- (void)_updateSelectionIndexes:(id)a0;
- (void)collectionView:(id)a0 didChangeToSelectionIndexes:(id)a1;
- (BOOL)isBindingReadOnly:(id)a0;

@end
