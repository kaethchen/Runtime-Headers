@interface NSDictionaryDetailBinder : NSArrayDetailBinder

+ (id)binderClassesSuperseded;
+ (id)bindingsForObject:(id)a0;
+ (BOOL)isUsableWithObject:(id)a0;

- (BOOL)_canGuaranteeOrderOfContentObjects;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (id)_optionsForBinding:(id)a0 specifyOnlyIfDifferentFromDefault:(BOOL)a1;
- (BOOL)_performArrayBinderOperation:(long long)a0 singleObject:(id)a1 multipleObjects:(id)a2 singleIndex:(unsigned long long)a3 multipleIndexes:(id)a4 selectionMode:(int *)a5;
- (id)_referenceBinding;
- (void)_refreshDetailContentInBackground:(BOOL)a0;
- (void)noteContentValueHasChanged;

@end
