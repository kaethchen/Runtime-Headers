@class NSButton, NSPopUpButton;

@interface SOCommandExportWindowController : NSWindowController {
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
- (id)exportCommandEntriesTable:(id)a0 toFilePath:(id)a1;
- (void)showSheetForWindow:(id)a0 completionHandler:(id /* block */)a1;

@end
