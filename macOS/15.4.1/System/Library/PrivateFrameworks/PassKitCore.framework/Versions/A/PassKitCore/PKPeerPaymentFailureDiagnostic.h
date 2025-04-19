@class NSError, NSString;

@interface PKPeerPaymentFailureDiagnostic : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long flowType;
@property (nonatomic) long long reasonCode;
@property (nonatomic) unsigned long long role;
@property (retain, nonatomic) NSString *transactionIdentifier;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
