@class NSString, PKSecureElementProvisioningState, NSDate;

@interface PKPendingProvisioning : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSDate *createdAt;
@property (nonatomic) BOOL shouldAutoProvision;
@property (nonatomic) unsigned long long provisioningAttemptCounter;
@property (retain, nonatomic) PKSecureElementProvisioningState *provisioningState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)type;
- (id)_init;
- (id)credential;
- (BOOL)representsPass:(id)a0;
- (void)_copyIntoPendingProvision:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 status:(long long)a1;
- (BOOL)representsCredential:(id)a0;
- (void)setCanRetryProvisioning:(BOOL)a0;

@end
