@class NSString, NSTextField;

@interface AMPModalFooterLockup : AMPBindableView

@property (retain, nonatomic) NSTextField *detailTextField;
@property (copy, nonatomic) NSString *detailText;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)commonSetup;
- (id)initWithDetailText:(id)a0;
- (id)propertyKeysForViewSpy;

@end
