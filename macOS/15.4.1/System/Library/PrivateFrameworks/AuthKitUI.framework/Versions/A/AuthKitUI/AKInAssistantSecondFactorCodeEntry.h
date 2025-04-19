@class NSTextField, NSString, NSView, NSProgressIndicator, AKPinFieldView, NSObject, NSLayoutConstraint, NSButton, NSNumber;
@protocol AKSecondFactorCodeEntryDelegate;

@interface AKInAssistantSecondFactorCodeEntry : NSViewController <AKPinFieldViewDelegate>

@property (retain, nonatomic) AKPinFieldView *pinView;
@property (retain, nonatomic) NSString *code;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSObject<AKSecondFactorCodeEntryDelegate> *delegate;
@property (copy, nonatomic) id /* block */ pinEnteredBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ noCodeBlock;
@property (retain, nonatomic) NSView *pinContainerView;
@property (retain, nonatomic) NSTextField *instructionLabel;
@property (retain, nonatomic) NSTextField *errorLabel;
@property (retain, nonatomic) NSButton *didntGetCodeButton;
@property (retain, nonatomic) NSProgressIndicator *progressIndicator;
@property (retain, nonatomic) NSLayoutConstraint *widthOfPinViewConstraint;
@property (readonly, nonatomic) NSNumber *enteredPin;
@property (nonatomic, setter=setCodeEditable:) BOOL isCodeEditable;
@property (retain, nonatomic) NSNumber *codeLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)disable;
- (void)awakeFromNib;
- (id)initWithMessage:(id)a0;
- (void)_codeEntered;
- (void)_hideError;
- (void)_resetPinView;
- (void)noCodeButtonPressed:(id)a0;
- (void)pinFieldViewTextDidChange:(id)a0;
- (void)pinFieldViewTextDidComplete:(id)a0;
- (void)setFocusToPinView;
- (void)showError:(id)a0;

@end
