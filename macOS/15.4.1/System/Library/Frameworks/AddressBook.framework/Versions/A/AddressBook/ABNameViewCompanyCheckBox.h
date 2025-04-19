@protocol ABNameViewCompanyCheckBoxDelegate;

@interface ABNameViewCompanyCheckBox : NSButton

@property (weak, nonatomic) id<ABNameViewCompanyCheckBoxDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)resignFirstResponder;

@end
