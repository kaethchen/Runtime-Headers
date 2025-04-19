@class NSTextField, NSString, NSView, NSProgressIndicator, AKPinFieldView, AKNoCodeReceivedController, NSObject, NSLayoutConstraint, NSButton, NSWindow, NSNumber;
@protocol AKSecondFactorCodeEntryDelegate;

@interface AKAppleIDAuthenticationiCloudPrefPaneSecondFactorViewController : NSViewController <AKPinFieldViewDelegate>

@property (retain, nonatomic) AKPinFieldView *pinView;
@property (retain, nonatomic) NSString *code;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) AKNoCodeReceivedController *noCodeRecievedController;
@property (retain, nonatomic) NSObject<AKSecondFactorCodeEntryDelegate> *delegate;
@property (retain, nonatomic) NSView *pinContainerView;
@property (retain, nonatomic) NSTextField *titleLabel;
@property (retain, nonatomic) NSTextField *instructionLabel;
@property (retain, nonatomic) NSTextField *errorLabel;
@property (retain, nonatomic) NSProgressIndicator *progressIndicator;
@property (retain, nonatomic) NSButton *noCodeButton;
@property (retain, nonatomic) NSButton *cancelButton;
@property (retain, nonatomic) NSButton *doneButton;
@property (retain, nonatomic) NSLayoutConstraint *widthOfPinViewConstraint;
@property (copy, nonatomic) id /* block */ noCodeButtonAction;
@property (copy, nonatomic) id /* block */ cancelButtonAction;
@property (copy, nonatomic) id /* block */ doneButtonAction;
@property (weak, nonatomic) NSWindow *hostWindow;
@property (nonatomic) BOOL makeSheetCritical;
@property (readonly, nonatomic) NSNumber *defaultCode;
@property (readonly, nonatomic) NSNumber *enteredPin;
@property (nonatomic, setter=setCodeEditable:) BOOL isCodeEditable;
@property (retain, nonatomic) NSNumber *codeLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)cancelButtonPressed:(id)a0;
- (id)initWithMessage:(id)a0;
- (void)setDefaultCode:(id)a0;
- (void)_codeEntered;
- (void)_hideError;
- (void)_resetPinView;
- (void)doneButtonPressed:(id)a0;
- (void)makePinViewActive;
- (void)noCodeButtonPressed:(id)a0;
- (void)pinFieldViewTextDidChange:(id)a0;
- (void)pinFieldViewTextDidComplete:(id)a0;
- (void)showError:(id)a0;

@end
