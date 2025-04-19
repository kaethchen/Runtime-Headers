@class NSString, WFDialogButton, WFDatePickerConfiguration;

@interface WFInputDateDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) WFDatePickerConfiguration *configuration;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) WFDialogButton *cancelButton;
@property (readonly, copy, nonatomic) WFDialogButton *doneButton;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDatePickerConfiguration:(id)a0 message:(id)a1 attribution:(id)a2 prompt:(id)a3;
- (void)overrideDoneButtonTitle:(id)a0;

@end
