@class NSString;

@interface AMSDelegateAuthenticateRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *challenge;
@property (copy) NSString *userAgent;

+ (id)preferredUserAgent;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithChallenge:(id)a0;
- (id)initWithChallenge:(id)a0 userAgent:(id)a1;

@end
