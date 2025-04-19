@class NSTextField, NSView, NSArray, NSString, NSStackView, NSPopUpButton, IPPronounValidator, NSButton;

@interface IPCustomPronounSheetController : NSWindowController

@property (weak) NSButton *okButton;
@property (weak) NSStackView *mainStackView;
@property (weak) NSPopUpButton *languageMenuButton;
@property (weak) NSView *languageMenuContainer;
@property (weak) NSView *languageMenuSpacer;
@property (retain, nonatomic) IPPronounValidator *pronounValidator;
@property (retain, nonatomic) NSArray *pronounInfos;
@property (retain, nonatomic) NSTextField *unsupportedLanguageLabel;
@property (retain, nonatomic) NSString *currentLanguage;

+ (id)controller;

- (void).cxx_destruct;
- (void)windowDidLoad;
- (void)doSave:(id)a0;
- (BOOL)autofillEmptyFields;
- (void)doCancel:(id)a0;
- (void)entryFieldTextDidChange;
- (void)initializeEntryFields;
- (void)initializeLanguageMenu;
- (void)initializePronounInfos;
- (void)languageDidChange:(id)a0;
- (id)termOfAddress;
- (void)updateOkButtonLabel;

@end
