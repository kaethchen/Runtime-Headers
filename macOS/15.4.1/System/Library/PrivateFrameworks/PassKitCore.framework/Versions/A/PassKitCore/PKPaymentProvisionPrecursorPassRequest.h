@class NSString, NSArray;

@interface PKPaymentProvisionPrecursorPassRequest : PKPaymentWebServiceRequest {
    NSString *_passTypeIdentifier;
    NSString *_passSerialNumber;
    NSArray *_actions;
}

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)initWithPassTypeIdentifier:(id)a0 passSerialNumber:(id)a1 actions:(id)a2;

@end
