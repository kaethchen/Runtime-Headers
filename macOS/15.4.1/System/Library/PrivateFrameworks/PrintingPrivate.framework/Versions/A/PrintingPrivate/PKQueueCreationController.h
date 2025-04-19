@class NSTextField, NSString, NSView, NSProgressIndicator, NSArray, PKPrinter, NSButton, PMXPCSupport;
@protocol PKQueueCreationDelegate;

@interface PKQueueCreationController : NSWindowController <PMXPCSupportDelegate>

@property (weak) NSView *progressView;
@property (weak) NSButton *cancelButton;
@property (weak) NSTextField *progressTextField;
@property (weak) NSProgressIndicator *progressIndicator;
@property (retain) PKPrinter *pkPrinter;
@property (retain) NSString *queueID;
@property (retain) id<PKQueueCreationDelegate> delegate;
@property BOOL isCancelled;
@property (retain) NSArray *topLevelNibObjects;
@property (retain) PMXPCSupport *xpc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel:(id)a0;
- (void)awakeFromNib;
- (id)buildAnalyticsDict;
- (void)cancelErrorAlert:(id)a0;
- (void)handleEventForCommand:(int)a0 status:(int)a1 event:(id)a2;
- (void)handleQueueCreationError:(id)a0;
- (id)initWithPrinter:(id)a0 delegate:(id)a1;
- (void)notifyQueueCompleted:(id)a0;
- (void)presentErrorWithMessageText:(id)a0 informativeTextWithFormat:(id)a1;
- (void)startQueueCreation;
- (void)switchPanelTo:(id)a0;

@end
