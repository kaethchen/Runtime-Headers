@class NSString;

@interface FI_TTaggingTokenFieldDelegate : NSObject <NSTokenFieldDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (id)tokenField:(id)a0 completionsForSubstring:(id)a1 indexOfToken:(long long)a2 indexOfSelectedItem:(long long *)a3;
- (id)tokenField:(id)a0 displayStringForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 editingStringForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 representedObjectForEditingString:(id)a1;
- (id)tokenField:(id)a0 setUpTokenAttachmentCell:(id)a1 forRepresentedObject:(id)a2;
- (id)tokenFieldCell:(id)a0 shouldAddObjects:(id)a1 atIndex:(unsigned long long)a2;

@end
