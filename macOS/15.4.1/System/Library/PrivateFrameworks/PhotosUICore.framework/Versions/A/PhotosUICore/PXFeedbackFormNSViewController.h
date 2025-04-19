@class NSTextField, NSView, NSScrollView, NSString, NSArray, NSMutableDictionary, NSButton, NSTableView;
@protocol PXFeedbackExportLogs;

@interface PXFeedbackFormNSViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource> {
    BOOL _userLikedIt;
    NSArray *_feedbackKeys;
    NSMutableDictionary *_feedbackValues;
    unsigned long long _feedbackCollectionType;
}

@property (retain, nonatomic) NSView *headerBox;
@property (retain, nonatomic) NSTextField *titleTextField;
@property (retain, nonatomic) NSButton *likeButton;
@property (retain, nonatomic) NSButton *dislikeButton;
@property (retain, nonatomic) NSButton *exportButton;
@property (retain, nonatomic) NSButton *initialCancelButton;
@property (retain, nonatomic) NSView *formBox;
@property (retain, nonatomic) NSTextField *formTitleTextField;
@property (retain, nonatomic) NSScrollView *formScrollView;
@property (retain, nonatomic) NSView *formPlaceholderView;
@property (retain, nonatomic) NSTableView *formTableView;
@property (retain, nonatomic) NSButton *cancelButton;
@property (retain, nonatomic) NSButton *sendButton;
@property (weak, nonatomic) id<PXFeedbackExportLogs> exportLogsDelegate;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancelOperation:(id)a0;
- (void)loadView;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)_createFormTableView;
- (void)_displayExportResult:(id)a0 error:(id)a1;
- (void)_refreshFeedbackKeys:(BOOL)a0;
- (void)_revealFeedbackChoices:(BOOL)a0;
- (void)_runExportFromDelegate;
- (void)a_cancelButtonPressed:(id)a0;
- (void)a_checkboxPressed:(id)a0;
- (void)a_exportButtonPressed:(id)a0;
- (void)a_noButtonPressed:(id)a0;
- (void)a_sendButtonPressed:(id)a0;
- (void)a_yesButtonPressed:(id)a0;
- (id)initWithCollectionType:(unsigned long long)a0;

@end
