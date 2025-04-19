@class NSTextField, NSString, SiriUIVoicePreviewManager, SiriUIVoicePickerTableView, NSButton, AFVoiceInfo;

@interface SiriUIVoiceSelectionAlert : NSWindowController <SiriUIVoicePickerTableViewDelegate>

@property (weak) SiriUIVoicePickerTableView *voicePicker;
@property (weak) NSTextField *alertTitle;
@property (weak) NSButton *doneButton;
@property (weak) NSButton *cancelButton;
@property (weak) NSButton *chooseForMeButton;
@property (retain) NSString *languageCode;
@property BOOL allowRandomSelection;
@property (retain) SiriUIVoicePreviewManager *previewManager;
@property (readonly, nonatomic) AFVoiceInfo *selectedVoice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)logVoicePreviewAnalytics:(id)a0;

- (void).cxx_destruct;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)windowDidLoad;
- (void)cancelClicked:(id)a0;
- (void)doneClicked:(id)a0;
- (void)chooseForMeClicked:(id)a0;
- (id)initWithLanguage:(id)a0 allowRandomSelection:(BOOL)a1;
- (void)runModalWithCompletionHandler:(id /* block */)a0;
- (void)siriUIBeginModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)voiceSelectionChanged:(id)a0;

@end
