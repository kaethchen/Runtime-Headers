@class NSTextField, NSImageView, NSGridView, NSProgressIndicator, NSPopUpButton, NSButton, ClearBrowsingDataController;

@interface ClearBrowsingDataPanelController : NSWindowController {
    long long _scope;
    ClearBrowsingDataController *_clearBrowsingDataController;
    NSTextField *_profileTextField;
    NSPopUpButton *_profilePopUpButton;
}

@property (weak, nonatomic) NSTextField *messageTextField;
@property (weak, nonatomic) NSPopUpButton *timePeriodPopUp;
@property (weak, nonatomic) NSTextField *informativeTextField;
@property (weak, nonatomic) NSTextField *clearTextField;
@property (weak, nonatomic) NSProgressIndicator *progressIndicator;
@property (weak, nonatomic) NSButton *cancelButton;
@property (weak, nonatomic) NSButton *clearHistoryButton;
@property (weak, nonatomic) NSButton *helpButton;
@property (weak, nonatomic) NSImageView *safariAppIcon;
@property (weak, nonatomic) NSGridView *clearingOptionsGridView;

+ (void)runModalPanelWithScope:(long long)a0 fromTrigger:(id)a1;

- (void).cxx_destruct;
- (void)close:(id)a0;
- (void)awakeFromNib;
- (id)windowNibName;
- (id)initWithScope:(long long)a0;
- (void)helpButtonClicked:(id)a0;
- (void)_clearBrowsingDataWithCompletionHandler:(id /* block */)a0;
- (void)_setUpPanel;
- (void)clearBrowsingDataClicked:(id)a0;

@end
