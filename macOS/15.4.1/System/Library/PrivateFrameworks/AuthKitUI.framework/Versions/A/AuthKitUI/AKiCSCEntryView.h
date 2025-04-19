@class NSString, AKPinFieldView, NSTextField;
@protocol AKiCSCEntryViewDelegate;

@interface AKiCSCEntryView : NSView <NSTextFieldDelegate, AKPinFieldViewDelegate>

@property (nonatomic) long long icscType;
@property (retain, nonatomic) NSTextField *passwordField;
@property (retain, nonatomic) AKPinFieldView *pinView;
@property (readonly, nonatomic) NSString *enteredCode;
@property (nonatomic) BOOL isCodeEditable;
@property (nonatomic) id<AKiCSCEntryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)disable;
- (void)enable;
- (void)controlTextDidChange:(id)a0;
- (void)codeWasIncorrect;
- (id)initWithType:(long long)a0 codeLength:(id)a1 placeHolderString:(id)a2;
- (void)pinFieldViewTextDidChange:(id)a0;
- (void)pinFieldViewTextDidComplete:(id)a0;
- (void)returnPressedOnPasswordField:(id)a0;
- (void)setFocusToCodeEntry;
- (void)setUpComplexPasscode:(id)a0;
- (void)setUpNumericPasscode:(id)a0;

@end
