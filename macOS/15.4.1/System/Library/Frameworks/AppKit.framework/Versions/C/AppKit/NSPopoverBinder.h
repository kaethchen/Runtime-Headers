@interface NSPopoverBinder : NSViewStateBinder

+ (id)bindingsForObject:(id)a0;
+ (BOOL)isUsableWithObject:(id)a0;

- (void)_updateObject:(id)a0 observedController:(id)a1 observedKeyPath:(id)a2 context:(void *)a3;
- (void)_updatePopover:(id)a0 withContentWidth:(id)a1 contentHeight:(id)a2;
- (void)_updatePopover:(id)a0 withPositioningRect:(id)a1;
- (BOOL)isBindingReadOnly:(id)a0;
- (BOOL)shouldProcessObservations;
- (Class)valueClassForBinding:(id)a0;

@end
