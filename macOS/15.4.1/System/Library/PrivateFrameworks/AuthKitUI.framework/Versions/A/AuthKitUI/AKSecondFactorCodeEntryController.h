@class AKPinFieldView, NSObject, NSButton, NSTouchBar, NSProgressIndicator, NSLayoutConstraint, NSString, NSImage, AKTouchBarController, NSImageCell, AKNoCodeReceivedController, NSNumber, NSView, NSTextField;
@protocol AKSecondFactorCodeEntryDelegate;

@interface AKSecondFactorCodeEntryController : NSViewController <NSTouchBarProvider, AKPinFieldViewDelegate>

@property (retain, nonatomic) AKTouchBarController *touchBarController;
@property (retain, nonatomic) AKPinFieldView *pinView;
@property (retain, nonatomic) NSString *code;
@property (retain, nonatomic) NSNumber *pinCodeLength;
@property (retain, nonatomic) AKNoCodeReceivedController *noCodeRecievedController;
@property (readonly, nonatomic) NSView *mainView;
@property (retain, nonatomic) NSObject<AKSecondFactorCodeEntryDelegate> *delegate;
@property (retain, nonatomic) NSView *pinContainerView;
@property (retain, nonatomic) NSTextField *instructionLabel;
@property (retain, nonatomic) NSTextField *errorLabel;
@property (retain, nonatomic) NSImageCell *imageView;
@property (retain, nonatomic) NSProgressIndicator *progressIndicator;
@property (retain, nonatomic) NSButton *noCodeButton;
@property (retain, nonatomic) NSButton *cancelButton;
@property (retain, nonatomic) NSButton *doneButton;
@property (retain, nonatomic) NSLayoutConstraint *widthOfPinViewConstraint;
@property (retain, nonatomic) NSLayoutConstraint *dontShowErrorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *showErrorConstraint;
@property (copy, nonatomic) id /* block */ noCodeButtonAction;
@property (copy, nonatomic) id /* block */ cancelButtonAction;
@property (copy, nonatomic) id /* block */ doneButtonAction;
@property (retain, nonatomic, setter=setDisplayImage:) NSImage *displayImage;
@property (readonly, nonatomic) NSNumber *enteredPin;
@property (nonatomic, setter=setCodeEditable:) BOOL isCodeEditable;
@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setMessage:(id)a0;
- (void)awakeFromNib;
- (void)cancelButtonPressed:(id)a0;
- (void)setCodeLength:(id)a0;
- (void)_codeEntered;
- (void)_hideError;
- (void)_resetPinView;
- (void)doneButtonPressed:(id)a0;
- (void)noCodeButtonPressed:(id)a0;
- (void)pinFieldViewTextDidChange:(id)a0;
- (void)pinFieldViewTextDidComplete:(id)a0;
- (void)setFocusToPinView;
- (void)showError:(id)a0;

@end
