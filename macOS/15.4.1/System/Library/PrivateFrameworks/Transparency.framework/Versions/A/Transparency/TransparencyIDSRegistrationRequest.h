@class NSDictionary;

@interface TransparencyIDSRegistrationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property double initialTimeout;
@property BOOL dontWaitForKeySigning;
@property (retain) NSDictionary *requests;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSignatureRequests:(id)a0;

@end
