@class NSData, NSURL;

@interface AMSCardRegistrationResult : NSObject

@property (readonly) NSData *cardData;
@property (readonly) NSURL *brokerURL;
@property (readonly) NSURL *paymentServicesURL;

- (void).cxx_destruct;

@end
