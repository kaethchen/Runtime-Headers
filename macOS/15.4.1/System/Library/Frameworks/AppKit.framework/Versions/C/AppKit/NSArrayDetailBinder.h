@interface NSArrayDetailBinder : NSObjectDetailBinder {
    struct __arrayDetailBinderFlags { unsigned char _selectsAllWhenSettingContent : 1; unsigned char _usedMultipleSelectionArray : 1; unsigned int _reservedArrayDetailBinder : 30; } _arrayDetailBinderFlags;
}

+ (id)binderClassesSuperseded;
+ (id)bindingsForObject:(id)a0;
+ (BOOL)isUsableWithObject:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_init;
- (BOOL)_canGuaranteeOrderOfContentObjects;
- (void)_copyDetailsFromBinder:(id)a0;
- (BOOL)_handlesSelectAll;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (id)_optionsForBinding:(id)a0 specifyOnlyIfDifferentFromDefault:(BOOL)a1;
- (BOOL)_performArrayBinderOperation:(long long)a0 singleObject:(id)a1 multipleObjects:(id)a2 singleIndex:(unsigned long long)a3 multipleIndexes:(id)a4 selectionMode:(int *)a5;
- (id)_referenceBinding;
- (void)_refreshDetailContentInBackground:(BOOL)a0;
- (void)_selectAllContent:(id)a0 inDetailController:(id)a1;
- (void)_setParameter:(id)a0 forOption:(id)a1 withBindingInfo:(id)a2;
- (BOOL)addObjectToMasterArrayRelationship:(id)a0 selectionMode:(int *)a1;
- (BOOL)addObjectsToMasterArrayRelationship:(id)a0 selectionMode:(int *)a1;
- (id)availableBindings;
- (BOOL)insertObjectIntoMasterArrayRelationship:(id)a0 atIndex:(unsigned long long)a1 selectionMode:(int *)a2;
- (BOOL)insertObjectsIntoMasterArrayRelationship:(id)a0 atIndexes:(id)a1 selectionMode:(int *)a2;
- (BOOL)isBindingReadOnly:(id)a0;
- (void)refreshDetailContent;
- (BOOL)removeObjectFromMasterArrayRelationshipAtIndex:(unsigned long long)a0 selectionMode:(int *)a1;
- (BOOL)removeObjectsFromMasterArrayRelationshipAtIndexes:(id)a0 selectionMode:(int *)a1;
- (BOOL)selectsAllWhenSettingContent;
- (void)setSelectsAllWhenSettingContent:(BOOL)a0;

@end
