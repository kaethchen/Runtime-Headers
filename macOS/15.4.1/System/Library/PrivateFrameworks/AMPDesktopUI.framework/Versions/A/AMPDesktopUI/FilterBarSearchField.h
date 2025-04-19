@class AMPFilterBarViewController;

@interface FilterBarSearchField : NSSearchField

@property (weak, nonatomic) AMPFilterBarViewController *controller;

- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)textDidEndEditing:(id)a0;

@end
