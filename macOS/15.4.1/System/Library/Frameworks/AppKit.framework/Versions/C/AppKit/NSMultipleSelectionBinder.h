@interface NSMultipleSelectionBinder : NSSelectionBinder

+ (id)bindingCategory;
+ (id)_pluginProtocol;

- (id)_optionsForBinding:(id)a0 specifyOnlyIfDifferentFromDefault:(BOOL)a1;
- (id)_referenceBinding;
- (id)availableBindings;
- (BOOL)insertsNullPlaceholder;

@end
