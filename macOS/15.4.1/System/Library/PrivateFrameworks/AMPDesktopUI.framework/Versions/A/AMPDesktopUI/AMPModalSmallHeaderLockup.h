@class NSString, NSTextField;

@interface AMPModalSmallHeaderLockup : AMPBindableView

@property (retain, nonatomic) NSTextField *titleField;
@property (retain, nonatomic) NSTextField *detailTextField;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detailText;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1;
- (void)commonSetup;
- (id)propertyKeysForViewSpy;

@end
