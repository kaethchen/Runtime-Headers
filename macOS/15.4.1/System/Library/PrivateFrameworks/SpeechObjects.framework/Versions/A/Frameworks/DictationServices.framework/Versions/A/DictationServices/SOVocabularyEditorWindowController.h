@class NSTextField, NSString, NSMutableDictionary, NSButton;

@interface SOVocabularyEditorWindowController : NSWindowController <NSTextFieldDelegate> {
    NSButton *_saveButton;
    NSButton *_cancelButton;
    NSTextField *_typedTextField;
    id /* block */ _completionHandler;
    NSMutableDictionary *_mutableEntry;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultController;

- (void)dealloc;
- (void)cancel:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void)save:(id)a0;
- (void)_setupAccessibilityIdentifiers;
- (void)showSheetForWindow:(id)a0 entry:(id)a1 completionHandler:(id /* block */)a2;

@end
