@class NSArray;

@interface PKAddHomeKeyPassConfiguration : PKAddSecureElementPassConfiguration

@property (readonly, nonatomic) NSArray *appletTypes;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPaymentCredentialTypes:(id)a0;
- (id)initWithPaymentMethodTypes:(id)a0;

@end
