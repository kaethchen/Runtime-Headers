@class NSArray;

@interface WDProtocolAutomationVirtualAuthenticatorConfiguration : RWIProtocolJSONObject

@property (nonatomic) long long protocol;
@property (nonatomic) long long transport;
@property (nonatomic) BOOL hasResidentKey;
@property (nonatomic) BOOL hasUserVerification;
@property (nonatomic) BOOL isUserConsenting;
@property (nonatomic) BOOL isUserVerified;
@property (copy, nonatomic) NSArray *extensions;
@property (copy, nonatomic) NSArray *uvm;

- (id)initWithPayload:(id)a0;
- (id)initWithProtocol:(long long)a0 transport:(long long)a1;
- (id)initWithProtocolObject:(id)a0;

@end
