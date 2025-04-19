@class TUCall, RTTUtterance, RTTUIServiceUpdateCell, NSMutableString, NSScrollView, NSButton, NSMutableArray, NSTableView, NSString, AXDispatchTimer, CAShapeLayer, NSTextView, RTTConversation;

@interface RTTUIConversationViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource, RTTUIUtteranceCellDelegate, NSTextViewDelegate, RTTUIServiceCellDelegate> {
    NSTextView *_textView;
    CAShapeLayer *_bubbleLayer;
    RTTUIServiceUpdateCell *_serviceCell;
    id _keyboardEventMonitor;
    NSButton *_gaButton;
    AXDispatchTimer *_voAnnouncementTimer;
    AXDispatchTimer *_realTimeTimeout;
    NSMutableString *_voAnnouncementBuffer;
    NSMutableArray *_serviceUpdates;
}

@property (retain, nonatomic) NSScrollView *scrollView;
@property (retain, nonatomic) NSTableView *tableView;
@property (retain, nonatomic) RTTConversation *conversation;
@property (retain, nonatomic) RTTUtterance *currentUtterance;
@property (retain, nonatomic) TUCall *call;
@property (copy, nonatomic) id /* block */ rttConversationAvailabilityCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerForCall:(id)a0;
+ (BOOL)_validRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)viewControllerForConversation:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (long long)numberOfRowsInTableView:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (double)tableView:(id)a0 sizeToFitWidthOfColumn:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)textDidChange:(id)a0;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (BOOL)_canShowWhileLocked;
- (void)setupTableView;
- (void)callDidConnect:(id)a0;
- (id)cannedResponses;
- (id)addUtterance:(id)a0;
- (id)currentCall;
- (void)_addServiceCellWithUpdate:(id)a0 options:(id)a1;
- (void)updateCallHold:(id)a0;
- (void)_processRealtimeTimeout;
- (void)_removeServiceCellWithUpdate:(id)a0;
- (void)_replaceServiceCellWithOldUpdate:(id)a0 withNewUpdate:(id)a1 options:(id)a2;
- (void)_scrollToIndexPathIfNecessary:(id)a0 animated:(BOOL)a1;
- (id)_updateTableViewUtteranceOldCount:(unsigned long long)a0 newCount:(unsigned long long)a1;
- (void)addServiceCellWithUpdate:(id)a0 options:(id)a1;
- (id)addTranscriptionText:(id)a0 isNew:(BOOL)a1;
- (id)contactDisplayString;
- (BOOL)currentCallIsDowngraded;
- (id)currentContactPath;
- (void)deviceDidReceiveString:(id)a0 forUtterance:(id)a1;
- (void)didBecomeKey:(id)a0;
- (void)gaButtonPressed:(id)a0;
- (id)inputTextView;
- (BOOL)isCurrentCallConnected;
- (BOOL)isCurrentCallOnHold;
- (BOOL)isCurrentCallReceivingOnHold;
- (BOOL)isIncomingScreeningCall;
- (id)lastConversationRowPathForUtterance:(id)a0;
- (void)realtimeTextDidChange;
- (void)removeServiceCellWithUpdate:(id)a0;
- (void)replaceServiceCellWithOldUpdate:(id)a0 withNewUpdate:(id)a1 options:(id)a2;
- (id)serviceUpdateCellAtIndexPath:(id)a0;
- (void)setTextViewUtterance:(id)a0;
- (void)showCallEnded;
- (BOOL)showTextViewForCurrentCall;
- (id)textViewUtterance;
- (void)updateCallDowngradeStatus;
- (void)updateDeviceLockStatus:(BOOL)a0;
- (void)updateGAButton;
- (void)updateInputEnabled;
- (void)updateTableViewSizeAnimated:(BOOL)a0;
- (void)updateUtterance:(id)a0 forIndexPath:(id)a1;
- (void)updateVoiceOverAnnouncement:(id)a0;
- (id)utteranceCellAtIndexPath:(id)a0;
- (void)utteranceCellDidUpdateContent:(id)a0;

@end
