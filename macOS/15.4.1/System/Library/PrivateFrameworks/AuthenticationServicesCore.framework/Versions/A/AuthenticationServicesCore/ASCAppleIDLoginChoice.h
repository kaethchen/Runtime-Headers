@class NSString, AKAuthorizationLoginChoice;

@interface ASCAppleIDLoginChoice : NSObject <ASCLoginChoiceProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AKAuthorizationLoginChoice *underlyingAppleIDLoginChoice;
@property (readonly, copy, nonatomic) NSString *user;
@property (readonly, nonatomic) unsigned long long loginChoiceKind;
@property (readonly, nonatomic) BOOL isSharedCredential;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUser:(id)a0;
- (id)initWithAppleIDLoginChoice:(id)a0;

@end
