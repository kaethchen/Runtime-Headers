@class NSTextField, NSButton, NSObject, NSProgressIndicator, RPPINEntryView, RPPairingUIController;
@protocol OS_dispatch_source;

@interface RPPairingViewController : NSViewController {
    NSTextField *_messageTextField;
    RPPINEntryView *_pinEntryView;
    NSTextField *_pinLabel1;
    NSTextField *_pinLabel2;
    NSTextField *_pinLabel3;
    NSTextField *_pinLabel4;
    NSTextField *_pinLabel5;
    NSTextField *_pinLabel6;
    NSProgressIndicator *_progressView;
    NSTextField *_progressTextField;
    NSButton *_cancelButton;
    NSButton *_okButton;
    NSObject<OS_dispatch_source> *_promptTimer;
    unsigned long long _retryDeadlineTicks;
    BOOL _retryPending;
    NSObject<OS_dispatch_source> *_retryTimer;
    BOOL _tryingPIN;
}

@property (retain, nonatomic) RPPairingUIController *mainController;
@property (nonatomic) BOOL prompted;

- (void).cxx_destruct;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)handleCancelButton:(id)a0;
- (void)handleOKButton:(id)a0;
- (void)_handlePINEntered:(id)a0;
- (void)_retryTimer;
- (void)pairingError:(id)a0;
- (void)promptWithFlags:(unsigned int)a0 throttleSeconds:(int)a1;

@end
