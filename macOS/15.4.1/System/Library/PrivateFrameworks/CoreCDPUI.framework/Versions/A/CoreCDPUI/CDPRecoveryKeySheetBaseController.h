@class NSTextField, NSString, NSView, NSProgressIndicator, NSWindow, CDPRecoveryKeyPrintController, NSImage, CDPRemoteDeviceSecretValidator, NSButton, NSImageView, CDPContext;
@protocol CDPRecoveryKeyValidator;

@interface CDPRecoveryKeySheetBaseController : NSObject

@property (retain) CDPRecoveryKeyPrintController *printController;
@property (retain, nonatomic) NSString *recoveryKey;
@property BOOL isCreation;
@property BOOL isRKForgotten;
@property (retain, nonatomic) NSImage *displayImage;
@property (retain) NSTextField *title;
@property (retain) NSTextField *cdpKey;
@property (retain) NSTextField *cdpKeyEntry;
@property (retain) NSTextField *cdpKeyEntryErrorLabel;
@property (retain) NSButton *continueButton;
@property (retain) NSButton *cancelButton;
@property (retain) NSButton *otherButton;
@property (retain) NSView *containerView;
@property (retain) NSView *cdpRecoveryKeyEntryView;
@property (retain) NSView *cdpRecoveryKeyDisplayView;
@property (retain) NSImageView *cdpRecoveryKeyImageView;
@property (retain) NSProgressIndicator *spinner;
@property (retain) NSTextField *cdpKeyDisplayTitle;
@property (retain) NSTextField *cdpKeyDisplayDescription;
@property (retain) CDPContext *cdpContext;
@property (retain) id<CDPRecoveryKeyValidator> recoveryKeyValidator;
@property (retain) CDPRemoteDeviceSecretValidator *remoteDeviceSecretValidator;
@property (weak) NSWindow *parentWindow;
@property (readonly) long long mode;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancelButtonPressed:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void)disableUserInteractionAndStartSpinner;
- (void)otherButtonPressed:(id)a0;
- (void)showError:(BOOL)a0;
- (id)initWithContext:(id)a0 validator:(id)a1;
- (void)showView:(id)a0;
- (void)continueButtonPressed:(id)a0;
- (void)enableUserInteractionAndStopSpinner;
- (void)handleCompletion:(BOOL)a0 andError:(id)a1;
- (void)handleDontHaveKey:(id)a0;
- (void)handleDontHaveRecoveryKey;
- (void)handleMaxAttemptReached:(id)a0;
- (void)handlePrint:(id)a0;
- (id)initWithContext:(id)a0 deviceSecretvalidator:(id)a1;
- (BOOL)isUsersOnlyDevice;
- (void)processCollectedRecoveryKey:(id)a0 completion:(id /* block */)a1;
- (void)setupDisplayView;
- (void)setupEntryView;

@end
