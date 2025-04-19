@class NSString, SSContactsTokenFieldDelegate;

@interface SSContactsTokenField : NSTokenField

@property (retain) SSContactsTokenFieldDelegate *contactsTokenFieldDelegate;
@property BOOL completionWindowShowing;
@property (readonly) NSString *identifierString;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)dismissCompletionWindow:(id)a0;

@end
