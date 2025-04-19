@class _TtC13TranslationUI22LanguagesServiceBridge, NSArray, NSString, NSTableView, NSButton;

@interface LTUITranslationSheetController : NSWindowController <NSTableViewDelegate, NSTableViewDataSource>

@property (weak) NSButton *onlyOnDeviceCheckbox;
@property (weak) NSTableView *translationLanguageListTableView;
@property (copy) id /* block */ completionBlock;
@property (retain, nonatomic) NSArray *installationStatus;
@property (retain, nonatomic) _TtC13TranslationUI22LanguagesServiceBridge *languagesService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)runSheet:(id)a0 forWindow:(id)a1 completionBlock:(id /* block */)a2;
+ (void)runSheet:(id)a0 forWindow:(id)a1 showPrivacySheet:(BOOL)a2 completionBlock:(id /* block */)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancelDownload:(id)a0;
- (void)awakeFromNib;
- (id)initWithWindowNibName:(id)a0 owner:(id)a1;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)sheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)buttonAction:(id)a0;
- (id)createCellView:(id)a0;
- (void)doOkay:(id)a0;
- (void)addDownloadedLocale:(id)a0;
- (void)downloadLocales:(id)a0;
- (void)onlyOnDeviceClicked:(id)a0;
- (void)removeDownloadedLocale:(id)a0;
- (void)removeDownloadedLocaleWithAlert:(id)a0;
- (void)runSheet:(id)a0 forWindow:(id)a1 completionBlock:(id /* block */)a2;
- (void)showTranslatePrivacy:(id)a0;
- (id)translationDefaultsGroup;
- (void)updateCellView:(id)a0 model:(id)a1;

@end
