@class NSData, NSURL, NSError;

@interface PKAMPCardRegistrationResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *cardData;
@property (retain, nonatomic) NSURL *brokerURL;
@property (retain, nonatomic) NSURL *paymentServicesURL;
@property (retain, nonatomic) NSError *error;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCardData:(id)a0 brokerURL:(id)a1 paymentServicesURL:(id)a2 error:(id)a3;

@end
