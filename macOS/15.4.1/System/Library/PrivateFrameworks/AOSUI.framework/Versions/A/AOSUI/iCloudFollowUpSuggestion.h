@class NSTextField, NSMatrix, NSTouchBar, NSString, iCloudTouchBarController, NSButtonCell, NSWindow, NSButton, NSImageView, NSTableView;

@interface iCloudFollowUpSuggestion : NSObject <NSTouchBarProvider, NSTableViewDataSource, NSTableViewDelegate>

@property (retain) iCloudTouchBarController *touchBarController;
@property (retain) NSWindow *suggestionSheet;
@property (weak) NSTableView *emailAddressTable;
@property (weak) NSButton *continueButton;
@property (weak) NSButton *cancelButton;
@property (weak) NSTextField *titleText;
@property (weak) NSTextField *informativeText;
@property (weak) NSImageView *iconView;
@property (weak) NSMatrix *radioMatrix;
@property (weak) NSButtonCell *firstActionRadioButton;
@property (weak) NSButtonCell *secondActionRadioButton;
@property (weak) NSButtonCell *thirdActionRadionButton;
@property (copy, nonatomic) id /* block */ completionHandler;
@property NSWindow *parentWindow;
@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)cancelButtonPressed:(id)a0;
- (void)dismissiCloudFollowUpSuggestion;
- (void)continueButtonPressed:(id)a0;
- (BOOL)isShowingSheet;
- (void)showiCloudFollowUpSuggestion:(id)a0 usingWindow:(id)a1 completionHandler:(id /* block */)a2;

@end
