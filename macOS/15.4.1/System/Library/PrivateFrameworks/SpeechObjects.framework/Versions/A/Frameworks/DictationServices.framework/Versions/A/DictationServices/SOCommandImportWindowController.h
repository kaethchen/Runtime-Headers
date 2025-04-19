@class NSButton, NSPopUpButton;

@interface SOCommandImportWindowController : NSWindowController {
    NSButton *_saveButton;
    NSButton *_cancelButton;
    NSPopUpButton *_languagePopUpButton;
}

+ (id)defaultController;

- (void)dealloc;
- (void)cancel:(id)a0;
- (void)save:(id)a0;
- (void)showSheetForWindow:(id)a0 completionHandler:(id /* block */)a1;

@end
