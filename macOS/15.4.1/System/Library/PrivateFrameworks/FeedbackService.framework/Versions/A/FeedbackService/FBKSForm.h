@class NSString, FBKSForm_FrameworkPrivateName;

@interface FBKSForm : NSObject

@property (retain, nonatomic) FBKSForm_FrameworkPrivateName *swiftObject;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) long long authenticationMethod;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)prefill:(id)a0 answer:(id)a1;

@end
