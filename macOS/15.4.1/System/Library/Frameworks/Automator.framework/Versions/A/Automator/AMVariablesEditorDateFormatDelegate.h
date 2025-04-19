@class NSString, AMVariablesEditorView, NSCharacterSet;

@interface AMVariablesEditorDateFormatDelegate : NSObject <NSTokenFieldDelegate>

@property (retain) NSCharacterSet *charactersICU;
@property (retain) NSCharacterSet *charactersToQuote;
@property (retain) AMVariablesEditorView *editorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (id)tokenField:(id)a0 displayStringForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 editingStringForRepresentedObject:(id)a1;
- (BOOL)tokenField:(id)a0 hasMenuForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 menuForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 readFromPasteboard:(id)a1;
- (id)tokenField:(id)a0 representedObjectForEditingString:(id)a1;
- (id)tokenField:(id)a0 shouldAddObjects:(id)a1 atIndex:(unsigned long long)a2;
- (unsigned long long)tokenField:(id)a0 styleForRepresentedObject:(id)a1;
- (BOOL)tokenField:(id)a0 writeRepresentedObjects:(id)a1 toPasteboard:(id)a2;
- (id)displayStringForPattern:(id)a0;
- (id)displayValueForPattern:(id)a0;
- (void)formatDidChange:(id)a0;
- (id)formatsForPattern:(id)a0;
- (id)representedObjectsForPattern:(id)a0;
- (void)setObjectValue:(id)a0 forTokenField:(id)a1;

@end
