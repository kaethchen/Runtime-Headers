@class NSString, RPCompanionLinkClient;

@interface RPCompanionLinkAssertion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *assertionID;
@property (retain, nonatomic) RPCompanionLinkClient *client;
@property (copy, nonatomic) NSString *destinationID;
@property (copy, nonatomic) NSString *identifier;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;

@end
