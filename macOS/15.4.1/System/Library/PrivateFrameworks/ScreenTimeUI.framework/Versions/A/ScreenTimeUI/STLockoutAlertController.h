@class NSArray, STLockoutPolicyController, STPasscodeField, NSStackView;

@interface STLockoutAlertController : NSPopover {
    NSStackView *_stackView;
}

@property (retain, nonatomic) NSArray *actions;
@property (readonly) STLockoutPolicyController *policyController;
@property (nonatomic) long long style;
@property (readonly) STPasscodeField *passcodeField;

- (void).cxx_destruct;
- (void)addAction:(id)a0;
- (void)performClose:(id)a0;
- (id)_newStackView;
- (id)initWithPolicyController:(id)a0 style:(long long)a1;
- (void)_addButtonWithAction:(id)a0;
- (void)_addPinViewWithAction:(id)a0;
- (void)_enteredPasscode:(id)a0;
- (void)dismissControllerAnimated:(BOOL)a0;
- (long long)indexOfPinView;

@end
