@class NSButton, NSPopUpButton;

@interface SOVocabularyExportWindowController : NSWindowController {
    NSButton *_saveButton;
    NSButton *_cancelButton;
    NSPopUpButton *_formatPopUpButton;
    NSPopUpButton *_languagePopUpButton;
    id /* block */ _completionHandler;
}

+ (id)defaultController;

- (void)dealloc;
- (void)cancel:(id)a0;
- (void)save:(id)a0;
- (id)exportVocabularyToFilePath:(id)a0 forLocaleIdentifiers:(id)a1 desiredFormat:(id)a2;
- (void)showSheetForWindow:(id)a0 completionHandler:(id /* block */)a1;

@end
